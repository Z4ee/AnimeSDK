#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LimaoNews/LimaoNewsPostAnimation.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsPostSubmitType.h"
#include "unitysdk/Sofa/BaseViewModel.h"

namespace RPG::Client::LimaoNews { class LimaoNewsCommentListViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsInteractionViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsLocationData; }
namespace RPG::Client::LimaoNews { class LimaoNewsNetworkService; }
namespace RPG::Client::LimaoNews { class LimaoNewsOfficeSurveyTypeData; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostData; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostService; }
namespace RPG::Client::LimaoNews { class LimaoNewsStateTagViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsTutorialService; }
namespace RPG::Client::LimaoNews { class LimaoNewsUserData; }
namespace RPG::Client::LimaoNews { class LimaoNewsWindowService; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class String; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_ADDNEEDPLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x1A7693E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_CHANGEPOSTSTATE_OFFSET UNITYSDK_OFFSET(0x1A7695F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_CLEARNEW_OFFSET UNITYSDK_OFFSET(0x1A76A2C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_BTNUPVOTECOMMAND_OFFSET UNITYSDK_OFFSET(0x1A793630)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_CANGOTOSURVEY_OFFSET UNITYSDK_OFFSET(0x1A78B1E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_CANREPLAY_OFFSET UNITYSDK_OFFSET(0x1A78B130)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_CLICKCOMMAND_OFFSET UNITYSDK_OFFSET(0x1A793610)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_COMICPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1A78F840)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_COMMENTLISTVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A793690)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1A78FA80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_DISPLAYSURVEYTYPEDATA_OFFSET UNITYSDK_OFFSET(0x1A78FAF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_INTERACTIONVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A793670)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_ISCOMIC_OFFSET UNITYSDK_OFFSET(0x1A78F7E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_ISSUBMITTED_OFFSET UNITYSDK_OFFSET(0x1A76A780)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_ISTUTORIALNODE_OFFSET UNITYSDK_OFFSET(0x1A790160)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_ISVIDEO_OFFSET UNITYSDK_OFFSET(0x1A78F940)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_LOCATIONDATA_OFFSET UNITYSDK_OFFSET(0x1A793650)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_PICTUREPATH_OFFSET UNITYSDK_OFFSET(0x1A78F890)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_POSTID_OFFSET UNITYSDK_OFFSET(0x1A767FD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_PREFABSTATE_OFFSET UNITYSDK_OFFSET(0x1A790CB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_REPLYCOMMENTID_OFFSET UNITYSDK_OFFSET(0x1A78B190)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x1A793730)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_SHOWBANNEDTAG_OFFSET UNITYSDK_OFFSET(0x1A78F8E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_SHOWRECOMMENDTAG_OFFSET UNITYSDK_OFFSET(0x1A790D20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_STATETAGVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A7936B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_SUBMITTEDSORTID_OFFSET UNITYSDK_OFFSET(0x1A76A7D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_SUBMITTYPE_OFFSET UNITYSDK_OFFSET(0x1A78B240)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1A78F9A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_USERDATA_OFFSET UNITYSDK_OFFSET(0x1A78FA10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET__TUTORIALNODEID_OFFSET UNITYSDK_OFFSET(0x1A7936D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GOTOSURVEY_OFFSET UNITYSDK_OFFSET(0x1A78B660)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_HASANIMATIONFLAG_OFFSET UNITYSDK_OFFSET(0x1A768690)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_ISCANSUBMIT_OFFSET UNITYSDK_OFFSET(0x1A769F30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_ISNEWPOST_OFFSET UNITYSDK_OFFSET(0x1A768020)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_OPENFULLSCREENVIDEOORCOMIC_OFFSET UNITYSDK_OFFSET(0x1A78B920)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_REFRESHINTERACTIONVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A78F630)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_REFRESHVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A769C40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_REPLAYPOST_OFFSET UNITYSDK_OFFSET(0x1A78B5F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_RESETPLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x1A768800)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_SETCOMMENTTONEXTSTATE_OFFSET UNITYSDK_OFFSET(0x1A78F170)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_SET_BTNUPVOTECOMMAND_OFFSET UNITYSDK_OFFSET(0x1A793640)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_SET_CLICKCOMMAND_OFFSET UNITYSDK_OFFSET(0x1A793620)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_SET_COMMENTLISTVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A7936A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_SET_INTERACTIONVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A793680)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_SET_LOCATIONDATA_OFFSET UNITYSDK_OFFSET(0x1A793660)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_SET_STATETAGVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A7936C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_SHOWSUBMITTEDPOSTWINDOW_OFFSET UNITYSDK_OFFSET(0x1A78EC30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_SUBMITPOST_OFFSET UNITYSDK_OFFSET(0x1A78B570)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A768FD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x1A793780)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL___CTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0x1A793800)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostViewModel_TypeDefinitionIndex = 75536;

	class LimaoNewsPostViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsPostService* _PostService; // 0x20
		::RPG::Client::LimaoNews::LimaoNewsPostData* _PostData; // 0x28
		::RPG::Client::LimaoNews::LimaoNewsTutorialService* _TutorialService; // 0x30
		::RPG::Client::LimaoNews::LimaoNewsLocationData* _LocationData_k__BackingField; // 0x38
		::Sofa::Core::SimpleCommand* _ClickCommand_k__BackingField; // 0x40
		::RPG::Client::LimaoNews::LimaoNewsNetworkService* _NetworkService; // 0x48
		::RPG::Client::LimaoNews::LimaoNewsInteractionViewModel* _InteractionViewModel_k__BackingField; // 0x50
		::RPG::Client::LimaoNews::LimaoNewsWindowService* _WindowService; // 0x58
		::RPG::Client::LimaoNews::LimaoNewsCommentListViewModel* _CommentListViewModel_k__BackingField; // 0x60
		::Sofa::Core::SimpleCommand* _BtnUpvoteCommand_k__BackingField; // 0x68
		::RPG::Client::LimaoNews::LimaoNewsStateTagViewModel* _StateTagViewModel_k__BackingField; // 0x70
		::RPG::Client::LimaoNews::LimaoNewsPostAnimation _AnimationFlag; // 0x78

		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsPostData* a1, ::RPG::Client::LimaoNews::LimaoNewsNetworkService* a2, ::RPG::Client::LimaoNews::LimaoNewsPostService* a3, ::RPG::Client::LimaoNews::LimaoNewsWindowService* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostData*, ::RPG::Client::LimaoNews::LimaoNewsNetworkService*, ::RPG::Client::LimaoNews::LimaoNewsPostService*, ::RPG::Client::LimaoNews::LimaoNewsWindowService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RefreshViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_REFRESHVIEWMODEL_OFFSET))(this);
		}

		::System::Void RefreshInteractionViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_REFRESHINTERACTIONVIEWMODEL_OFFSET))(this);
		}

