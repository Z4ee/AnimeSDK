#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
#include "unitysdk/RPG/GameCore/CakeRaceFightStateType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEACTIONTRIGGERACTIONONFIGHT_METHOD_3_32F0F84D89D909C4_OFFSET UNITYSDK_OFFSET(0x1CF70CC0)
#define RPG_GAMECORE_CAKERACEACTIONTRIGGERACTIONONFIGHT_METHOD_3_FE11176BAE79F619_OFFSET UNITYSDK_OFFSET(0x1CF70C80)
#define RPG_GAMECORE_CAKERACEACTIONTRIGGERACTIONONFIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF70CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionTriggerActionOnFight_TypeDefinitionIndex = 18143;

	class CakeRaceActionTriggerActionOnFight : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::RPG::GameCore::CakeRaceFightStateType TriggerType; // 0x10
		::System::UInt32 ShowDurationMs; // 0x14
		::System::Boolean OnlyExecuteOnce; // 0x18
		::System::Boolean ExecuteBeforeBeginDelay; // 0x19
		::RPG::GameCore::CakeRaceActionBase* Action; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONTRIGGERACTIONONFIGHT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FE11176BAE79F619(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionTriggerActionOnFight*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionTriggerActionOnFight*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONTRIGGERACTIONONFIGHT_METHOD_3_FE11176BAE79F619_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_32F0F84D89D909C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionTriggerActionOnFight* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionTriggerActionOnFight*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONTRIGGERACTIONONFIGHT_METHOD_3_32F0F84D89D909C4_OFFSET))(a1, a2);
		}
	};
}
