#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/CirticalTrackType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingDamageType.h"
#include "unitysdk/System/Object.h"

class Class_2_2090B77B5C7838F2;
class Class_2_6B60059019300BAD;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameFlow; }
namespace RPG::Client::LittleGame::ChenLing { class ChenLingRTDamageCollection; }
namespace RPG::Client::LittleGame::ChenLing { class ChenLingShowToastData; }
namespace RPG::Client::LittleGame::ChenLing { class SoldierInitData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_GETSOLDIERINITDATA_OFFSET UNITYSDK_OFFSET(0x19B920B0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYARMYNUMBERCHANGE_OFFSET UNITYSDK_OFFSET(0x19B90690)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYBATTLEFINISHED_OFFSET UNITYSDK_OFFSET(0x19B92050)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYBLOCKCHANGE_OFFSET UNITYSDK_OFFSET(0x19B91330)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYENTERRAGEMODE_OFFSET UNITYSDK_OFFSET(0x19B91F80)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYGAINCOINCHANGE_OFFSET UNITYSDK_OFFSET(0x19B91950)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYHPCHANGE_OFFSET UNITYSDK_OFFSET(0x19B90A70)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYHPMEMORYCHANGE_OFFSET UNITYSDK_OFFSET(0x19B90F30)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYIMMUNITYCHANGE_OFFSET UNITYSDK_OFFSET(0x19B90FF0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYRTDAMAGECHANGE_OFFSET UNITYSDK_OFFSET(0x19B91670)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYSHOWTALK_OFFSET UNITYSDK_OFFSET(0x19B925F0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYSHOWTOAST_OFFSET UNITYSDK_OFFSET(0x19B91FE0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYSOLDIERDEAD_OFFSET UNITYSDK_OFFSET(0x19B91C20)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYSOLDIERSPAWNED_OFFSET UNITYSDK_OFFSET(0x19B91CE0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B905F0)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingUIService_TypeDefinitionIndex = 73867;

	class ChenLingUIService : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ChenLing::ChenLingRTDamageCollection* _RTDamageDataCollection; // 0x10
		::Class_2_2090B77B5C7838F2* _Context; // 0x18
		::RPG::Client::ChenLingBattle::ChenLingBattleGameFlow* _Flow; // 0x20

		::System::Void _ctor(::Class_2_2090B77B5C7838F2* a1, ::RPG::Client::ChenLingBattle::ChenLingBattleGameFlow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_2090B77B5C7838F2*, ::RPG::Client::ChenLingBattle::ChenLingBattleGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void NotifyArmyNumberChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYARMYNUMBERCHANGE_OFFSET))(this);
		}

		::System::Void NotifyHPChange(::Class_2_6B60059019300BAD* a1, ::System::Int32 a2, ::RPG::Client::LittleGame::ChenLing::CirticalTrackType a3, ::RPG::GameCore::ChenLingDamageType a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::System::Int32, ::RPG::Client::LittleGame::ChenLing::CirticalTrackType, ::RPG::GameCore::ChenLingDamageType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYHPCHANGE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NotifyHPMemoryChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYHPMEMORYCHANGE_OFFSET))(this);
		}

		::System::Void NotifyImmunityChange(::Class_2_6B60059019300BAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYIMMUNITYCHANGE_OFFSET))(this, a1);
		}

		::System::Void NotifyBlockChange(::Class_2_6B60059019300BAD* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYBLOCKCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void NotifyRTDamageChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYRTDAMAGECHANGE_OFFSET))(this);
		}

		::System::Void NotifyGainCoinChange(::Class_2_6B60059019300BAD* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYGAINCOINCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void NotifySoldierDead(::Class_2_6B60059019300BAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYSOLDIERDEAD_OFFSET))(this, a1);
		}

		::System::Void NotifySoldierSpawned(::Class_2_6B60059019300BAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYSOLDIERSPAWNED_OFFSET))(this, a1);
		}

		::System::Void NotifyEnterRageMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYENTERRAGEMODE_OFFSET))(this);
		}

		::System::Void NotifyShowToast(::RPG::Client::LittleGame::ChenLing::ChenLingShowToastData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingShowToastData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYSHOWTOAST_OFFSET))(this, a1);
		}

		::System::Void NotifyBattleFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYBATTLEFINISHED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChenLing::SoldierInitData*>* GetSoldierInitData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChenLing::SoldierInitData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_GETSOLDIERINITDATA_OFFSET))(this);
		}

		::System::Void NotifyShowTalk(::System::UInt32 a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGUISERVICE_NOTIFYSHOWTALK_OFFSET))(this, a1, a2);
		}
	};
}
