#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_3.h"
#include "unitysdk/RPG/Client/ActivityMarble/MarblePVPMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T> class PrefList_1; }
namespace RPG::Client::ActivityMarble { class MarblePVEMatchContext; }
namespace RPG::Client::ActivityMarble { class MarblePVPMatchContext; }
namespace RPG::Client::ActivityMarble { class MarblePvePlayer; }
namespace RPG::Client::ActivityMarble { class MarbleSealData; }
namespace RPG::Client::ActivityMarble { class MarbleSealTeamSelection; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MarblePVPRankConfigRow; }
namespace RPG::GameCore { class MarbleSealTalkConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYMARBLEUTILS_CREATEMARBLETEACHMATCH_OFFSET UNITYSDK_OFFSET(0x8F6FB40)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_CREATEOPPONENTNPCENTITY_OFFSET UNITYSDK_OFFSET(0x8F703D0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_CREATEPVPFREEMATCHCONTEXT_OFFSET UNITYSDK_OFFSET(0x8F5ED60)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_CREATEPVPINVITEMATCHCONTEXT_OFFSET UNITYSDK_OFFSET(0x8F5EE40)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_CREATEPVPMULTIPLAYFREEMATCHCONTEXT_OFFSET UNITYSDK_OFFSET(0x8F5EF20)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_CREATEPVPMULTIPLAYINVITATIONMATCHCONTEXT_OFFSET UNITYSDK_OFFSET(0x8F5F000)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_DISPOSEOPPONENTNPCENTITY_OFFSET UNITYSDK_OFFSET(0x8F706A0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_GETALLRANKCONFIG_OFFSET UNITYSDK_OFFSET(0x8F708D0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_GETENEMYSWIMRINGNODEPATH_OFFSET UNITYSDK_OFFSET(0x8F5D880)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_GETGAMEMODEFROMPVPMODE_OFFSET UNITYSDK_OFFSET(0x8F5FBB0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_GETMAXDISPLAYMARBLESEALCOUNT_OFFSET UNITYSDK_OFFSET(0x8F6B4D0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_GETMAXTEAMMARBLESEALCOUNT_OFFSET UNITYSDK_OFFSET(0x8F643E0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_GETPREFPVPMARBLESEALIDS_OFFSET UNITYSDK_OFFSET(0x8F702A0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_GETPVPMARBLESEALIDS_OFFSET UNITYSDK_OFFSET(0x8F63CA0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_GETSEALTALKCONFIGROW_OFFSET UNITYSDK_OFFSET(0x8F6F4F0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_GETSELFSWIMRINGNODEPATH_OFFSET UNITYSDK_OFFSET(0x8F5D820)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_ISCAMERABLENDING_OFFSET UNITYSDK_OFFSET(0x8F70B40)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_OPENMARBLEMAINPAGE_OFFSET UNITYSDK_OFFSET(0x8F70D50)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_OPENMARBLEMATCHPAGE_OFFSET UNITYSDK_OFFSET(0x8F6F550)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_RECORDMARBLESEALSEEN_OFFSET UNITYSDK_OFFSET(0x8F70C10)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_SAVEPVEMARBLETEAMSELECTION_OFFSET UNITYSDK_OFFSET(0x8F6FFD0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_SAVEPVPMARBLETEAMSELECTION_OFFSET UNITYSDK_OFFSET(0x8F70010)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_SWITCHTOMULTIPLAYMARBLEMATCHPAGE_OFFSET UNITYSDK_OFFSET(0x8F6F990)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x8F70ED0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityMarbleUtils_TypeDefinitionIndex = 53431;

	class ActivityMarbleUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::Enum_3_F80BFD5B986D5503_3, ::System::UInt32>** StaticGet_FightGameModeToActivityID()
		{
			return (::System::Collections::Generic::Dictionary_2<::Enum_3_F80BFD5B986D5503_3, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityMarbleUtils_TypeDefinitionIndex)->GetStaticField(0x2D710);
		}
		static ::System::Collections::Generic::Dictionary_2<::Enum_3_F80BFD5B986D5503_3, ::System::UInt32>** StaticGet__MaxTeamMarbleSealCount()
		{
			return (::System::Collections::Generic::Dictionary_2<::Enum_3_F80BFD5B986D5503_3, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityMarbleUtils_TypeDefinitionIndex)->GetStaticField(0x2D718);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS__CCTOR_OFFSET))();
		}

		static ::System::String* GetSelfSwimRingNodePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_GETSELFSWIMRINGNODEPATH_OFFSET))();
		}

		static ::System::String* GetEnemySwimRingNodePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_GETENEMYSWIMRINGNODEPATH_OFFSET))();
		}

		static ::RPG::GameCore::MarbleSealTalkConfigRow* GetSealTalkConfigRow(::System::UInt32 talkID)
		{
			return ((::RPG::GameCore::MarbleSealTalkConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_GETSEALTALKCONFIGROW_OFFSET))(talkID);
		}

		static ::System::Void OpenMarbleMatchPage()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_OPENMARBLEMATCHPAGE_OFFSET))();
		}

		static ::System::Void SwitchToMultiplayMarbleMatchPage()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_SWITCHTOMULTIPLAYMARBLEMATCHPAGE_OFFSET))();
		}

		static ::RPG::Client::ActivityMarble::MarblePVEMatchContext* CreateMarbleTeachMatch()
		{
			return ((::RPG::Client::ActivityMarble::MarblePVEMatchContext*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_CREATEMARBLETEACHMATCH_OFFSET))();
		}

		static ::System::Void SavePVEMarbleTeamSelection(::RPG::Client::ActivityMarble::MarbleSealTeamSelection* selection)
		{
			return ((::System::Void(*)(::RPG::Client::ActivityMarble::MarbleSealTeamSelection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_SAVEPVEMARBLETEAMSELECTION_OFFSET))(selection);
		}

		static ::System::Void SavePVPMarbleTeamSelection(::RPG::Client::ActivityMarble::MarbleSealTeamSelection* selection, ::Enum_3_F80BFD5B986D5503_3 gameMode)
		{
			return ((::System::Void(*)(::RPG::Client::ActivityMarble::MarbleSealTeamSelection*, ::Enum_3_F80BFD5B986D5503_3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_SAVEPVPMARBLETEAMSELECTION_OFFSET))(selection, gameMode);
		}

		static ::RPG::Client::ActivityMarble::MarblePVPMatchContext* CreatePVPInviteMatchContext()
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPMatchContext*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_CREATEPVPINVITEMATCHCONTEXT_OFFSET))();
		}

		static ::RPG::Client::ActivityMarble::MarblePVPMatchContext* CreatePVPFreeMatchContext()
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPMatchContext*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_CREATEPVPFREEMATCHCONTEXT_OFFSET))();
		}

		static ::RPG::Client::ActivityMarble::MarblePVPMatchContext* CreatePVPMultiplayFreeMatchContext()
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPMatchContext*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_CREATEPVPMULTIPLAYFREEMATCHCONTEXT_OFFSET))();
		}

		static ::RPG::Client::ActivityMarble::MarblePVPMatchContext* CreatePVPMultiplayInvitationMatchContext()
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPMatchContext*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_CREATEPVPMULTIPLAYINVITATIONMATCHCONTEXT_OFFSET))();
		}

		static ::RPG::Client::PrefList_1<::System::UInt32>* GetPrefPVPMarbleSealIDs(::Enum_3_F80BFD5B986D5503_3 gameMode)
		{
			return ((::RPG::Client::PrefList_1<::System::UInt32>*(*)(::Enum_3_F80BFD5B986D5503_3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_GETPREFPVPMARBLESEALIDS_OFFSET))(gameMode);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetPVPMarbleSealIDs(::Enum_3_F80BFD5B986D5503_3 gameMode)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::Enum_3_F80BFD5B986D5503_3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_GETPVPMARBLESEALIDS_OFFSET))(gameMode);
		}

		static ::System::Int32 GetMaxTeamMarbleSealCount(::Enum_3_F80BFD5B986D5503_3 gameMode)
		{
			return ((::System::Int32(*)(::Enum_3_F80BFD5B986D5503_3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_GETMAXTEAMMARBLESEALCOUNT_OFFSET))(gameMode);
		}

		static ::System::UInt32 GetMaxDisplayMarbleSealCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_GETMAXDISPLAYMARBLESEALCOUNT_OFFSET))();
		}

		static ::RPG::GameCore::GameEntity* CreateOpponentNpcEntity(::RPG::Client::ActivityMarble::MarblePvePlayer* opponent, ::UnityEngine::Transform* root)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::Client::ActivityMarble::MarblePvePlayer*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_CREATEOPPONENTNPCENTITY_OFFSET))(opponent, root);
		}

		static ::System::Void DisposeOpponentNpcEntity(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_DISPOSEOPPONENTNPCENTITY_OFFSET))(entity);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::MarblePVPRankConfigRow*>* GetAllRankConfig()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::MarblePVPRankConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_GETALLRANKCONFIG_OFFSET))();
		}

		static ::System::Boolean IsCameraBlending()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_ISCAMERABLENDING_OFFSET))();
		}

		static ::System::Void RecordMarbleSealSeen(::RPG::Client::ActivityMarble::MarbleSealData* data)
		{
			return ((::System::Void(*)(::RPG::Client::ActivityMarble::MarbleSealData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_RECORDMARBLESEALSEEN_OFFSET))(data);
		}

		static ::System::Void OpenMarbleMainPage(::System::UInt32 tabID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_OPENMARBLEMAINPAGE_OFFSET))(tabID);
		}

		static ::Enum_3_F80BFD5B986D5503_3 GetGameModeFromPVPMode(::RPG::Client::ActivityMarble::MarblePVPMode mode)
		{
			return ((::Enum_3_F80BFD5B986D5503_3(*)(::RPG::Client::ActivityMarble::MarblePVPMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_GETGAMEMODEFROMPVPMODE_OFFSET))(mode);
		}
	};
}
