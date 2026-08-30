#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatV2StageState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_87F2ABA4DD338819;
namespace RPG::Client { class DiceCombatModule; }
namespace RPG::Client { class PlayerPlatformInfo; }
namespace RPG::Client { class UIDraggableManager; }
namespace RPG::Client::DiceCombat { class DiceCombatV2GameFlow; }
namespace RPG::Client::DiceCombat { class DiceCombatV2Lobby; }
namespace RPG::Client::DiceCombat { class DiceCombatV2PvPTitleData; }
namespace RPG::Client::DiceCombat { class DiceCombatV2RankLevelData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_CREATEROBOTPLATFORMINFO_OFFSET UNITYSDK_OFFSET(0xCD612D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_FETCHDEPENDANTSUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xCD61130)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GETAVAILABLECOMMUNICATEIDLIST_OFFSET UNITYSDK_OFFSET(0xCD604B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GETAVATARTARGETDICEFACEEFFECTCONFIG_OFFSET UNITYSDK_OFFSET(0xCD5FFE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GETBOSSDIALOGSHOWTIME_OFFSET UNITYSDK_OFFSET(0xCD5FEE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GETBRANDRANKINGTALKCONTENT_OFFSET UNITYSDK_OFFSET(0xCD60320)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GETDICETYPETOASTICONPATHBYID_OFFSET UNITYSDK_OFFSET(0xCD5D0C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GETLATESTUNLOCKEDPVESTAGEIDINSTAGEPAGE_OFFSET UNITYSDK_OFFSET(0xCD60D40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GETOPPONENTATKUPPREVIEWVALUE_OFFSET UNITYSDK_OFFSET(0xCD608F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GETPLAYERCARDAVAILABLECOMMUNICATEIDLIST_OFFSET UNITYSDK_OFFSET(0xCD606D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GETPVESTAGESTATEBYSTAGEID_OFFSET UNITYSDK_OFFSET(0xCD59320)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GETPVPSTAGESTATEBYSTAGEID_OFFSET UNITYSDK_OFFSET(0xCD5AD90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GETPVPUNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xCD5FE10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GETRANKLEVELINFOBYSCORE_OFFSET UNITYSDK_OFFSET(0xCD60F40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GETSTARTBATTLECUSTOMSTRINGBYPVESTAGEID_OFFSET UNITYSDK_OFFSET(0xCD60BB0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GETTACTICSSHOPREFRESHCOST_OFFSET UNITYSDK_OFFSET(0xCD5FC10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GETTACTICSSHOPREFRESHMAXTIME_OFFSET UNITYSDK_OFFSET(0xCD5FD10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GETTITLEFROMNOTIFYBYUID_OFFSET UNITYSDK_OFFSET(0xCD5A280)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GET_GAMEFLOW_OFFSET UNITYSDK_OFFSET(0xCD55D30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GET_MODULE_OFFSET UNITYSDK_OFFSET(0xCD5FAE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GET_PVPLOBBY_OFFSET UNITYSDK_OFFSET(0xCD5FB60)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_ISPVPUNLOCK_OFFSET UNITYSDK_OFFSET(0xCD5C7E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_REGISTERCUSTOMPOSITIONSETTER_OFFSET UNITYSDK_OFFSET(0xCD60AC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL__REGISTERCUSTOMPOSITIONSETTER_G__SETTER_15_0_OFFSET UNITYSDK_OFFSET(0xCD613A0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2Util_TypeDefinitionIndex = 75700;

	class DiceCombatV2Util : public ::System::Object
	{
	public:
		static ::RPG::Client::DiceCombatModule* get_Module()
		{
			return ((::RPG::Client::DiceCombatModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GET_MODULE_OFFSET))();
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2GameFlow* get_GameFlow()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2GameFlow*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GET_GAMEFLOW_OFFSET))();
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2Lobby* get_PVPLobby()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2Lobby*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GET_PVPLOBBY_OFFSET))();
		}

		static ::System::UInt32 GetTacticsShopRefreshCost()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GETTACTICSSHOPREFRESHCOST_OFFSET))();
		}

		static ::System::UInt32 GetTacticsShopRefreshMaxTime()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GETTACTICSSHOPREFRESHMAXTIME_OFFSET))();
		}

		static ::System::UInt32 GetPVPUnlockSubMissionID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GETPVPUNLOCKSUBMISSIONID_OFFSET))();
		}

		static ::System::UInt32 GetBossDialogShowTime()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GETBOSSDIALOGSHOWTIME_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* GetAvatarTargetDiceFaceEffectConfig()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GETAVATARTARGETDICEFACEEFFECTCONFIG_OFFSET))();
		}

		static ::RPG::Client::TextID GetBrandRankingTalkContent(::System::Int32 a1)
		{
			return ((::RPG::Client::TextID(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GETBRANDRANKINGTALKCONTENT_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetAvailableCommunicateIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GETAVAILABLECOMMUNICATEIDLIST_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetPlayerCardAvailableCommunicateIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GETPLAYERCARDAVAILABLECOMMUNICATEIDLIST_OFFSET))();
		}

		static ::System::Int32 GetOpponentAtkUpPreviewValue(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GETOPPONENTATKUPPREVIEWVALUE_OFFSET))(a1);
		}

		static ::System::Void RegisterCustomPositionSetter(::RPG::Client::UIDraggableManager* a1)
		{
			return ((::System::Void(*)(::RPG::Client::UIDraggableManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_REGISTERCUSTOMPOSITIONSETTER_OFFSET))(a1);
		}

		static ::System::String* GetStartBattleCustomStringByPVEStageID(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GETSTARTBATTLECUSTOMSTRINGBYPVESTAGEID_OFFSET))(a1);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2StageState GetPVEStageStateByStageID(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2StageState(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GETPVESTAGESTATEBYSTAGEID_OFFSET))(a1);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2StageState GetPVPStageStateByStageID(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2StageState(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GETPVPSTAGESTATEBYSTAGEID_OFFSET))(a1);
		}

		static ::System::UInt32 GetLatestUnlockedPVEStageIDInStagePage()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GETLATESTUNLOCKEDPVESTAGEIDINSTAGEPAGE_OFFSET))();
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2RankLevelData* GetRankLevelInfoByScore(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2RankLevelData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GETRANKLEVELINFOBYSCORE_OFFSET))(a1);
		}

		static ::System::String* GetDiceTypeToastIconPathByID(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GETDICETYPETOASTICONPATHBYID_OFFSET))(a1);
		}

		static ::System::Void FetchDependantSubMissionIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_FETCHDEPENDANTSUBMISSIONIDS_OFFSET))(a1);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData* GetTitleFromNotifyByUid(::Class_1_87F2ABA4DD338819* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData*(*)(::Class_1_87F2ABA4DD338819*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_GETTITLEFROMNOTIFYBYUID_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsPVPUnlock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_ISPVPUNLOCK_OFFSET))();
		}

		static ::RPG::Client::PlayerPlatformInfo* CreateRobotPlatformInfo()
		{
			return ((::RPG::Client::PlayerPlatformInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL_CREATEROBOTPLATFORMINFO_OFFSET))();
		}

		static ::System::Void _RegisterCustomPositionSetter_g__Setter_15_0(::UnityEngine::Transform* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL__REGISTERCUSTOMPOSITIONSETTER_G__SETTER_15_0_OFFSET))(a1, a2);
		}
	};
}
