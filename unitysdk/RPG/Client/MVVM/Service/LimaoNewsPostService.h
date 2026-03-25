#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0BE9E9C1D5A3C687;
class Class_1_6993A8638589B7ED;
class Class_1_EBB10EC01CCC4716_18;
class Class_3_002145AD8E0A4DB8;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client::MVVM::Model { class LimaoNewsPostData; }
namespace RPG::Client::MVVM::Service { class LimaoNewsOfficeSurveyService; }
namespace RPG::Client::MVVM::ViewModel { class LimaoNewsStateTagViewModel; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_CLEARNEW_OFFSET UNITYSDK_OFFSET(0x9A8CBB0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_CREATECOMMENTVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x9A8D310)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A80FF0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_GETALLCANSUBMITPOSTS_OFFSET UNITYSDK_OFFSET(0x9A8C640)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_GETALLSHOWPOSTS_OFFSET UNITYSDK_OFFSET(0x9A8C190)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_GETNEWPOSTCOUNT_OFFSET UNITYSDK_OFFSET(0x9A8C840)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_GETORCREATEPOSTDATA_OFFSET UNITYSDK_OFFSET(0x9A8C060)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_GETPOSTSTATETAGVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9A8D090)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_GETTOPCANSUBMITPOSTDATA_OFFSET UNITYSDK_OFFSET(0x9A8C4C0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_GOTOPOSTTRACKSURVEYMISSION_OFFSET UNITYSDK_OFFSET(0x9A8CFD0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_HASCANSUBMITPOST_OFFSET UNITYSDK_OFFSET(0x9A8C7E0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_ISCANSHOWQUICKPOSTSUBMIT_OFFSET UNITYSDK_OFFSET(0x9A8DA90)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_ISNEWPOST_OFFSET UNITYSDK_OFFSET(0x9A8CA10)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_ISPOSTCANGOTOSURVEY_OFFSET UNITYSDK_OFFSET(0x9A8CE50)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_ISPOSTCANREPLAY_OFFSET UNITYSDK_OFFSET(0x9A8CCE0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_ISPOSTCANSUBMIT_OFFSET UNITYSDK_OFFSET(0x9A8C360)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_ISPOSTLOCALCHANGESTATE_OFFSET UNITYSDK_OFFSET(0x9A8DBB0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_ONCHANGEPOST_OFFSET UNITYSDK_OFFSET(0x9A89C90)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_RECORDPOSTLOCALCHANGESTATE_OFFSET UNITYSDK_OFFSET(0x9A8DB30)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_REFRESHCANSUBMITPOSTIDS_OFFSET UNITYSDK_OFFSET(0x9A89D20)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_REFRESHPOSTUPVOTE_OFFSET UNITYSDK_OFFSET(0x9A8AD10)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_REFRESHSUBMITTEDPOSTS_OFFSET UNITYSDK_OFFSET(0x9A8A710)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_REFRESHSUBMITTEDPOST_OFFSET UNITYSDK_OFFSET(0x9A8AB20)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_REMOVEPOSTLOCALCHANGESTATE_OFFSET UNITYSDK_OFFSET(0x9A8BFD0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_SETCOMMENTTONEXTSTATE_OFFSET UNITYSDK_OFFSET(0x9A8D9C0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_TRYGETPOSTDATA_OFFSET UNITYSDK_OFFSET(0x9A8DCF0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x9A80860)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE__GETCOMMENTSTATEROW_OFFSET UNITYSDK_OFFSET(0x9A8D8D0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE__GETPOSTDATA_OFFSET UNITYSDK_OFFSET(0x9A8DC10)

namespace RPG::Client::MVVM::Service
{
	inline static constexpr unsigned int LimaoNewsPostService_TypeDefinitionIndex = 61041;

	class LimaoNewsPostService : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MVVM::Model::LimaoNewsPostData*>* _AllPostDatas; // 0x10
		::Class_1_0BE9E9C1D5A3C687* _ConditionService; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _CanSubmitPostIDs; // 0x20
		::RPG::Client::MVVM::Service::LimaoNewsOfficeSurveyService* _SurveyService; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _LocalChangeStatePostIDs; // 0x30

		::System::Void _ctor(::Class_1_0BE9E9C1D5A3C687* conditionService, ::RPG::Client::MVVM::Service::LimaoNewsOfficeSurveyService* surveyService)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0BE9E9C1D5A3C687*, ::RPG::Client::MVVM::Service::LimaoNewsOfficeSurveyService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE__CTOR_OFFSET))(this, conditionService, surveyService);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshSubmittedPosts(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EBB10EC01CCC4716_18*>* submittedPostList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EBB10EC01CCC4716_18*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_REFRESHSUBMITTEDPOSTS_OFFSET))(this, submittedPostList);
		}

		::System::Void OnChangePost(::Class_1_EBB10EC01CCC4716_18* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_18*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_ONCHANGEPOST_OFFSET))(this, proto);
		}

		::System::Void RefreshSubmittedPost(::Class_1_EBB10EC01CCC4716_18* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_18*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_REFRESHSUBMITTEDPOST_OFFSET))(this, proto);
		}

		::System::Void RefreshPostUpvote(::System::UInt32 postID, ::System::Boolean isUpvote)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_REFRESHPOSTUPVOTE_OFFSET))(this, postID, isUpvote);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MVVM::Model::LimaoNewsPostData*>* GetAllShowPosts(::System::UInt32 forceShowPostID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MVVM::Model::LimaoNewsPostData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_GETALLSHOWPOSTS_OFFSET))(this, forceShowPostID);
		}

		::RPG::Client::MVVM::Model::LimaoNewsPostData* GetTopCanSubmitPostData()
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsPostData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_GETTOPCANSUBMITPOSTDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MVVM::Model::LimaoNewsPostData*>* GetAllCanSubmitPosts()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MVVM::Model::LimaoNewsPostData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_GETALLCANSUBMITPOSTS_OFFSET))(this);
		}

		::System::Void RefreshCanSubmitPostIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_REFRESHCANSUBMITPOSTIDS_OFFSET))(this);
		}

		::System::Boolean HasCanSubmitPost()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_HASCANSUBMITPOST_OFFSET))(this);
		}

		::System::Boolean IsPostCanSubmit(::RPG::Client::MVVM::Model::LimaoNewsPostData* postData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsPostData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_ISPOSTCANSUBMIT_OFFSET))(this, postData);
		}

		::System::Int32 GetNewPostCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_GETNEWPOSTCOUNT_OFFSET))(this);
		}

		::System::Boolean IsNewPost(::RPG::Client::MVVM::Model::LimaoNewsPostData* postData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsPostData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_ISNEWPOST_OFFSET))(this, postData);
		}

		::System::Void ClearNew(::RPG::Client::MVVM::Model::LimaoNewsPostData* postData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsPostData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_CLEARNEW_OFFSET))(this, postData);
		}

		::System::Boolean IsPostCanReplay(::RPG::Client::MVVM::Model::LimaoNewsPostData* postData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsPostData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_ISPOSTCANREPLAY_OFFSET))(this, postData);
		}

		::System::Boolean IsPostCanGotoSurvey(::RPG::Client::MVVM::Model::LimaoNewsPostData* postData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsPostData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_ISPOSTCANGOTOSURVEY_OFFSET))(this, postData);
		}

		::System::Void GotoPostTrackSurveyMission(::RPG::Client::MVVM::Model::LimaoNewsPostData* postData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsPostData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_GOTOPOSTTRACKSURVEYMISSION_OFFSET))(this, postData);
		}

		::RPG::Client::MVVM::ViewModel::LimaoNewsStateTagViewModel* GetPostStateTagViewModel(::RPG::Client::MVVM::Model::LimaoNewsPostData* postData)
		{
			return ((::RPG::Client::MVVM::ViewModel::LimaoNewsStateTagViewModel*(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsPostData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_GETPOSTSTATETAGVIEWMODEL_OFFSET))(this, postData);
		}

		::System::Collections::Generic::List_1<::Class_3_002145AD8E0A4DB8*>* CreateCommentViewModels(::Il2CppArray<::System::UInt32>* commentIDs)
		{
			return ((::System::Collections::Generic::List_1<::Class_3_002145AD8E0A4DB8*>*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_CREATECOMMENTVIEWMODELS_OFFSET))(this, commentIDs);
		}

		::System::Void SetCommentToNextState(::Class_3_002145AD8E0A4DB8* commentViewModel)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_002145AD8E0A4DB8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_SETCOMMENTTONEXTSTATE_OFFSET))(this, commentViewModel);
		}

		::System::Boolean IsCanShowQuickPostSubmit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_ISCANSHOWQUICKPOSTSUBMIT_OFFSET))(this);
		}

		::System::Void RecordPostLocalChangeState(::System::UInt32 postID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_RECORDPOSTLOCALCHANGESTATE_OFFSET))(this, postID);
		}

		::System::Void RemovePostLocalChangeState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_REMOVEPOSTLOCALCHANGESTATE_OFFSET))(this);
		}

		::System::Boolean IsPostLocalChangeState(::System::UInt32 postID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_ISPOSTLOCALCHANGESTATE_OFFSET))(this, postID);
		}

		::RPG::Client::MVVM::Model::LimaoNewsPostData* GetOrCreatePostData(::System::UInt32 postID)
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsPostData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_GETORCREATEPOSTDATA_OFFSET))(this, postID);
		}

		::RPG::Client::MVVM::Model::LimaoNewsPostData* TryGetPostData(::System::UInt32 postID)
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsPostData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_TRYGETPOSTDATA_OFFSET))(this, postID);
		}

		::RPG::Client::MVVM::Model::LimaoNewsPostData* _GetPostData(::System::UInt32 postID)
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsPostData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE__GETPOSTDATA_OFFSET))(this, postID);
		}

		::Class_1_6993A8638589B7ED* _GetCommentStateRow(::System::UInt32 commentID)
		{
			return ((::Class_1_6993A8638589B7ED*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE__GETCOMMENTSTATEROW_OFFSET))(this, commentID);
		}
	};
}
