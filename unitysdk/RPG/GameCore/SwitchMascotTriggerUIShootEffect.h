#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWITCHMASCOTTRIGGERUISHOOTEFFECT_METHOD_3_09C3BEDCF8A8DD14_OFFSET UNITYSDK_OFFSET(0x17797920)
#define RPG_GAMECORE_SWITCHMASCOTTRIGGERUISHOOTEFFECT_METHOD_3_B4FC283DE36AAA28_OFFSET UNITYSDK_OFFSET(0x17797810)
#define RPG_GAMECORE_SWITCHMASCOTTRIGGERUISHOOTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x177978F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchMascotTriggerUIShootEffect_TypeDefinitionIndex = 20179;

	class SwitchMascotTriggerUIShootEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTTRIGGERUISHOOTEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B4FC283DE36AAA28(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchMascotTriggerUIShootEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchMascotTriggerUIShootEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTTRIGGERUISHOOTEFFECT_METHOD_3_B4FC283DE36AAA28_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_09C3BEDCF8A8DD14(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchMascotTriggerUIShootEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchMascotTriggerUIShootEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTTRIGGERUISHOOTEFFECT_METHOD_3_09C3BEDCF8A8DD14_OFFSET))(a1, a2);
		}
	};
}
