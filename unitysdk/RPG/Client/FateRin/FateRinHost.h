#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1267;
class Class_1_0D8C9ED8919282E9_2;
class Class_1_7B4E9156998275BE;
namespace RPG::Client { class UIController; }
namespace RPG::Client::FateRin { class IFateRinServiceProvider; }
namespace RPG::Client::FateRin::Avatar { class FateRinBattleAvatarUltraDetailOpenParam; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleEnemyStatusDetailViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleSkillDetailViewModel; }
namespace RPG::Client::FateRin::Card { class IFateRinReplaceCardViewModel; }
namespace RPG::Client::FateRin::RedDot { class FateRinCaseBoardRedDotFilter; }
namespace RPG::Client::FateRin::RedDot { class FateRinDeckEditRedDotFilter; }
namespace RPG::Client::FateRin::RedDot { class FateRinHouguMapFightRedDotFilter; }
namespace RPG::Client::FateRin::RedDot { class FateRinResidentRewardRedDotFilter; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_FATERIN_FATERINHOST_ASYNCSHOWCHALLENGEENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0x1A388BF0)
#define RPG_CLIENT_FATERIN_FATERINHOST_ASYNCSHOWHOUGUMAPPAGE_OFFSET UNITYSDK_OFFSET(0x1A388A70)
#define RPG_CLIENT_FATERIN_FATERINHOST_ASYNCSHOWMAINPAGE_OFFSET UNITYSDK_OFFSET(0x1A388320)
#define RPG_CLIENT_FATERIN_FATERINHOST_CANPLAYEASTEREGGPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1A388400)
#define RPG_CLIENT_FATERIN_FATERINHOST_CLOSEEASTEREGGTRANSFERMASK_OFFSET UNITYSDK_OFFSET(0x1A38A600)
#define RPG_CLIENT_FATERIN_FATERINHOST_CREATEBATTLEHUDPAGE_OFFSET UNITYSDK_OFFSET(0x1A388130)
#define RPG_CLIENT_FATERIN_FATERINHOST_GETFATERINCOLLECTIONACTIVITYCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A38A490)
#define RPG_CLIENT_FATERIN_FATERINHOST_GETTRACKEDHOUGUMAPFIGHTENTRANCEID_OFFSET UNITYSDK_OFFSET(0x1A389F40)
#define RPG_CLIENT_FATERIN_FATERINHOST_GET_CASEBOARDREDDOTFILTER_OFFSET UNITYSDK_OFFSET(0x1A38B770)
#define RPG_CLIENT_FATERIN_FATERINHOST_GET_DECKEDITREDDOTFILTER_OFFSET UNITYSDK_OFFSET(0x1A38B680)
#define RPG_CLIENT_FATERIN_FATERINHOST_GET_HOUGUMAPFIGHTREDDOTFILTER_OFFSET UNITYSDK_OFFSET(0x1A38B590)
#define RPG_CLIENT_FATERIN_FATERINHOST_GET_RESIDENTREWARDREDDOTFILTER_OFFSET UNITYSDK_OFFSET(0x1A38B4A0)
#define RPG_CLIENT_FATERIN_FATERINHOST_GET_SERVICEPROVIDER_OFFSET UNITYSDK_OFFSET(0x1A38B470)
#define RPG_CLIENT_FATERIN_FATERINHOST_GET_TIMELIMITREWARDACTIVITYID_OFFSET UNITYSDK_OFFSET(0x1A38B3A0)
#define RPG_CLIENT_FATERIN_FATERINHOST_GET__CONTAINER_OFFSET UNITYSDK_OFFSET(0x1A388290)
#define RPG_CLIENT_FATERIN_FATERINHOST_HASPENDINGBATTLESUCCESSPAGE_OFFSET UNITYSDK_OFFSET(0x1A3894F0)
#define RPG_CLIENT_FATERIN_FATERINHOST_ONBATTLEENDING_OFFSET UNITYSDK_OFFSET(0x1A38B080)
#define RPG_CLIENT_FATERIN_FATERINHOST_ONBATTLESTARTING_OFFSET UNITYSDK_OFFSET(0x1A38ACA0)
#define RPG_CLIENT_FATERIN_FATERINHOST_PLAYEASTEREGGPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1A38A700)
#define RPG_CLIENT_FATERIN_FATERINHOST_SHOWBATTLEFAILPAGE_OFFSET UNITYSDK_OFFSET(0x1A3895C0)
#define RPG_CLIENT_FATERIN_FATERINHOST_SHOWBATTLESUCCESSPAGEAFTERBATTLE_OFFSET UNITYSDK_OFFSET(0x1A388FF0)
#define RPG_CLIENT_FATERIN_FATERINHOST_SHOWBATTLESUCCESSPAGE_OFFSET UNITYSDK_OFFSET(0x1A3891A0)
#define RPG_CLIENT_FATERIN_FATERINHOST_SHOWCACHEDCARDREWARDREPLACEDIALOG_1_OFFSET UNITYSDK_OFFSET(0x1A37D970)
#define RPG_CLIENT_FATERIN_FATERINHOST_SHOWCACHEDCARDREWARDREPLACEDIALOG_OFFSET UNITYSDK_OFFSET(0x1A389C70)
#define RPG_CLIENT_FATERIN_FATERINHOST_SHOWCARDREWARDREPLACEDIALOG_OFFSET UNITYSDK_OFFSET(0x1A389CD0)
#define RPG_CLIENT_FATERIN_FATERINHOST_SHOWCHALLENGEFIGHTPREPAREPAGE_OFFSET UNITYSDK_OFFSET(0x1A385610)
#define RPG_CLIENT_FATERIN_FATERINHOST_SHOWCHALLENGESETTLEPAGE_OFFSET UNITYSDK_OFFSET(0x1A389760)
#define RPG_CLIENT_FATERIN_FATERINHOST_SHOWEASTEREGGTRANSFERMASK_OFFSET UNITYSDK_OFFSET(0x1A38A550)
#define RPG_CLIENT_FATERIN_FATERINHOST_SHOWENEMYSTATUSDETAILDIALOG_OFFSET UNITYSDK_OFFSET(0x1A38AC00)
#define RPG_CLIENT_FATERIN_FATERINHOST_SHOWHOUGUMAPFIGHTPREPAREPAGE_OFFSET UNITYSDK_OFFSET(0x1A3898F0)
#define RPG_CLIENT_FATERIN_FATERINHOST_SHOWREPLACECARDDIALOG_1_OFFSET UNITYSDK_OFFSET(0x1A388E40)
#define RPG_CLIENT_FATERIN_FATERINHOST_SHOWREPLACECARDDIALOG_OFFSET UNITYSDK_OFFSET(0x1A388DE0)
#define RPG_CLIENT_FATERIN_FATERINHOST_SHOWULTRADETAILDIALOG_OFFSET UNITYSDK_OFFSET(0x1A38AAD0)
#define RPG_CLIENT_FATERIN_FATERINHOST_TRANSFERANDAUTOSHOWHOUGUMAPPAGE_OFFSET UNITYSDK_OFFSET(0x1A38A230)
#define RPG_CLIENT_FATERIN_FATERINHOST_TRANSFERANDAUTOSHOWMAINPAGE_OFFSET UNITYSDK_OFFSET(0x1A38A0F0)
#define RPG_CLIENT_FATERIN_FATERINHOST_TRIGGERSTORYBATTLE_OFFSET UNITYSDK_OFFSET(0x1A389E60)
#define RPG_CLIENT_FATERIN_FATERINHOST_TRYBACKTOMAINPAGEANDPLAYEASTEREGGPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1A388840)
#define RPG_CLIENT_FATERIN_FATERINHOST_TRYGETBATTLETUTORIALSERVICE_OFFSET UNITYSDK_OFFSET(0x1A38B220)
#define RPG_CLIENT_FATERIN_FATERINHOST_TRYGETEASTEREGGENTRANCEID_OFFSET UNITYSDK_OFFSET(0x1A38A370)
#define RPG_CLIENT_FATERIN_FATERINHOST_TRYSHOWBATTLESUCCESSPAGE_OFFSET UNITYSDK_OFFSET(0x1A389350)
#define RPG_CLIENT_FATERIN_FATERINHOST__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A388030)

