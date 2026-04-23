#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LimaoNewsIssueHintPopupShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_1B7044A592B17773_9;
class Class_1_CC5F9D5F1C16239D;
class Class_1_D729919496B55D43;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSISSUEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA72CFD0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSISSUEDATA_GETCOMMENTDATAS_OFFSET UNITYSDK_OFFSET(0xA72D2B0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSISSUEDATA_GETINTERVIEWS_OFFSET UNITYSDK_OFFSET(0xA72D060)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSISSUEDATA_GETREWARDID_OFFSET UNITYSDK_OFFSET(0xA72D4A0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSISSUEDATA_GETREWARDITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xA72D540)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSISSUEDATA_GET_HINTPOPUPSHOWTYPE_OFFSET UNITYSDK_OFFSET(0xA72D5F0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSISSUEDATA_GET_ISSUEID_OFFSET UNITYSDK_OFFSET(0xA72D5D0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSISSUEDATA_SET_ISSUEID_OFFSET UNITYSDK_OFFSET(0xA72D5E0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSISSUEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA72D050)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSISSUEDATA__GETISSUEROW_OFFSET UNITYSDK_OFFSET(0xA72D250)

namespace RPG::Client::MVVM::Model
{
	inline static constexpr unsigned int LimaoNewsIssueData_TypeDefinitionIndex = 68515;

	class LimaoNewsIssueData : public ::System::Object
	{
	public:
		::System::UInt32 _IssueID_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSISSUEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MVVM::Model::LimaoNewsIssueData* Create(::System::UInt32 issueID)
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsIssueData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSISSUEDATA_CREATE_OFFSET))(issueID);
		}

		::System::Collections::Generic::List_1<::Class_1_1B7044A592B17773_9*>* GetInterviews()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_1B7044A592B17773_9*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSISSUEDATA_GETINTERVIEWS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_D729919496B55D43*>* GetCommentDatas()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_D729919496B55D43*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSISSUEDATA_GETCOMMENTDATAS_OFFSET))(this);
		}

		::System::UInt32 GetRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSISSUEDATA_GETREWARDID_OFFSET))(this);
		}

		::System::UInt32 GetRewardItemCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSISSUEDATA_GETREWARDITEMCOUNT_OFFSET))(this);
		}

		::Class_1_CC5F9D5F1C16239D* _GetIssueRow()
		{
			return ((::Class_1_CC5F9D5F1C16239D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSISSUEDATA__GETISSUEROW_OFFSET))(this);
		}

		::System::UInt32 get_IssueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSISSUEDATA_GET_ISSUEID_OFFSET))(this);
		}

		::System::Void set_IssueID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSISSUEDATA_SET_ISSUEID_OFFSET))(this, value);
		}

		::RPG::GameCore::LimaoNewsIssueHintPopupShowType get_HintPopupShowType()
		{
			return ((::RPG::GameCore::LimaoNewsIssueHintPopupShowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSISSUEDATA_GET_HINTPOPUPSHOWTYPE_OFFSET))(this);
		}
	};
}
