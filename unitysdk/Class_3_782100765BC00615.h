#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetFloorCustomFloatV2; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_782100765BC00615_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD7F2630)
#define CLASS_3_782100765BC00615__CTOR_OFFSET UNITYSDK_OFFSET(0xD7F2600)

inline static constexpr unsigned int Class_3_782100765BC00615_TypeDefinitionIndex = 49753;

class Class_3_782100765BC00615 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetFloorCustomFloatV2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetFloorCustomFloatV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetFloorCustomFloatV2*))((::PBYTE)hIl2Cpp + CLASS_3_782100765BC00615__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_782100765BC00615_ONTASKBEGIN_OFFSET))(this);
	}
};
