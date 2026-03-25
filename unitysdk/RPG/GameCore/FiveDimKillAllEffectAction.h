#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMKILLALLEFFECTACTION_METHOD_3_1155A87AA86CE355_OFFSET UNITYSDK_OFFSET(0x171E87A0)
#define RPG_GAMECORE_FIVEDIMKILLALLEFFECTACTION_METHOD_3_85742BE2CE758E41_OFFSET UNITYSDK_OFFSET(0x171F7F20)
#define RPG_GAMECORE_FIVEDIMKILLALLEFFECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x171E8780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimKillAllEffectAction_TypeDefinitionIndex = 17204;

	class FiveDimKillAllEffectAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean NeedFadeOut; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMKILLALLEFFECTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_85742BE2CE758E41(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimKillAllEffectAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimKillAllEffectAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMKILLALLEFFECTACTION_METHOD_3_85742BE2CE758E41_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1155A87AA86CE355(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimKillAllEffectAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimKillAllEffectAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMKILLALLEFFECTACTION_METHOD_3_1155A87AA86CE355_OFFSET))(a1, a2);
		}
	};
}
