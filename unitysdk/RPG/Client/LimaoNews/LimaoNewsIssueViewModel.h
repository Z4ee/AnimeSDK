#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"
#include "unitysdk/System/Guid.h"

class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client::LimaoNews { class LimaoNewsInterviewViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsIssueData; }
namespace RPG::Client::LimaoNews { class LimaoNewsIssueService; }
namespace RPG::Client::LimaoNews { class LimaoNewsIssueSubmitWindow; }
namespace RPG::Client::LimaoNews { class LimaoNewsIssueTabViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsNetworkService; }
namespace RPG::Client::LimaoNews { class LimaoNewsOfficeSurveyTypeData; }
namespace RPG::Client::LimaoNews { class LimaoNewsWindowService; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_BF01A723AB4005C0;

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GETCANSUBMITISSUECOUNT_OFFSET UNITYSDK_OFFSET(0xD463F10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GETCURRENTISSUEREWARDID_OFFSET UNITYSDK_OFFSET(0xD45CAA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GETINTERVIEWVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD45C8A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GET_ALLTABVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xD464070)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GET_CURTABICONPATH_OFFSET UNITYSDK_OFFSET(0xD464150)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GET_ONBTNSELECTLEFT_OFFSET UNITYSDK_OFFSET(0xD4640D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GET_ONBTNSELECTRIGHT_OFFSET UNITYSDK_OFFSET(0xD4640F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GET_ONBTNSUBMIT_OFFSET UNITYSDK_OFFSET(0xD4640B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GET_ONBTNTABCLICK_OFFSET UNITYSDK_OFFSET(0xD464090)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GET_SHOWISSUESUBMITWINDOW_OFFSET UNITYSDK_OFFSET(0xD464110)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GET_SURVEYTYPEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD464130)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_ISCANSUBMIT_OFFSET UNITYSDK_OFFSET(0xD45CA30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_ISISSUECANSUBMIT_OFFSET UNITYSDK_OFFSET(0xD463310)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_REFRESHISSUE_OFFSET UNITYSDK_OFFSET(0xD463950)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SETDEFAULTSELECTEDISSUE_OFFSET UNITYSDK_OFFSET(0xD463B90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SET_ALLTABVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xD464080)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SET_ONBTNSELECTLEFT_OFFSET UNITYSDK_OFFSET(0xD4640E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SET_ONBTNSELECTRIGHT_OFFSET UNITYSDK_OFFSET(0xD464100)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SET_ONBTNSUBMIT_OFFSET UNITYSDK_OFFSET(0xD4640C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SET_ONBTNTABCLICK_OFFSET UNITYSDK_OFFSET(0xD4640A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SET_SHOWISSUESUBMITWINDOW_OFFSET UNITYSDK_OFFSET(0xD464120)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SET_SURVEYTYPEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD464140)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SHOWSUBMITISSUEWINDOW_OFFSET UNITYSDK_OFFSET(0xD45D610)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SUBMITISSUE_OFFSET UNITYSDK_OFFSET(0xD463CE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SWITCHTAB_OFFSET UNITYSDK_OFFSET(0xD463C40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD463410)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL__GETCURRENTISSUEDATA_OFFSET UNITYSDK_OFFSET(0xD4638C0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsIssueViewModel_TypeDefinitionIndex = 79143;

	class LimaoNewsIssueViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyTypeData* _SurveyTypeViewModel_k__BackingField; // 0x20
		::Class_1_BF01A723AB4005C0<::System::Int32>* _OnBtnTabClick_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsIssueData*>* _AllIssues; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsIssueTabViewModel*>* _AllTabViewModels_k__BackingField; // 0x38
		::Sofa::Core::SimpleCommand* _OnBtnSelectRight_k__BackingField; // 0x40
		::Sofa::Core::SimpleCommand* _OnBtnSelectLeft_k__BackingField; // 0x48
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x50
		::RPG::Client::LimaoNews::LimaoNewsIssueService* _IssueService; // 0x58
		::Sofa::Core::SimpleCommand* _OnBtnSubmit_k__BackingField; // 0x60
		::RPG::Client::LimaoNews::LimaoNewsWindowService* _WindowService; // 0x68
		::Sofa::Core::SimpleCommand* _ShowIssueSubmitWindow_k__BackingField; // 0x70
		::RPG::Client::LimaoNews::LimaoNewsNetworkService* _NetworkService; // 0x78
		::System::Int32 CurrentTabIndex; // 0x80

		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsNetworkService* a1, ::RPG::Client::LimaoNews::LimaoNewsIssueService* a2, ::RPG::Client::LimaoNews::LimaoNewsWindowService* a3, ::Class_1_5F4D64A4B97E38F9* a4, ::System::Guid a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsNetworkService*, ::RPG::Client::LimaoNews::LimaoNewsIssueService*, ::RPG::Client::LimaoNews::LimaoNewsWindowService*, ::Class_1_5F4D64A4B97E38F9*, ::System::Guid))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Client::LimaoNews::LimaoNewsInterviewViewModel* GetInterviewViewModel(::System::Int32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsInterviewViewModel*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GETINTERVIEWVIEWMODEL_OFFSET))(this, a1);
		}

		::System::Void RefreshIssue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_REFRESHISSUE_OFFSET))(this);
		}

		::System::Void SetDefaultSelectedIssue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SETDEFAULTSELECTEDISSUE_OFFSET))(this, a1);
		}

		::System::Void SwitchTab(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SWITCHTAB_OFFSET))(this, a1);
		}

		::System::Void SubmitIssue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SUBMITISSUE_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsIssueSubmitWindow* ShowSubmitIssueWindow()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsIssueSubmitWindow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SHOWSUBMITISSUEWINDOW_OFFSET))(this);
		}

		::System::Boolean IsCanSubmit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_ISCANSUBMIT_OFFSET))(this);
		}

		::System::UInt32 GetCanSubmitIssueCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GETCANSUBMITISSUECOUNT_OFFSET))(this);
		}

		::System::Boolean IsIssueCanSubmit(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_ISISSUECANSUBMIT_OFFSET))(this, a1);
		}

		::System::UInt32 GetCurrentIssueRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GETCURRENTISSUEREWARDID_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsIssueData* _GetCurrentIssueData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsIssueData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL__GETCURRENTISSUEDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsIssueTabViewModel*>* get_AllTabViewModels()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsIssueTabViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GET_ALLTABVIEWMODELS_OFFSET))(this);
		}

		::System::Void set_AllTabViewModels(::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsIssueTabViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsIssueTabViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SET_ALLTABVIEWMODELS_OFFSET))(this, a1);
		}

		::Class_1_BF01A723AB4005C0<::System::Int32>* get_OnBtnTabClick()
		{
			return ((::Class_1_BF01A723AB4005C0<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GET_ONBTNTABCLICK_OFFSET))(this);
		}

		::System::Void set_OnBtnTabClick(::Class_1_BF01A723AB4005C0<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BF01A723AB4005C0<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SET_ONBTNTABCLICK_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_OnBtnSubmit()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GET_ONBTNSUBMIT_OFFSET))(this);
		}

		::System::Void set_OnBtnSubmit(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SET_ONBTNSUBMIT_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_OnBtnSelectLeft()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GET_ONBTNSELECTLEFT_OFFSET))(this);
		}

		::System::Void set_OnBtnSelectLeft(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SET_ONBTNSELECTLEFT_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_OnBtnSelectRight()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GET_ONBTNSELECTRIGHT_OFFSET))(this);
		}

		::System::Void set_OnBtnSelectRight(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SET_ONBTNSELECTRIGHT_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_ShowIssueSubmitWindow()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GET_SHOWISSUESUBMITWINDOW_OFFSET))(this);
		}

		::System::Void set_ShowIssueSubmitWindow(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SET_SHOWISSUESUBMITWINDOW_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyTypeData* get_SurveyTypeViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GET_SURVEYTYPEVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_SurveyTypeViewModel(::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyTypeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyTypeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SET_SURVEYTYPEVIEWMODEL_OFFSET))(this, a1);
		}

		::System::String* get_CurTabIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GET_CURTABICONPATH_OFFSET))(this);
		}
	};
}
