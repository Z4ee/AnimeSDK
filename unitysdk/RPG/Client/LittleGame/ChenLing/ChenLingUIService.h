#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/CirticalTrackType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingDamageType.h"
#include "unitysdk/System/Object.h"

class Class_2_181A7F9409C60DBC;
class Class_2_E9C9AAD7C711B3E3;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameFlow; }
namespace RPG::Client::LittleGame::ChenLing { class ChenLingRTDamageCollection; }
namespace RPG::Client::LittleGame::ChenLing { class ChenLingShowToastData; }
namespace RPG::Client::LittleGame::ChenLing { class SoldierInitData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_GETSOLDIERINITDATA_OFFSET UNITYSDK_OFFSET(0x9998C40)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYARMYNUMBERCHANGE_OFFSET UNITYSDK_OFFSET(0x9997240)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYBATTLEFINISHED_OFFSET UNITYSDK_OFFSET(0x9998BE0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYBLOCKCHANGE_OFFSET UNITYSDK_OFFSET(0x9997EC0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYENTERRAGEMODE_OFFSET UNITYSDK_OFFSET(0x9998B10)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYGAINCOINCHANGE_OFFSET UNITYSDK_OFFSET(0x99984D0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYHPCHANGE_OFFSET UNITYSDK_OFFSET(0x99975F0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYHPMEMORYCHANGE_OFFSET UNITYSDK_OFFSET(0x9997AC0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYIMMUNITYCHANGE_OFFSET UNITYSDK_OFFSET(0x9997B80)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYRTDAMAGECHANGE_OFFSET UNITYSDK_OFFSET(0x9998210)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYSHOWTALK_OFFSET UNITYSDK_OFFSET(0x99990F0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYSHOWTOAST_OFFSET UNITYSDK_OFFSET(0x9998B70)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYSOLDIERDEAD_OFFSET UNITYSDK_OFFSET(0x99987C0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYSOLDIERSPAWNED_OFFSET UNITYSDK_OFFSET(0x9998870)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x99971A0)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingUIService_TypeDefinitionIndex = 63280;

	class ChenLingUIService : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingBattleGameFlow* _Flow; // 0x10
		::Class_2_E9C9AAD7C711B3E3* _Context; // 0x18
		::RPG::Client::LittleGame::ChenLing::ChenLingRTDamageCollection* _RTDamageDataCollection; // 0x20

		::System::Void _ctor(::Class_2_E9C9AAD7C711B3E3* context, ::RPG::Client::ChenLingBattle::ChenLingBattleGameFlow* flow)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_E9C9AAD7C711B3E3*, ::RPG::Client::ChenLingBattle::ChenLingBattleGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE__CTOR_OFFSET))(this, context, flow);
		}

		::System::Void NotifyArmyNumberChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYARMYNUMBERCHANGE_OFFSET))(this);
		}

		::System::Void NotifyHPChange(::Class_2_181A7F9409C60DBC* defender, ::System::Int32 deltaHP, ::RPG::Client::LittleGame::ChenLing::CirticalTrackType cirticalTrackType, ::RPG::GameCore::ChenLingDamageType damageType)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::System::Int32, ::RPG::Client::LittleGame::ChenLing::CirticalTrackType, ::RPG::GameCore::ChenLingDamageType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYHPCHANGE_OFFSET))(this, defender, deltaHP, cirticalTrackType, damageType);
		}

		::System::Void NotifyHPMemoryChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYHPMEMORYCHANGE_OFFSET))(this);
		}

		::System::Void NotifyImmunityChange(::Class_2_181A7F9409C60DBC* defender)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYIMMUNITYCHANGE_OFFSET))(this, defender);
		}

		::System::Void NotifyBlockChange(::Class_2_181A7F9409C60DBC* defender, ::System::Int32 deltaBlock)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYBLOCKCHANGE_OFFSET))(this, defender, deltaBlock);
		}

		::System::Void NotifyRTDamageChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYRTDAMAGECHANGE_OFFSET))(this);
		}

		::System::Void NotifyGainCoinChange(::Class_2_181A7F9409C60DBC* victim, ::System::Int32 deltaCoin)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYGAINCOINCHANGE_OFFSET))(this, victim, deltaCoin);
		}

		::System::Void NotifySoldierDead(::Class_2_181A7F9409C60DBC* soldier)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYSOLDIERDEAD_OFFSET))(this, soldier);
		}

		::System::Void NotifySoldierSpawned(::Class_2_181A7F9409C60DBC* soldier)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYSOLDIERSPAWNED_OFFSET))(this, soldier);
		}

		::System::Void NotifyEnterRageMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYENTERRAGEMODE_OFFSET))(this);
		}

		::System::Void NotifyShowToast(::RPG::Client::LittleGame::ChenLing::ChenLingShowToastData* toastData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingShowToastData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYSHOWTOAST_OFFSET))(this, toastData);
		}

		::System::Void NotifyBattleFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYBATTLEFINISHED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChenLing::SoldierInitData*>* GetSoldierInitData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChenLing::SoldierInitData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_GETSOLDIERINITDATA_OFFSET))(this);
		}

		::System::Void NotifyShowTalk(::System::UInt32 target, ::RPG::Client::TextID text)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYSHOWTALK_OFFSET))(this, target, text);
		}
	};
}
