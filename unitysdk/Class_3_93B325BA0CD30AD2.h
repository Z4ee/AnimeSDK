#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropStartFarmElement; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_93B325BA0CD30AD2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x110C74E0)
#define CLASS_3_93B325BA0CD30AD2__CTOR_OFFSET UNITYSDK_OFFSET(0x110C74B0)

inline static constexpr unsigned int Class_3_93B325BA0CD30AD2_TypeDefinitionIndex = 47094;

class Class_3_93B325BA0CD30AD2 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropStartFarmElement*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropStartFarmElement* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropStartFarmElement*))((::PBYTE)hIl2Cpp + CLASS_3_93B325BA0CD30AD2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_93B325BA0CD30AD2_ONTASKBEGIN_OFFSET))(this);
	}
};
