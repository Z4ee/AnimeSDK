#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_2FDE33CCAE591AA8;
class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client { class OfferingRewardData; }
namespace RPG::Client::LimaoNews { class LimaoNewsCommentViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsIssueData; }
namespace RPG::Client::LimaoNews { class LimaoNewsOfferingService; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITVIEWMODEL_CREATECOMMENTVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xBD8BB40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITVIEWMODEL_GETCOMMENTVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBD8BFF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITVIEWMODEL_GET_LEVELOFFERINGREWARDDATA_OFFSET UNITYSDK_OFFSET(0xBD8BEE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITVIEWMODEL_GET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0xBD8C080)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITVIEWMODEL_GET_PRELEVELOFFERINGREWARDDATA_OFFSET UNITYSDK_OFFSET(0xBD8BEC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITVIEWMODEL_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xBD8BD40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITVIEWMODEL_SET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0xBD8C090)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xBD8BA00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITVIEWMODEL___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xBD8C0A0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsIssueSubmitViewModel_TypeDefinitionIndex = 73879;

	class LimaoNewsIssueSubmitViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsIssueData* _IssueData; // 0x20
		::Class_1_2FDE33CCAE591AA8* _OnBtnClose_k__BackingField; // 0x28
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x30
		::RPG::Client::LimaoNews::LimaoNewsOfferingService* _OfferingService; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*>* _CommentViewModels; // 0x40

		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsIssueData* a1, ::Class_1_5F4D64A4B97E38F9* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsIssueData*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_Title()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITVIEWMODEL_GET_TITLE_OFFSET))(this);
		}

		::RPG::Client::OfferingRewardData* get_PreLevelOfferingRewardData()
		{
			return ((::RPG::Client::OfferingRewardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITVIEWMODEL_GET_PRELEVELOFFERINGREWARDDATA_OFFSET))(this);
		}

		::RPG::Client::OfferingRewardData* get_LevelOfferingRewardData()
		{
			return ((::RPG::Client::OfferingRewardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITVIEWMODEL_GET_LEVELOFFERINGREWARDDATA_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsCommentViewModel* GetCommentViewModel(::System::Int32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITVIEWMODEL_GETCOMMENTVIEWMODEL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*>* CreateCommentViewModels()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITVIEWMODEL_CREATECOMMENTVIEWMODELS_OFFSET))(this);
		}

		::Class_1_2FDE33CCAE591AA8* get_OnBtnClose()
		{
			return ((::Class_1_2FDE33CCAE591AA8*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITVIEWMODEL_GET_ONBTNCLOSE_OFFSET))(this);
		}

		::System::Void set_OnBtnClose(::Class_1_2FDE33CCAE591AA8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2FDE33CCAE591AA8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITVIEWMODEL_SET_ONBTNCLOSE_OFFSET))(this, a1);
		}

		::System::Void __ctor_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITVIEWMODEL___CTOR_B__0_0_OFFSET))(this);
		}
	};
}
