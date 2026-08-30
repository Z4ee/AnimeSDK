#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0BE9E9C1D5A3C687;
class Class_1_1B63904EB56305F5;
class Class_1_EBB10EC01CCC4716_13;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client::LimaoNews { class LimaoNewsCommentViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsOfficeSurveyService; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostData; }
namespace RPG::Client::LimaoNews { class LimaoNewsStateTagViewModel; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_CLEARNEW_OFFSET UNITYSDK_OFFSET(0x1C4A4990)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_CREATECOMMENTVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x1C4A4E10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C4A35C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_GETALLCANSUBMITPOSTS_OFFSET UNITYSDK_OFFSET(0x1C4A4290)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_GETALLSHOWPOSTS_OFFSET UNITYSDK_OFFSET(0x1C4A3E30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_GETNEWPOSTCOUNT_OFFSET UNITYSDK_OFFSET(0x1C4A4740)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_GETORCREATEPOSTDATA_OFFSET UNITYSDK_OFFSET(0x1C4A3C10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_GETPOSTSTATETAGVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1C4A4C20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_GETTOPCANSUBMITPOSTDATA_OFFSET UNITYSDK_OFFSET(0x1C4A4140)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_GOTOPOSTTRACKSURVEYMISSION_OFFSET UNITYSDK_OFFSET(0x1C4A4BB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_HASCANSUBMITPOST_OFFSET UNITYSDK_OFFSET(0x1C4A46E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_ISCANSHOWQUICKPOSTSUBMIT_OFFSET UNITYSDK_OFFSET(0x1C4A5720)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_ISNEWPOST_OFFSET UNITYSDK_OFFSET(0x1C4A4890)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_ISPOSTCANGOTOSURVEY_OFFSET UNITYSDK_OFFSET(0x1C4A4B20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_ISPOSTCANREPLAY_OFFSET UNITYSDK_OFFSET(0x1C4A4A90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_ISPOSTCANSUBMIT_OFFSET UNITYSDK_OFFSET(0x1C4A40B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_ISPOSTLOCALCHANGESTATE_OFFSET UNITYSDK_OFFSET(0x1C4A5840)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_ONCHANGEPOST_OFFSET UNITYSDK_OFFSET(0x1C4A3B80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_RECORDPOSTLOCALCHANGESTATE_OFFSET UNITYSDK_OFFSET(0x1C4A57C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_REFRESHCANSUBMITPOSTIDS_OFFSET UNITYSDK_OFFSET(0x1C4A4460)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_REFRESHPOSTUPVOTE_OFFSET UNITYSDK_OFFSET(0x1C4A3D90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_REFRESHSUBMITTEDPOSTS_OFFSET UNITYSDK_OFFSET(0x1C4A3720)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_REFRESHSUBMITTEDPOST_OFFSET UNITYSDK_OFFSET(0x1C4A3AF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_REMOVEPOSTLOCALCHANGESTATE_OFFSET UNITYSDK_OFFSET(0x1C4A3680)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_SETCOMMENTTONEXTSTATE_OFFSET UNITYSDK_OFFSET(0x1C4A5570)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_TRYGETPOSTDATA_OFFSET UNITYSDK_OFFSET(0x1C4A5970)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A35B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE__GETCOMMENTSTATEROW_OFFSET UNITYSDK_OFFSET(0x1C4A5480)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE__GETPOSTDATA_OFFSET UNITYSDK_OFFSET(0x1C4A58A0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostService_TypeDefinitionIndex = 79012;

	class LimaoNewsPostService : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _CanSubmitPostIDs; // 0x10
		::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyService* _SurveyService; // 0x18
		::Class_1_0BE9E9C1D5A3C687* _ConditionService; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _LocalChangeStatePostIDs; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPostData*>* _AllPostDatas; // 0x30

		::System::Void _ctor(::Class_1_0BE9E9C1D5A3C687* a1, ::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyService* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0BE9E9C1D5A3C687*, ::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshSubmittedPosts(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EBB10EC01CCC4716_13*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EBB10EC01CCC4716_13*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_REFRESHSUBMITTEDPOSTS_OFFSET))(this, a1);
		}

		::System::Void OnChangePost(::Class_1_EBB10EC01CCC4716_13* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_13*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_ONCHANGEPOST_OFFSET))(this, a1);
		}

		::System::Void RefreshSubmittedPost(::Class_1_EBB10EC01CCC4716_13* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_13*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_REFRESHSUBMITTEDPOST_OFFSET))(this, a1);
		}

		::System::Void RefreshPostUpvote(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_REFRESHPOSTUPVOTE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPostData*>* GetAllShowPosts(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPostData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_GETALLSHOWPOSTS_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsPostData* GetTopCanSubmitPostData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPostData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_GETTOPCANSUBMITPOSTDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPostData*>* GetAllCanSubmitPosts()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPostData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_GETALLCANSUBMITPOSTS_OFFSET))(this);
		}

		::System::Void RefreshCanSubmitPostIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_REFRESHCANSUBMITPOSTIDS_OFFSET))(this);
		}

		::System::Boolean HasCanSubmitPost()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_HASCANSUBMITPOST_OFFSET))(this);
		}

