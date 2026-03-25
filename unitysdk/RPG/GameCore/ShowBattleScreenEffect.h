#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleScreenEffectType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SHOWBATTLESCREENEFFECT_METHOD_3_2093EEECD5D7D591_OFFSET UNITYSDK_OFFSET(0x176F5D80)
#define RPG_GAMECORE_SHOWBATTLESCREENEFFECT_METHOD_3_A4682E5CB6B62EE7_OFFSET UNITYSDK_OFFSET(0x176F5D00)
#define RPG_GAMECORE_SHOWBATTLESCREENEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x176F5D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBattleScreenEffect_TypeDefinitionIndex = 21480;

	class ShowBattleScreenEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::BattleScreenEffectType Type; // 0x18
		::System::Boolean Active; // 0x1C
		::System::String* UniqueName; // 0x20
		::System::String* Priority; // 0x28
		::System::String* EffectPath; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLESCREENEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A4682E5CB6B62EE7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleScreenEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleScreenEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLESCREENEFFECT_METHOD_3_A4682E5CB6B62EE7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2093EEECD5D7D591(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleScreenEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleScreenEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLESCREENEFFECT_METHOD_3_2093EEECD5D7D591_OFFSET))(a1, a2);
		}
	};
}
