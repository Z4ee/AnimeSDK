#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client { class OfferingRewardData; }
namespace RPG::Client::LimaoNews { class LimaoNewsCommentViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsIssueData; }
namespace RPG::Client::LimaoNews { class LimaoNewsOfferingService; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITVIEWMODEL_CREATECOMMENTVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xD461640)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITVIEWMODEL_GETCOMMENTVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD461A30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITVIEWMODEL_GET_LEVELOFFERINGREWARDDATA_OFFSET UNITYSDK_OFFSET(0xD4619E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITVIEWMODEL_GET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0xD461AC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITVIEWMODEL_GET_PRELEVELOFFERINGREWARDDATA_OFFSET UNITYSDK_OFFSET(0xD461990)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITVIEWMODEL_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xD461810)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITVIEWMODEL_SET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0xD461AD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD461500)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITVIEWMODEL___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xD461AE0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsIssueSubmitViewModel_TypeDefinitionIndex = 79141;

	class LimaoNewsIssueSubmitViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsIssueData* _IssueData; // 0x20
		::RPG::Client::LimaoNews::LimaoNewsOfferingService* _OfferingService; // 0x28
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x30
		::Sofa::Core::SimpleCommand* _OnBtnClose_k__BackingField; // 0x38
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

		::Sofa::Core::SimpleCommand* get_OnBtnClose()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITVIEWMODEL_GET_ONBTNCLOSE_OFFSET))(this);
		}

		::System::Void set_OnBtnClose(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITVIEWMODEL_SET_ONBTNCLOSE_OFFSET))(this, a1);
		}

		::System::Void __ctor_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITVIEWMODEL___CTOR_B__0_0_OFFSET))(this);
		}
	};
}
