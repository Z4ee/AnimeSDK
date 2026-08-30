#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetSwitchMascotLockDistance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1C64AF3A5BDBE624_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16321010)
#define CLASS_3_1C64AF3A5BDBE624__CTOR_OFFSET UNITYSDK_OFFSET(0x16320FE0)

inline static constexpr unsigned int Class_3_1C64AF3A5BDBE624_TypeDefinitionIndex = 58730;

class Class_3_1C64AF3A5BDBE624 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetSwitchMascotLockDistance*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetSwitchMascotLockDistance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetSwitchMascotLockDistance*))((::PBYTE)hIl2Cpp + CLASS_3_1C64AF3A5BDBE624__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1C64AF3A5BDBE624_ONTASKBEGIN_OFFSET))(this);
	}
};
