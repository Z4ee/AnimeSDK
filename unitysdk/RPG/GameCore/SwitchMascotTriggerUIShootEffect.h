#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWITCHMASCOTTRIGGERUISHOOTEFFECT_METHOD_3_09C3BEDCF8A8DD14_OFFSET UNITYSDK_OFFSET(0x1D58DDB0)
#define RPG_GAMECORE_SWITCHMASCOTTRIGGERUISHOOTEFFECT_METHOD_3_AEADB24403D4D351_OFFSET UNITYSDK_OFFSET(0x1D58DCE0)
#define RPG_GAMECORE_SWITCHMASCOTTRIGGERUISHOOTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D58DDA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchMascotTriggerUIShootEffect_TypeDefinitionIndex = 21755;

	class SwitchMascotTriggerUIShootEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTTRIGGERUISHOOTEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AEADB24403D4D351(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchMascotTriggerUIShootEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchMascotTriggerUIShootEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTTRIGGERUISHOOTEFFECT_METHOD_3_AEADB24403D4D351_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_09C3BEDCF8A8DD14(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchMascotTriggerUIShootEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchMascotTriggerUIShootEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTTRIGGERUISHOOTEFFECT_METHOD_3_09C3BEDCF8A8DD14_OFFSET))(a1, a2);
		}
	};
}
