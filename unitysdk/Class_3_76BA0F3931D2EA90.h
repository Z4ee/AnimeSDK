#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class ToggleHitCountUITop; }

#define CLASS_3_76BA0F3931D2EA90_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12A4B8F0)
#define CLASS_3_76BA0F3931D2EA90__CTOR_OFFSET UNITYSDK_OFFSET(0x12A4B8C0)

inline static constexpr unsigned int Class_3_76BA0F3931D2EA90_TypeDefinitionIndex = 51360;

class Class_3_76BA0F3931D2EA90 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ToggleHitCountUITop*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ToggleHitCountUITop* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ToggleHitCountUITop*))((::PBYTE)hIl2Cpp + CLASS_3_76BA0F3931D2EA90__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76BA0F3931D2EA90_ONTASKBEGIN_OFFSET))(this);
	}
};
