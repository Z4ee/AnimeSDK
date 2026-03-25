#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsPostDisplayTag.h"
#include "unitysdk/RPG/GameCore/LimaoNewsPostSubmitType.h"
#include "unitysdk/RPG/GameCore/LimaoNewsPostType.h"
#include "unitysdk/System/Object.h"

class Class_1_8490C4CFB308C99E;
class Class_1_B553C21756B27967;
namespace RPG::Client::MVVM::Model { class LimaoNewsOfficeSurveyTypeData; }
namespace RPG::Client::MVVM::Model { class LimaoNewsUserData; }
namespace System { class String; }

#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_CREATENEXTSTATEPOST_OFFSET UNITYSDK_OFFSET(0x9A83550)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9A834E0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_CANSUBMITCONDITIONIDS_OFFSET UNITYSDK_OFFSET(0x9A838D0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_COMICPREFABPATH_OFFSET UNITYSDK_OFFSET(0x9A83DB0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_COMMENTIDLIST_OFFSET UNITYSDK_OFFSET(0x9A846C0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x9A83A20)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_DISPLAYSURVEYTYPEDATA_OFFSET UNITYSDK_OFFSET(0x9A844E0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_GOTOSURVEYID_OFFSET UNITYSDK_OFFSET(0x9A83C60)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_HEADCOUNT_OFFSET UNITYSDK_OFFSET(0x9A84620)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_ISSUBMITTED_OFFSET UNITYSDK_OFFSET(0x9A83870)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_ISUPVOTE_OFFSET UNITYSDK_OFFSET(0x9A838B0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_LOCATIONID_OFFSET UNITYSDK_OFFSET(0x9A83AA0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_NEXTSTATEID_OFFSET UNITYSDK_OFFSET(0x9A83660)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_PICTUREPATH_OFFSET UNITYSDK_OFFSET(0x9A842A0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_POSTID_OFFSET UNITYSDK_OFFSET(0x9A83810)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_POSTTYPE_OFFSET UNITYSDK_OFFSET(0x9A83D40)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_REPLYCOMMENTID_OFFSET UNITYSDK_OFFSET(0x9A83B80)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_REPLYFINISHCONDITIONIDLIST_OFFSET UNITYSDK_OFFSET(0x9A83BF0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x9A83B10)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_STATEID_OFFSET UNITYSDK_OFFSET(0x9A83850)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_SUBMITTEDSORTID_OFFSET UNITYSDK_OFFSET(0x9A83890)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_SUBMITTEDUSERID_OFFSET UNITYSDK_OFFSET(0x9A83830)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_SUBMITTYPE_OFFSET UNITYSDK_OFFSET(0x9A83CD0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x9A839A0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_USERDATA_OFFSET UNITYSDK_OFFSET(0x9A84350)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_VIDEOID_OFFSET UNITYSDK_OFFSET(0x9A83E20)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_NEEDSHOWTAG_OFFSET UNITYSDK_OFFSET(0x9A84780)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_REFRESHUPVOTE_OFFSET UNITYSDK_OFFSET(0x9A837C0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0x9A83700)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_SET_ISSUBMITTED_OFFSET UNITYSDK_OFFSET(0x9A83880)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_SET_ISUPVOTE_OFFSET UNITYSDK_OFFSET(0x9A838C0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_SET_POSTID_OFFSET UNITYSDK_OFFSET(0x9A83820)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_SET_STATEID_OFFSET UNITYSDK_OFFSET(0x9A83860)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_SET_SUBMITTEDSORTID_OFFSET UNITYSDK_OFFSET(0x9A838A0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_SET_SUBMITTEDUSERID_OFFSET UNITYSDK_OFFSET(0x9A83840)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9A83540)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA__GETDISPLAYSURVEYTYPEDATA_OFFSET UNITYSDK_OFFSET(0x9A844F0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA__GETPOSTROW_OFFSET UNITYSDK_OFFSET(0x9A83940)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA__GETPOSTSTATEROW_OFFSET UNITYSDK_OFFSET(0x9A845B0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA__GETUSERDATA_OFFSET UNITYSDK_OFFSET(0x9A84360)

namespace RPG::Client::MVVM::Model
{
	inline static constexpr unsigned int LimaoNewsPostData_TypeDefinitionIndex = 61068;

