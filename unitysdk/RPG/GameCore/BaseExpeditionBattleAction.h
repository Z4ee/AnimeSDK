#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BASEEXPEDITIONBATTLEACTION_METHOD_2_0ECAEBB4444C2D25_OFFSET UNITYSDK_OFFSET(0x1B2ECCA0)
#define RPG_GAMECORE_BASEEXPEDITIONBATTLEACTION_METHOD_2_588B4444C20A8883_OFFSET UNITYSDK_OFFSET(0x1B2EC6F0)
#define RPG_GAMECORE_BASEEXPEDITIONBATTLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2ECD00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseExpeditionBattleAction_TypeDefinitionIndex = 16032;

	class BaseExpeditionBattleAction : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEEXPEDITIONBATTLEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_588B4444C20A8883(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseExpeditionBattleAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseExpeditionBattleAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEEXPEDITIONBATTLEACTION_METHOD_2_588B4444C20A8883_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_0ECAEBB4444C2D25(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseExpeditionBattleAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseExpeditionBattleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEEXPEDITIONBATTLEACTION_METHOD_2_0ECAEBB4444C2D25_OFFSET))(a1, a2);
		}
	};
}
