#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0BE9E9C1D5A3C687;
class Class_1_455008579EB95638_49;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client::LimaoNews { class LimaoNewsIssueData; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_ADDSUBMITTEDISSUEID_OFFSET UNITYSDK_OFFSET(0xBD8AEE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD8A770)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_GETALLCANSUBMITISSUEDATA_OFFSET UNITYSDK_OFFSET(0xBD8B520)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_GETALLSHOWISSUEDATA_OFFSET UNITYSDK_OFFSET(0xBD8B0B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_GETTOPISSUEDATA_OFFSET UNITYSDK_OFFSET(0xBD8B380)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_HASCANSUBMITISSUE_OFFSET UNITYSDK_OFFSET(0xBD8B9A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_ISINTERVIEWUPVOTE_OFFSET UNITYSDK_OFFSET(0xBD84E00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_ISISSUECANSHOW_OFFSET UNITYSDK_OFFSET(0xBD8B020)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_ISISSUECANSUBMIT_OFFSET UNITYSDK_OFFSET(0xBD8AF40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_ISISSUESUBMITTED_OFFSET UNITYSDK_OFFSET(0xBD84980)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_REFRESHCANSUBMITISSUEIDS_OFFSET UNITYSDK_OFFSET(0xBD8B730)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_REFRESHINTERVIEWUPVOTE_OFFSET UNITYSDK_OFFSET(0xBD8AE60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_REFRESHSUBMITEDISSUE_OFFSET UNITYSDK_OFFSET(0xBD8A810)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xBD8A710)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsIssueService_TypeDefinitionIndex = 73778;

	class LimaoNewsIssueService : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _SubmittedIssueIDs; // 0x10
		::Class_1_0BE9E9C1D5A3C687* _LimaoNewsConditionService; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UpvoteInterviewIDs; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _CanSubmitIssueIDs; // 0x28

		::System::Void _ctor(::Class_1_0BE9E9C1D5A3C687* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0BE9E9C1D5A3C687*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE__CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshSubmitedIssue(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_455008579EB95638_49*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_455008579EB95638_49*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_REFRESHSUBMITEDISSUE_OFFSET))(this, a1);
		}

		::System::Void RefreshInterviewUpvote(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_REFRESHINTERVIEWUPVOTE_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsInterviewUpvote(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_ISINTERVIEWUPVOTE_OFFSET))(this, a1);
		}

		::System::Void AddSubmittedIssueID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_ADDSUBMITTEDISSUEID_OFFSET))(this, a1);
		}

		::System::Boolean IsIssueSubmitted(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_ISISSUESUBMITTED_OFFSET))(this, a1);
		}

		::System::Boolean IsIssueCanSubmit(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_ISISSUECANSUBMIT_OFFSET))(this, a1);
		}

		::System::Boolean IsIssueCanShow(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_ISISSUECANSHOW_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsIssueData*>* GetAllShowIssueData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsIssueData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_GETALLSHOWISSUEDATA_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsIssueData* GetTopIssueData(::System::Boolean a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsIssueData*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_GETTOPISSUEDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsIssueData*>* GetAllCanSubmitIssueData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsIssueData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_GETALLCANSUBMITISSUEDATA_OFFSET))(this);
		}

		::System::Void RefreshCanSubmitIssueIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_REFRESHCANSUBMITISSUEIDS_OFFSET))(this);
		}

		::System::Boolean HasCanSubmitIssue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESERVICE_HASCANSUBMITISSUE_OFFSET))(this);
		}
	};
}
