#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LimaoNewsIssueHintPopupShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_070B5D490CF27458;
class Class_1_95F0C983DAD31028;
class Class_1_A4ED94721C8F4303_3;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C53DC20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEDATA_GETCOMMENTDATAS_OFFSET UNITYSDK_OFFSET(0x1C53DF70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEDATA_GETINTERVIEWS_OFFSET UNITYSDK_OFFSET(0x1C53DCB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEDATA_GETREWARDID_OFFSET UNITYSDK_OFFSET(0x1C53E170)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEDATA_GETREWARDITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1C53E210)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEDATA_GET_HINTPOPUPSHOWTYPE_OFFSET UNITYSDK_OFFSET(0x1C53E2D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEDATA_GET_ISSUEID_OFFSET UNITYSDK_OFFSET(0x1C53E2B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEDATA_SET_ISSUEID_OFFSET UNITYSDK_OFFSET(0x1C53E2C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C53DCA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEDATA__GETISSUEROW_OFFSET UNITYSDK_OFFSET(0x1C53DF10)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsIssueData_TypeDefinitionIndex = 78962;

	class LimaoNewsIssueData : public ::System::Object
	{
	public:
		::System::UInt32 _IssueID_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsIssueData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsIssueData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEDATA_CREATE_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::Class_1_A4ED94721C8F4303_3*>* GetInterviews()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_A4ED94721C8F4303_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEDATA_GETINTERVIEWS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_070B5D490CF27458*>* GetCommentDatas()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_070B5D490CF27458*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEDATA_GETCOMMENTDATAS_OFFSET))(this);
		}

		::System::UInt32 GetRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEDATA_GETREWARDID_OFFSET))(this);
		}

		::System::UInt32 GetRewardItemCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEDATA_GETREWARDITEMCOUNT_OFFSET))(this);
		}

		::Class_1_95F0C983DAD31028* _GetIssueRow()
		{
			return ((::Class_1_95F0C983DAD31028*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEDATA__GETISSUEROW_OFFSET))(this);
		}

		::System::UInt32 get_IssueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEDATA_GET_ISSUEID_OFFSET))(this);
		}

		::System::Void set_IssueID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEDATA_SET_ISSUEID_OFFSET))(this, a1);
		}

		::RPG::GameCore::LimaoNewsIssueHintPopupShowType get_HintPopupShowType()
		{
			return ((::RPG::GameCore::LimaoNewsIssueHintPopupShowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEDATA_GET_HINTPOPUPSHOWTYPE_OFFSET))(this);
		}
	};
}
