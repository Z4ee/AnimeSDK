#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMKILLALLEFFECTACTION_METHOD_4_1C7BC98730B6FBC9_OFFSET UNITYSDK_OFFSET(0x1D6C5440)
#define RPG_GAMECORE_FIVEDIMKILLALLEFFECTACTION_METHOD_4_87BC93C785114E8C_OFFSET UNITYSDK_OFFSET(0x1D6C5520)
#define RPG_GAMECORE_FIVEDIMKILLALLEFFECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C5510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimKillAllEffectAction_TypeDefinitionIndex = 18743;

	class FiveDimKillAllEffectAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean NeedFadeOut; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMKILLALLEFFECTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1C7BC98730B6FBC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimKillAllEffectAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimKillAllEffectAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMKILLALLEFFECTACTION_METHOD_4_1C7BC98730B6FBC9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_87BC93C785114E8C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimKillAllEffectAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimKillAllEffectAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMKILLALLEFFECTACTION_METHOD_4_87BC93C785114E8C_OFFSET))(a1, a2);
		}
	};
}