		::System::Void SetCommentToNextState(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_SETCOMMENTTONEXTSTATE_OFFSET))(this, a1);
		}

		::System::Void ChangePostState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_CHANGEPOSTSTATE_OFFSET))(this);
		}

		::System::Void AddNeedPlayAnimation(::RPG::Client::LimaoNews::LimaoNewsPostAnimation a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostAnimation))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_ADDNEEDPLAYANIMATION_OFFSET))(this, a1);
		}

		::System::Void ResetPlayAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_RESETPLAYANIMATION_OFFSET))(this);
		}

		::System::Boolean HasAnimationFlag(::RPG::Client::LimaoNews::LimaoNewsPostAnimation a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostAnimation))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_HASANIMATIONFLAG_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_ClickCommand()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_CLICKCOMMAND_OFFSET))(this);
		}

		::System::Void set_ClickCommand(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_SET_CLICKCOMMAND_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_BtnUpvoteCommand()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_BTNUPVOTECOMMAND_OFFSET))(this);
		}

		::System::Void set_BtnUpvoteCommand(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_SET_BTNUPVOTECOMMAND_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsLocationData* get_LocationData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsLocationData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_LOCATIONDATA_OFFSET))(this);
		}

		::System::Void set_LocationData(::RPG::Client::LimaoNews::LimaoNewsLocationData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsLocationData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_SET_LOCATIONDATA_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsInteractionViewModel* get_InteractionViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsInteractionViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_INTERACTIONVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_InteractionViewModel(::RPG::Client::LimaoNews::LimaoNewsInteractionViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsInteractionViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_SET_INTERACTIONVIEWMODEL_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsCommentListViewModel* get_CommentListViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsCommentListViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_COMMENTLISTVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_CommentListViewModel(::RPG::Client::LimaoNews::LimaoNewsCommentListViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsCommentListViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_SET_COMMENTLISTVIEWMODEL_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsStateTagViewModel* get_StateTagViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsStateTagViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_STATETAGVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_StateTagViewModel(::RPG::Client::LimaoNews::LimaoNewsStateTagViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsStateTagViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_SET_STATETAGVIEWMODEL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTutorialNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_ISTUTORIALNODE_OFFSET))(this);
		}

		::System::UInt32 get_PostID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_POSTID_OFFSET))(this);
		}

		::System::Boolean get_IsSubmitted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_ISSUBMITTED_OFFSET))(this);
		}

		::System::UInt32 get_SubmittedSortID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_SUBMITTEDSORTID_OFFSET))(this);
		}

		::System::String* get_PrefabState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_PREFABSTATE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_TITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_DESC_OFFSET))(this);
		}

		::RPG::GameCore::LimaoNewsPostSubmitType get_SubmitType()
		{
			return ((::RPG::GameCore::LimaoNewsPostSubmitType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_SUBMITTYPE_OFFSET))(this);
		}

		::System::String* get_PicturePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_PICTUREPATH_OFFSET))(this);
		}

		::System::Boolean get_ShowBannedTag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_SHOWBANNEDTAG_OFFSET))(this);
		}

		::System::Boolean get_ShowRecommendTag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_SHOWRECOMMENDTAG_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyTypeData* get_DisplaySurveyTypeData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_DISPLAYSURVEYTYPEDATA_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_REWARDID_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsUserData* get_UserData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsUserData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_USERDATA_OFFSET))(this);
		}

		::System::UInt32 get_ReplyCommentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_REPLYCOMMENTID_OFFSET))(this);
		}

		::System::Boolean get_CanReplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_CANREPLAY_OFFSET))(this);
		}

		::System::Boolean get_CanGotoSurvey()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_CANGOTOSURVEY_OFFSET))(this);
		}

		::System::Boolean get_IsVideo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_ISVIDEO_OFFSET))(this);
		}

		::System::Boolean get_IsComic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_ISCOMIC_OFFSET))(this);
		}

		::System::String* get_ComicPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET_COMICPREFABPATH_OFFSET))(this);
		}

		::System::Boolean IsCanSubmit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_ISCANSUBMIT_OFFSET))(this);
		}

		::System::Void SubmitPost()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_SUBMITPOST_OFFSET))(this);
		}

		::System::Void ShowSubmittedPostWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_SHOWSUBMITTEDPOSTWINDOW_OFFSET))(this);
		}

		::System::Boolean IsNewPost()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_ISNEWPOST_OFFSET))(this);
		}

		::System::Void ClearNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_CLEARNEW_OFFSET))(this);
		}

		::System::Void ReplayPost()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_REPLAYPOST_OFFSET))(this);
		}

		::System::Void GotoSurvey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GOTOSURVEY_OFFSET))(this);
		}

		::System::Void OpenFullScreenVideoOrComic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_OPENFULLSCREENVIDEOORCOMIC_OFFSET))(this);
		}

		::System::UInt32 get__TutorialNodeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL_GET__TUTORIALNODEID_OFFSET))(this);
		}

		::System::Void __ctor_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL___CTOR_B__0_0_OFFSET))(this);
		}

		::System::Void __ctor_b__0_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL___CTOR_B__0_1_OFFSET))(this);
		}
	};
}