		::System::Boolean IsPostCanSubmit(::RPG::Client::LimaoNews::LimaoNewsPostData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_ISPOSTCANSUBMIT_OFFSET))(this, a1);
		}

		::System::Int32 GetNewPostCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_GETNEWPOSTCOUNT_OFFSET))(this);
		}

		::System::Boolean IsNewPost(::RPG::Client::LimaoNews::LimaoNewsPostData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_ISNEWPOST_OFFSET))(this, a1);
		}

		::System::Void ClearNew(::RPG::Client::LimaoNews::LimaoNewsPostData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_CLEARNEW_OFFSET))(this, a1);
		}

		::System::Boolean IsPostCanReplay(::RPG::Client::LimaoNews::LimaoNewsPostData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_ISPOSTCANREPLAY_OFFSET))(this, a1);
		}

		::System::Boolean IsPostCanGotoSurvey(::RPG::Client::LimaoNews::LimaoNewsPostData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_ISPOSTCANGOTOSURVEY_OFFSET))(this, a1);
		}

		::System::Void GotoPostTrackSurveyMission(::RPG::Client::LimaoNews::LimaoNewsPostData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_GOTOPOSTTRACKSURVEYMISSION_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsStateTagViewModel* GetPostStateTagViewModel(::RPG::Client::LimaoNews::LimaoNewsPostData* a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsStateTagViewModel*(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_GETPOSTSTATETAGVIEWMODEL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*>* CreateCommentViewModels(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*>*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_CREATECOMMENTVIEWMODELS_OFFSET))(this, a1);
		}

		::System::Void SetCommentToNextState(::RPG::Client::LimaoNews::LimaoNewsCommentViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_SETCOMMENTTONEXTSTATE_OFFSET))(this, a1);
		}

		::System::Boolean IsCanShowQuickPostSubmit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_ISCANSHOWQUICKPOSTSUBMIT_OFFSET))(this);
		}

		::System::Void RecordPostLocalChangeState(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_RECORDPOSTLOCALCHANGESTATE_OFFSET))(this, a1);
		}

		::System::Void RemovePostLocalChangeState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_REMOVEPOSTLOCALCHANGESTATE_OFFSET))(this);
		}

		::System::Boolean IsPostLocalChangeState(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_ISPOSTLOCALCHANGESTATE_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsPostData* GetOrCreatePostData(::System::UInt32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPostData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_GETORCREATEPOSTDATA_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsPostData* TryGetPostData(::System::UInt32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPostData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE_TRYGETPOSTDATA_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsPostData* _GetPostData(::System::UInt32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPostData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE__GETPOSTDATA_OFFSET))(this, a1);
		}

		::Class_1_1B63904EB56305F5* _GetCommentStateRow(::System::UInt32 a1)
		{
			return ((::Class_1_1B63904EB56305F5*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE__GETCOMMENTSTATEROW_OFFSET))(this, a1);
		}
	};
}
