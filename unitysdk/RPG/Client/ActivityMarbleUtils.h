#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_2.h"
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
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYMARBLEUTILS_CREATEMARBLETEACHMATCH_OFFSET UNITYSDK_OFFSET(0xC63BFF0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_CREATEOPPONENTNPCENTITY_OFFSET UNITYSDK_OFFSET(0xC63C8E0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_CREATEPVPFREEMATCHCONTEXT_OFFSET UNITYSDK_OFFSET(0xC629A40)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_CREATEPVPINVITEMATCHCONTEXT_OFFSET UNITYSDK_OFFSET(0xC629B30)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_CREATEPVPMULTIPLAYFREEMATCHCONTEXT_OFFSET UNITYSDK_OFFSET(0xC629C20)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_CREATEPVPMULTIPLAYINVITATIONMATCHCONTEXT_OFFSET UNITYSDK_OFFSET(0xC629D10)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_DISPOSEOPPONENTNPCENTITY_OFFSET UNITYSDK_OFFSET(0xC63CBA0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_GETALLRANKCONFIG_OFFSET UNITYSDK_OFFSET(0xC63CDC0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_GETENEMYSWIMRINGNODEPATH_OFFSET UNITYSDK_OFFSET(0xC628490)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_GETGAMEMODEFROMPVPMODE_OFFSET UNITYSDK_OFFSET(0xC62A910)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_GETMAXDISPLAYMARBLESEALCOUNT_OFFSET UNITYSDK_OFFSET(0xC637740)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_GETMAXTEAMMARBLESEALCOUNT_OFFSET UNITYSDK_OFFSET(0xC62F3E0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_GETPREFPVPMARBLESEALIDS_OFFSET UNITYSDK_OFFSET(0xC63C7B0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_GETPVPMARBLESEALIDS_OFFSET UNITYSDK_OFFSET(0xC62EE10)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_GETSEALTALKCONFIGROW_OFFSET UNITYSDK_OFFSET(0xC63B980)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_GETSELFSWIMRINGNODEPATH_OFFSET UNITYSDK_OFFSET(0xC628430)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_ISCAMERABLENDING_OFFSET UNITYSDK_OFFSET(0xC63D130)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_OPENMARBLEMAINPAGE_OFFSET UNITYSDK_OFFSET(0xC63D3D0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_OPENMARBLEMATCHPAGE_OFFSET UNITYSDK_OFFSET(0xC63B9E0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_RECORDMARBLESEALSEEN_OFFSET UNITYSDK_OFFSET(0xC63D260)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_SAVEPVEMARBLETEAMSELECTION_OFFSET UNITYSDK_OFFSET(0xC63C4B0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_SAVEPVPMARBLETEAMSELECTION_OFFSET UNITYSDK_OFFSET(0xC63C4F0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_SWITCHTOMULTIPLAYMARBLEMATCHPAGE_OFFSET UNITYSDK_OFFSET(0xC63BE40)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xC63D580)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityMarbleUtils_TypeDefinitionIndex = 65856;

	class ActivityMarbleUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::Enum_3_01618AD0437C8486_2, ::System::UInt32>** StaticGet_FightGameModeToActivityID()
		{
			return (::System::Collections::Generic::Dictionary_2<::Enum_3_01618AD0437C8486_2, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityMarbleUtils_TypeDefinitionIndex)->GetStaticField(0x5E9F0);
		}
		static ::System::Collections::Generic::Dictionary_2<::Enum_3_01618AD0437C8486_2, ::System::UInt32>** StaticGet__MaxTeamMarbleSealCount()
		{
			return (::System::Collections::Generic::Dictionary_2<::Enum_3_01618AD0437C8486_2, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityMarbleUtils_TypeDefinitionIndex)->GetStaticField(0x5E9F8);
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

		static ::RPG::GameCore::MarbleSealTalkConfigRow* GetSealTalkConfigRow(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MarbleSealTalkConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_GETSEALTALKCONFIGROW_OFFSET))(a1);
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

		static ::System::Void SavePVEMarbleTeamSelection(::RPG::Client::ActivityMarble::MarbleSealTeamSelection* a1)
		{
			return ((::System::Void(*)(::RPG::Client::ActivityMarble::MarbleSealTeamSelection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_SAVEPVEMARBLETEAMSELECTION_OFFSET))(a1);
		}

		static ::System::Void SavePVPMarbleTeamSelection(::RPG::Client::ActivityMarble::MarbleSealTeamSelection* a1, ::Enum_3_01618AD0437C8486_2 a2)
		{
			return ((::System::Void(*)(::RPG::Client::ActivityMarble::MarbleSealTeamSelection*, ::Enum_3_01618AD0437C8486_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_SAVEPVPMARBLETEAMSELECTION_OFFSET))(a1, a2);
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

		static ::RPG::Client::PrefList_1<::System::UInt32>* GetPrefPVPMarbleSealIDs(::Enum_3_01618AD0437C8486_2 a1)
		{
			return ((::RPG::Client::PrefList_1<::System::UInt32>*(*)(::Enum_3_01618AD0437C8486_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_GETPREFPVPMARBLESEALIDS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetPVPMarbleSealIDs(::Enum_3_01618AD0437C8486_2 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::Enum_3_01618AD0437C8486_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_GETPVPMARBLESEALIDS_OFFSET))(a1);
		}

		static ::System::Int32 GetMaxTeamMarbleSealCount(::Enum_3_01618AD0437C8486_2 a1)
		{
			return ((::System::Int32(*)(::Enum_3_01618AD0437C8486_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_GETMAXTEAMMARBLESEALCOUNT_OFFSET))(a1);
		}

		static ::System::UInt32 GetMaxDisplayMarbleSealCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_GETMAXDISPLAYMARBLESEALCOUNT_OFFSET))();
		}

		static ::RPG::GameCore::GameEntity* CreateOpponentNpcEntity(::RPG::Client::ActivityMarble::MarblePvePlayer* a1, ::UnityEngine::Transform* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::Client::ActivityMarble::MarblePvePlayer*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_CREATEOPPONENTNPCENTITY_OFFSET))(a1, a2);
		}

		static ::System::Void DisposeOpponentNpcEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_DISPOSEOPPONENTNPCENTITY_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::MarblePVPRankConfigRow*>* GetAllRankConfig()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::MarblePVPRankConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_GETALLRANKCONFIG_OFFSET))();
		}

		static ::System::Boolean IsCameraBlending()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_ISCAMERABLENDING_OFFSET))();
		}

		static ::System::Void RecordMarbleSealSeen(::RPG::Client::ActivityMarble::MarbleSealData* a1)
		{
			return ((::System::Void(*)(::RPG::Client::ActivityMarble::MarbleSealData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_RECORDMARBLESEALSEEN_OFFSET))(a1);
		}

		static ::System::Void OpenMarbleMainPage(::System::UInt32 a1, ::System::Action* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_OPENMARBLEMAINPAGE_OFFSET))(a1, a2, a3);
		}

		static ::Enum_3_01618AD0437C8486_2 GetGameModeFromPVPMode(::RPG::Client::ActivityMarble::MarblePVPMode a1)
		{
			return ((::Enum_3_01618AD0437C8486_2(*)(::RPG::Client::ActivityMarble::MarblePVPMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_GETGAMEMODEFROMPVPMODE_OFFSET))(a1);
		}
	};
}