	class LimaoNewsPostData : public ::System::Object
	{
	public:
		::RPG::Client::MVVM::Model::LimaoNewsUserData* _UserData; // 0x10
		::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyTypeData* _SurveyTypeData; // 0x18
		::System::UInt32 _SubmittedSortID_k__BackingField; // 0x20
		::System::UInt32 _SubmittedUserID_k__BackingField; // 0x24
		::System::Boolean _IsUpvote_k__BackingField; // 0x28
		::System::Boolean _IsSubmitted_k__BackingField; // 0x29
		::System::UInt32 _PostID_k__BackingField; // 0x2C
		::System::UInt32 _StateID_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MVVM::Model::LimaoNewsPostData* Create(::System::UInt32 postID)
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsPostData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_CREATE_OFFSET))(postID);
		}

		static ::RPG::Client::MVVM::Model::LimaoNewsPostData* CreateNextStatePost(::RPG::Client::MVVM::Model::LimaoNewsPostData* oldPostData)
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsPostData*(*)(::RPG::Client::MVVM::Model::LimaoNewsPostData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_CREATENEXTSTATEPOST_OFFSET))(oldPostData);
		}

		::System::Void Refresh(::System::UInt32 userID, ::System::UInt32 stateID, ::System::Boolean isSubmitted, ::System::UInt32 submittedSortID, ::System::Boolean isUpvote)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_REFRESH_OFFSET))(this, userID, stateID, isSubmitted, submittedSortID, isUpvote);
		}

		::System::Void RefreshUpvote(::System::Boolean isUpvote)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_REFRESHUPVOTE_OFFSET))(this, isUpvote);
		}

		::System::UInt32 get_PostID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_POSTID_OFFSET))(this);
		}

		::System::Void set_PostID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_SET_POSTID_OFFSET))(this, value);
		}

		::System::UInt32 get_SubmittedUserID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_SUBMITTEDUSERID_OFFSET))(this);
		}

		::System::Void set_SubmittedUserID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_SET_SUBMITTEDUSERID_OFFSET))(this, value);
		}

		::System::UInt32 get_StateID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_STATEID_OFFSET))(this);
		}

		::System::Void set_StateID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_SET_STATEID_OFFSET))(this, value);
		}

		::System::Boolean get_IsSubmitted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_ISSUBMITTED_OFFSET))(this);
		}

		::System::Void set_IsSubmitted(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_SET_ISSUBMITTED_OFFSET))(this, value);
		}

		::System::UInt32 get_SubmittedSortID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_SUBMITTEDSORTID_OFFSET))(this);
		}

		::System::Void set_SubmittedSortID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_SET_SUBMITTEDSORTID_OFFSET))(this, value);
		}

		::System::Boolean get_IsUpvote()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_ISUPVOTE_OFFSET))(this);
		}

		::System::Void set_IsUpvote(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_SET_ISUPVOTE_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_CanSubmitConditionIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_CANSUBMITCONDITIONIDS_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_TITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_DESC_OFFSET))(this);
		}

		::System::UInt32 get_LocationID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_LOCATIONID_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_REWARDID_OFFSET))(this);
		}

		::System::UInt32 get_ReplyCommentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_REPLYCOMMENTID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ReplyFinishConditionIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_REPLYFINISHCONDITIONIDLIST_OFFSET))(this);
		}

		::System::UInt32 get_GoToSurveyID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_GOTOSURVEYID_OFFSET))(this);
		}

		::RPG::GameCore::LimaoNewsPostSubmitType get_SubmitType()
		{
			return ((::RPG::GameCore::LimaoNewsPostSubmitType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_SUBMITTYPE_OFFSET))(this);
		}

		::RPG::GameCore::LimaoNewsPostType get_PostType()
		{
			return ((::RPG::GameCore::LimaoNewsPostType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_POSTTYPE_OFFSET))(this);
		}

		::System::String* get_ComicPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_COMICPREFABPATH_OFFSET))(this);
		}

		::System::UInt32 get_VideoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_VIDEOID_OFFSET))(this);
		}

		::System::String* get_PicturePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_PICTUREPATH_OFFSET))(this);
		}

		::RPG::Client::MVVM::Model::LimaoNewsUserData* get_UserData()
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsUserData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_USERDATA_OFFSET))(this);
		}

		::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyTypeData* get_DisplaySurveyTypeData()
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_DISPLAYSURVEYTYPEDATA_OFFSET))(this);
		}

		::System::UInt32 get_NextStateID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_NEXTSTATEID_OFFSET))(this);
		}

		::System::UInt32 get_HeadCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_HEADCOUNT_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_CommentIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_GET_COMMENTIDLIST_OFFSET))(this);
		}

		::System::Boolean NeedShowTag(::RPG::GameCore::LimaoNewsPostDisplayTag tag)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LimaoNewsPostDisplayTag))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA_NEEDSHOWTAG_OFFSET))(this, tag);
		}

		::Class_1_B553C21756B27967* _GetPostRow()
		{
			return ((::Class_1_B553C21756B27967*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA__GETPOSTROW_OFFSET))(this);
		}

		::Class_1_8490C4CFB308C99E* _GetPostStateRow()
		{
			return ((::Class_1_8490C4CFB308C99E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA__GETPOSTSTATEROW_OFFSET))(this);
		}

		::RPG::Client::MVVM::Model::LimaoNewsUserData* _GetUserData()
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsUserData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA__GETUSERDATA_OFFSET))(this);
		}

		::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyTypeData* _GetDisplaySurveyTypeData()
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSPOSTDATA__GETDISPLAYSURVEYTYPEDATA_OFFSET))(this);
		}
	};
}
