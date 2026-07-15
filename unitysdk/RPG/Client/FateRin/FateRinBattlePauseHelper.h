#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Challenge { class FateRinBattlePauseChallengeViewModel; }
namespace System { class String; }

#define RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_GETCURBATTLESTAGEID_OFFSET UNITYSDK_OFFSET(0x1A386E30)
#define RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_GETCURFIGHTENEMYHOUGUDESC_OFFSET UNITYSDK_OFFSET(0x1A386CC0)
#define RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1A386C20)
#define RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_ISINSTORYFIGHT_OFFSET UNITYSDK_OFFSET(0x1A387310)
#define RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_RESTARTBATTLE_OFFSET UNITYSDK_OFFSET(0x1A387480)
#define RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_TRYGETPAUSECHALLENGEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A3870B0)
#define RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A386CB0)
#define RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER__ONBACKTOADVENTUREPHASEFROMCHALLENGE_OFFSET UNITYSDK_OFFSET(0x1A387930)
#define RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER__ONBACKTOADVENTUREPHASEFROMHOUGUFIGHT_OFFSET UNITYSDK_OFFSET(0x1A387B00)
#define RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER__ONBACKTOADVENTUREPHASEFROMSTORYFIGHT_OFFSET UNITYSDK_OFFSET(0x1A387D40)

namespace RPG::Client::FateRin
{
	inline static constexpr unsigned int FateRinBattlePauseHelper_TypeDefinitionIndex = 75655;

	class FateRinBattlePauseHelper : public ::System::Object
	{
	public:
		static ::RPG::Client::FateRin::FateRinBattlePauseHelper** StaticGet__Instance()
		{
			return (::RPG::Client::FateRin::FateRinBattlePauseHelper**)Il2CppClass::FromTypeDefinitionIndex(FateRinBattlePauseHelper_TypeDefinitionIndex)->GetStaticField(0xABC0);
		}
		::System::UInt32 _WillRestartFightID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::FateRin::FateRinBattlePauseHelper* get_Instance()
		{
			return ((::RPG::Client::FateRin::FateRinBattlePauseHelper*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_GET_INSTANCE_OFFSET))();
		}

		::System::String* GetCurFightEnemyHouguDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_GETCURFIGHTENEMYHOUGUDESC_OFFSET))(this);
		}

		::RPG::Client::FateRin::Challenge::FateRinBattlePauseChallengeViewModel* TryGetPauseChallengeViewModel()
		{
			return ((::RPG::Client::FateRin::Challenge::FateRinBattlePauseChallengeViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_TRYGETPAUSECHALLENGEVIEWMODEL_OFFSET))(this);
		}

		::System::Boolean IsInStoryFight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_ISINSTORYFIGHT_OFFSET))(this);
		}

		::System::UInt32 GetCurBattleStageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_GETCURBATTLESTAGEID_OFFSET))(this);
		}

		::System::Void RestartBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_RESTARTBATTLE_OFFSET))(this);
		}

		::System::Void _OnBackToAdventurePhaseFromChallenge(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER__ONBACKTOADVENTUREPHASEFROMCHALLENGE_OFFSET))(this, a1);
		}

		::System::Void _OnBackToAdventurePhaseFromHouguFight(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER__ONBACKTOADVENTUREPHASEFROMHOUGUFIGHT_OFFSET))(this, a1);
		}

		::System::Void _OnBackToAdventurePhaseFromStoryFight(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER__ONBACKTOADVENTUREPHASEFROMSTORYFIGHT_OFFSET))(this, a1);
		}
	};
}
