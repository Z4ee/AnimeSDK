#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0BE9E9C1D5A3C687;
class Class_1_455008579EB95638_49;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client::MVVM::Model { class LimaoNewsIssueData; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSISSUESERVICE_ADDSUBMITTEDISSUEID_OFFSET UNITYSDK_OFFSET(0xA734CE0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSISSUESERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA72EC60)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSISSUESERVICE_GETALLCANSUBMITISSUEDATA_OFFSET UNITYSDK_OFFSET(0xA7352C0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSISSUESERVICE_GETALLSHOWISSUEDATA_OFFSET UNITYSDK_OFFSET(0xA734F10)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSISSUESERVICE_GETTOPISSUEDATA_OFFSET UNITYSDK_OFFSET(0xA735120)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSISSUESERVICE_HASCANSUBMITISSUE_OFFSET UNITYSDK_OFFSET(0xA735660)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSISSUESERVICE_ISINTERVIEWUPVOTE_OFFSET UNITYSDK_OFFSET(0xA734C80)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSISSUESERVICE_ISISSUECANSHOW_OFFSET UNITYSDK_OFFSET(0xA734E80)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSISSUESERVICE_ISISSUECANSUBMIT_OFFSET UNITYSDK_OFFSET(0xA734DA0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSISSUESERVICE_ISISSUESUBMITTED_OFFSET UNITYSDK_OFFSET(0xA734D40)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSISSUESERVICE_REFRESHCANSUBMITISSUEIDS_OFFSET UNITYSDK_OFFSET(0xA735470)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSISSUESERVICE_REFRESHINTERVIEWUPVOTE_OFFSET UNITYSDK_OFFSET(0xA734C00)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSISSUESERVICE_REFRESHSUBMITEDISSUE_OFFSET UNITYSDK_OFFSET(0xA7345C0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSISSUESERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xA72E510)

namespace RPG::Client::MVVM::Service
{
	inline static constexpr unsigned int LimaoNewsIssueService_TypeDefinitionIndex = 68489;

	class LimaoNewsIssueService : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UpvoteInterviewIDs; // 0x10
		::Class_1_0BE9E9C1D5A3C687* _LimaoNewsConditionService; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _CanSubmitIssueIDs; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _SubmittedIssueIDs; // 0x28

		::System::Void _ctor(::Class_1_0BE9E9C1D5A3C687* conditionService)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0BE9E9C1D5A3C687*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSISSUESERVICE__CTOR_OFFSET))(this, conditionService);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSISSUESERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshSubmitedIssue(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_455008579EB95638_49*>* submittedIssues)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_455008579EB95638_49*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSISSUESERVICE_REFRESHSUBMITEDISSUE_OFFSET))(this, submittedIssues);
		}

		::System::Void RefreshInterviewUpvote(::System::UInt32 interviewID, ::System::Boolean isUpvote)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSISSUESERVICE_REFRESHINTERVIEWUPVOTE_OFFSET))(this, interviewID, isUpvote);
		}

		::System::Boolean IsInterviewUpvote(::System::UInt32 interviewID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSISSUESERVICE_ISINTERVIEWUPVOTE_OFFSET))(this, interviewID);
		}

		::System::Void AddSubmittedIssueID(::System::UInt32 issueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSISSUESERVICE_ADDSUBMITTEDISSUEID_OFFSET))(this, issueID);
		}

		::System::Boolean IsIssueSubmitted(::System::UInt32 issueID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSISSUESERVICE_ISISSUESUBMITTED_OFFSET))(this, issueID);
		}

		::System::Boolean IsIssueCanSubmit(::System::UInt32 issueID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSISSUESERVICE_ISISSUECANSUBMIT_OFFSET))(this, issueID);
		}

		::System::Boolean IsIssueCanShow(::System::UInt32 issueID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSISSUESERVICE_ISISSUECANSHOW_OFFSET))(this, issueID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MVVM::Model::LimaoNewsIssueData*>* GetAllShowIssueData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MVVM::Model::LimaoNewsIssueData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSISSUESERVICE_GETALLSHOWISSUEDATA_OFFSET))(this);
		}

		::RPG::Client::MVVM::Model::LimaoNewsIssueData* GetTopIssueData(::System::Boolean onlyCanSubmit)
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsIssueData*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSISSUESERVICE_GETTOPISSUEDATA_OFFSET))(this, onlyCanSubmit);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MVVM::Model::LimaoNewsIssueData*>* GetAllCanSubmitIssueData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MVVM::Model::LimaoNewsIssueData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSISSUESERVICE_GETALLCANSUBMITISSUEDATA_OFFSET))(this);
		}

		::System::Void RefreshCanSubmitIssueIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSISSUESERVICE_REFRESHCANSUBMITISSUEIDS_OFFSET))(this);
		}

		::System::Boolean HasCanSubmitIssue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSISSUESERVICE_HASCANSUBMITISSUE_OFFSET))(this);
		}
	};
}