namespace RPG::Client::FateRin
{
	inline static constexpr unsigned int FateRinHost_TypeDefinitionIndex = 75566;

	class FateRinHost : public ::System::Object
	{
	public:
		static ::System::Func_1<::Class_1_7B4E9156998275BE*>** StaticGet__ContainerGetter()
		{
			return (::System::Func_1<::Class_1_7B4E9156998275BE*>**)Il2CppClass::FromTypeDefinitionIndex(FateRinHost_TypeDefinitionIndex)->GetStaticField(0x4390);
		}
		static ::RPG::Client::FateRin::IFateRinServiceProvider** StaticGet__ServiceProvider_k__BackingField()
		{
			return (::RPG::Client::FateRin::IFateRinServiceProvider**)Il2CppClass::FromTypeDefinitionIndex(FateRinHost_TypeDefinitionIndex)->GetStaticField(0x4398);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST__CCTOR_OFFSET))();
		}

		static ::RPG::Client::UIController* CreateBattleHudPage()
		{
			return ((::RPG::Client::UIController*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_CREATEBATTLEHUDPAGE_OFFSET))();
		}

		static ::System::Void AsyncShowMainPage()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_ASYNCSHOWMAINPAGE_OFFSET))();
		}

		static ::System::Void AsyncShowHouguMapPage(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_ASYNCSHOWHOUGUMAPPAGE_OFFSET))(a1);
		}

		static ::System::Void AsyncShowChallengeEntrancePage(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_ASYNCSHOWCHALLENGEENTRANCEPAGE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::UIController* ShowReplaceCardDialog(::System::UInt32 a1)
		{
			return ((::RPG::Client::UIController*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_SHOWREPLACECARDDIALOG_OFFSET))(a1);
		}

		static ::RPG::Client::UIController* ShowReplaceCardDialog_1(::System::UInt32 a1, ::System::Action_2<::RPG::Client::UIController*, ::RPG::Client::FateRin::Card::IFateRinReplaceCardViewModel*>* a2)
		{
			return ((::RPG::Client::UIController*(*)(::System::UInt32, ::System::Action_2<::RPG::Client::UIController*, ::RPG::Client::FateRin::Card::IFateRinReplaceCardViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_SHOWREPLACECARDDIALOG_1_OFFSET))(a1, a2);
		}

		static ::RPG::Client::UIController* ShowBattleSuccessPageAfterBattle(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::RPG::Client::UIController*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_SHOWBATTLESUCCESSPAGEAFTERBATTLE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::UIController* ShowBattleSuccessPage(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Action* a3)
		{
			return ((::RPG::Client::UIController*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_SHOWBATTLESUCCESSPAGE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::UIController* TryShowBattleSuccessPage()
		{
			return ((::RPG::Client::UIController*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_TRYSHOWBATTLESUCCESSPAGE_OFFSET))();
		}

		static ::System::Boolean HasPendingBattleSuccessPage()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_HASPENDINGBATTLESUCCESSPAGE_OFFSET))();
		}

		static ::RPG::Client::UIController* ShowBattleFailPage(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::UIController*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_SHOWBATTLEFAILPAGE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::UIController* ShowChallengeSettlePage(::Class_1_0D8C9ED8919282E9_2* a1)
		{
			return ((::RPG::Client::UIController*(*)(::Class_1_0D8C9ED8919282E9_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_SHOWCHALLENGESETTLEPAGE_OFFSET))(a1);
		}

		static ::RPG::Client::UIController* ShowHouguMapFightPreparePage(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::UIController*(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_SHOWHOUGUMAPFIGHTPREPAREPAGE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::UIController* ShowChallengeFightPreparePage(::System::UInt32 a1, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a2)
		{
			return ((::RPG::Client::UIController*(*)(::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_SHOWCHALLENGEFIGHTPREPAREPAGE_OFFSET))(a1, a2);
		}

		static ::System::Void ShowCachedCardRewardReplaceDialog()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_SHOWCACHEDCARDREWARDREPLACEDIALOG_OFFSET))();
		}

		static ::System::Void ShowCachedCardRewardReplaceDialog_1(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_SHOWCACHEDCARDREWARDREPLACEDIALOG_1_OFFSET))(a1);
		}

		static ::System::Void ShowCardRewardReplaceDialog(::System::Collections::Generic::Queue_1<::System::UInt32>* a1, ::System::Action* a2, ::System::Boolean a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Queue_1<::System::UInt32>*, ::System::Action*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_SHOWCARDREWARDREPLACEDIALOG_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void TriggerStoryBattle(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_TRIGGERSTORYBATTLE_OFFSET))(a1);
		}

		static ::System::UInt32 GetTrackedHouguMapFightEntranceID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_GETTRACKEDHOUGUMAPFIGHTENTRANCEID_OFFSET))(a1);
		}

		static ::System::Void TransferAndAutoShowMainPage()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_TRANSFERANDAUTOSHOWMAINPAGE_OFFSET))();
		}

		static ::System::Void TransferAndAutoShowHouguMapPage()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_TRANSFERANDAUTOSHOWHOUGUMAPPAGE_OFFSET))();
		}

		static ::System::Boolean CanPlayEasterEggPerformance(::System::UInt32& a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_CANPLAYEASTEREGGPERFORMANCE_OFFSET))(a1, a2);
		}

		static ::System::Void TryBackToMainPageAndPlayEasterEggPerformance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_TRYBACKTOMAINPAGEANDPLAYEASTEREGGPERFORMANCE_OFFSET))();
		}

		static ::System::Void ShowEasterEggTransferMask()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_SHOWEASTEREGGTRANSFERMASK_OFFSET))();
		}

		static ::System::Void CloseEasterEggTransferMask()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_CLOSEEASTEREGGTRANSFERMASK_OFFSET))();
		}

		static ::System::UInt32 GetFateRinCollectionActivityContentID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_GETFATERINCOLLECTIONACTIVITYCONTENTID_OFFSET))();
		}

		static ::System::Boolean TryGetEasterEggEntranceID(::System::UInt32& a1)
		{
			return ((::System::Boolean(*)(::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_TRYGETEASTEREGGENTRANCEID_OFFSET))(a1);
		}

		static ::System::Void PlayEasterEggPerformance(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_PLAYEASTEREGGPERFORMANCE_OFFSET))(a1);
		}

		static ::RPG::Client::UIController* ShowUltraDetailDialog(::RPG::Client::FateRin::Battle::IFateRinBattleSkillDetailViewModel* a1, ::RPG::Client::FateRin::Avatar::FateRinBattleAvatarUltraDetailOpenParam* a2)
		{
			return ((::RPG::Client::UIController*(*)(::RPG::Client::FateRin::Battle::IFateRinBattleSkillDetailViewModel*, ::RPG::Client::FateRin::Avatar::FateRinBattleAvatarUltraDetailOpenParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_SHOWULTRADETAILDIALOG_OFFSET))(a1, a2);
		}

		static ::RPG::Client::UIController* ShowEnemyStatusDetailDialog(::RPG::Client::FateRin::Battle::IFateRinBattleEnemyStatusDetailViewModel* a1)
		{
			return ((::RPG::Client::UIController*(*)(::RPG::Client::FateRin::Battle::IFateRinBattleEnemyStatusDetailViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_SHOWENEMYSTATUSDETAILDIALOG_OFFSET))(a1);
		}

		static ::System::Void OnBattleStarting()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_ONBATTLESTARTING_OFFSET))();
		}

		static ::System::Void OnBattleEnding()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_ONBATTLEENDING_OFFSET))();
		}

		static ::Class_0_16E4307DCC419505_1267* TryGetBattleTutorialService()
		{
			return ((::Class_0_16E4307DCC419505_1267*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_TRYGETBATTLETUTORIALSERVICE_OFFSET))();
		}

		static ::System::UInt32 get_TimeLimitRewardActivityID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_GET_TIMELIMITREWARDACTIVITYID_OFFSET))();
		}

		static ::RPG::Client::FateRin::IFateRinServiceProvider* get_ServiceProvider()
		{
			return ((::RPG::Client::FateRin::IFateRinServiceProvider*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_GET_SERVICEPROVIDER_OFFSET))();
		}

		static ::RPG::Client::FateRin::RedDot::FateRinResidentRewardRedDotFilter* get_ResidentRewardRedDotFilter()
		{
			return ((::RPG::Client::FateRin::RedDot::FateRinResidentRewardRedDotFilter*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_GET_RESIDENTREWARDREDDOTFILTER_OFFSET))();
		}

		static ::RPG::Client::FateRin::RedDot::FateRinHouguMapFightRedDotFilter* get_HouguMapFightRedDotFilter()
		{
			return ((::RPG::Client::FateRin::RedDot::FateRinHouguMapFightRedDotFilter*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_GET_HOUGUMAPFIGHTREDDOTFILTER_OFFSET))();
		}

		static ::RPG::Client::FateRin::RedDot::FateRinDeckEditRedDotFilter* get_DeckEditRedDotFilter()
		{
			return ((::RPG::Client::FateRin::RedDot::FateRinDeckEditRedDotFilter*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_GET_DECKEDITREDDOTFILTER_OFFSET))();
		}

		static ::RPG::Client::FateRin::RedDot::FateRinCaseBoardRedDotFilter* get_CaseBoardRedDotFilter()
		{
			return ((::RPG::Client::FateRin::RedDot::FateRinCaseBoardRedDotFilter*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_GET_CASEBOARDREDDOTFILTER_OFFSET))();
		}

		static ::Class_1_7B4E9156998275BE* get__Container()
		{
			return ((::Class_1_7B4E9156998275BE*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST_GET__CONTAINER_OFFSET))();
		}
	};
}
