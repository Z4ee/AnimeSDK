#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SwitchMascotTriggerUIShootEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2F41147A266B8705_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1383DE10)
#define CLASS_3_2F41147A266B8705__CTOR_OFFSET UNITYSDK_OFFSET(0x1383DDE0)

inline static constexpr unsigned int Class_3_2F41147A266B8705_TypeDefinitionIndex = 54892;

class Class_3_2F41147A266B8705 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SwitchMascotTriggerUIShootEffect*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchMascotTriggerUIShootEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchMascotTriggerUIShootEffect*))((::PBYTE)hIl2Cpp + CLASS_3_2F41147A266B8705__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2F41147A266B8705_ONTASKBEGIN_OFFSET))(this);
	}
};
