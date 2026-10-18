#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_397;
class Class_1_7F37B67ACE9EA939;
namespace ObservableCollections { template <typename T> class ObservableList_1; }
namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace R3 { template <typename T> class Subject_1; }
namespace RPG::Client::Ui::Samples { class FriendChatContactVM; }
namespace RPG::Client::Ui::Samples { class FriendChatTabViewModel; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_0_16E4307DCC419505_399;
template <typename T> class Class_1_BF01A723AB4005C0;

#define CLASS_1_59AA224BB47C8EC6_ADD_EXITREQUESTED_OFFSET UNITYSDK_OFFSET(0xB6D79F0)
#define CLASS_1_59AA224BB47C8EC6_GET_CONTACTS_OFFSET UNITYSDK_OFFSET(0xB6D72C0)
#define CLASS_1_59AA224BB47C8EC6_GET_FIRSTONLINECONTACT_OFFSET UNITYSDK_OFFSET(0xB6D5C20)
#define CLASS_1_59AA224BB47C8EC6_GET_ISPAMCHATENABLED_OFFSET UNITYSDK_OFFSET(0xB6D7280)
#define CLASS_1_59AA224BB47C8EC6_GET_ISPAMCHATLLMENABLED_OFFSET UNITYSDK_OFFSET(0xB6D7290)
#define CLASS_1_59AA224BB47C8EC6_GET_ISPAMSELECTED_OFFSET UNITYSDK_OFFSET(0xB6D72F0)
#define CLASS_1_59AA224BB47C8EC6_GET_ISSENDPANELVISIBLE_OFFSET UNITYSDK_OFFSET(0xB6D7320)
#define CLASS_1_59AA224BB47C8EC6_GET_SELECTEDCONTACT_OFFSET UNITYSDK_OFFSET(0xB6D5C30)
#define CLASS_1_59AA224BB47C8EC6_GET_SELECTEDTABINDEX_OFFSET UNITYSDK_OFFSET(0xB6D72D0)
#define CLASS_1_59AA224BB47C8EC6_GET_SELECTEDTAB_OFFSET UNITYSDK_OFFSET(0xB6D72E0)
#define CLASS_1_59AA224BB47C8EC6_GET_SUBTITLETEXTID_OFFSET UNITYSDK_OFFSET(0xB6D7300)
#define CLASS_1_59AA224BB47C8EC6_GET_TABS_OFFSET UNITYSDK_OFFSET(0xB6D72B0)
#define CLASS_1_59AA224BB47C8EC6_GET_TITLETEXT_OFFSET UNITYSDK_OFFSET(0xB6D7310)
#define CLASS_1_59AA224BB47C8EC6_GET_TOPBARVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB6D72A0)
#define CLASS_1_59AA224BB47C8EC6_GET_UISTATENAME_OFFSET UNITYSDK_OFFSET(0xB6D7330)
#define CLASS_1_59AA224BB47C8EC6_METHOD_1_8AE653474AE4DD46_OFFSET UNITYSDK_OFFSET(0xB6D5A10)
#define CLASS_1_59AA224BB47C8EC6_METHOD_1_8B5BF39581014B56_OFFSET UNITYSDK_OFFSET(0xB6D7400)
#define CLASS_1_59AA224BB47C8EC6_METHOD_1_8E9E3E0D1D6E6E24_OFFSET UNITYSDK_OFFSET(0xB6D5690)
#define CLASS_1_59AA224BB47C8EC6_METHOD_1_B213056103887067_1_OFFSET UNITYSDK_OFFSET(0xB6D74C0)
#define CLASS_1_59AA224BB47C8EC6_METHOD_1_B213056103887067_2_OFFSET UNITYSDK_OFFSET(0xB6D76F0)
#define CLASS_1_59AA224BB47C8EC6_METHOD_1_B213056103887067_3_OFFSET UNITYSDK_OFFSET(0xB6D77B0)
#define CLASS_1_59AA224BB47C8EC6_METHOD_1_B213056103887067_4_OFFSET UNITYSDK_OFFSET(0xB6D7870)
#define CLASS_1_59AA224BB47C8EC6_METHOD_1_B213056103887067_5_OFFSET UNITYSDK_OFFSET(0xB6D7930)
#define CLASS_1_59AA224BB47C8EC6_METHOD_1_B213056103887067_OFFSET UNITYSDK_OFFSET(0xB6D7340)
#define CLASS_1_59AA224BB47C8EC6_METHOD_1_CFE6FB160FFF5938_1_OFFSET UNITYSDK_OFFSET(0xB6D5C40)
#define CLASS_1_59AA224BB47C8EC6_METHOD_1_CFE6FB160FFF5938_OFFSET UNITYSDK_OFFSET(0xB6D5A60)
#define CLASS_1_59AA224BB47C8EC6_METHOD_1_D8DA71DCE104F04A_OFFSET UNITYSDK_OFFSET(0xB6D7580)
#define CLASS_1_59AA224BB47C8EC6_REMOVE_EXITREQUESTED_OFFSET UNITYSDK_OFFSET(0xB6D7A50)
#define CLASS_1_59AA224BB47C8EC6__CTOR_OFFSET UNITYSDK_OFFSET(0xB6D5F60)
#define CLASS_1_59AA224BB47C8EC6__GET_ONEXITCOMMAND_B__58_0_OFFSET UNITYSDK_OFFSET(0xB6D7E70)
#define CLASS_1_59AA224BB47C8EC6__GET_ONNEXTTABCOMMAND_B__55_0_OFFSET UNITYSDK_OFFSET(0xB6D7C90)
#define CLASS_1_59AA224BB47C8EC6__GET_ONPREVIOUSTABCOMMAND_B__52_0_OFFSET UNITYSDK_OFFSET(0xB6D7AB0)
#define CLASS_1_59AA224BB47C8EC6__GET_REMOVELASTCONTACTCOMMAND_B__70_0_OFFSET UNITYSDK_OFFSET(0xB6D80A0)
#define CLASS_1_59AA224BB47C8EC6__GET_RENAMEFIRSTCONTACTCOMMAND_B__64_0_OFFSET UNITYSDK_OFFSET(0xB6D7E90)
#define CLASS_1_59AA224BB47C8EC6__GET_SCROLLTOLASTCONTACTCOMMAND_B__73_0_OFFSET UNITYSDK_OFFSET(0xB6D8130)

inline static constexpr unsigned int Class_1_59AA224BB47C8EC6_TypeDefinitionIndex = 73449;

class Class_1_59AA224BB47C8EC6 : public ::System::Object
{
public:
	::R3::ReactiveProperty_1<::RPG::Client::Ui::Samples::FriendChatTabViewModel*>* _SelectedTab_k__BackingField; // 0x10
	::Sofa::Core::SimpleCommand* LJGHCLANIEB; // 0x18
	::ObservableCollections::ObservableList_1<::RPG::Client::Ui::Samples::FriendChatTabViewModel*>* _Tabs_k__BackingField; // 0x20
	::Class_1_BF01A723AB4005C0<::RPG::Client::Ui::Samples::FriendChatTabViewModel*>* ENNBEOPCEHG; // 0x28
	::R3::ReactiveProperty_1<::RPG::Client::Ui::Samples::FriendChatContactVM*>* _SelectedContact_k__BackingField; // 0x30
	::R3::ReactiveProperty_1<::System::String*>* _UiStateName_k__BackingField; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* CJMFBDCOJGK; // 0x40
	::Sofa::Core::SimpleCommand* PHAKDIJILEK; // 0x48
	::R3::Observable_1<::System::Boolean>* _IsSendPanelVisible_k__BackingField; // 0x50
	::System::Action* ExitRequested; // 0x58
	::R3::Observable_1<::System::Boolean>* _IsPamSelected_k__BackingField; // 0x60
	::R3::ReactiveProperty_1<::RPG::Client::Ui::Samples::FriendChatContactVM*>* _FirstOnlineContact_k__BackingField; // 0x68
	::Class_1_BF01A723AB4005C0<::System::Int32>* LPEGKFBPJOI; // 0x70
	::Sofa::Core::SimpleCommand* FJAHLMCIIJM; // 0x78
	::R3::Observable_1<::System::String*>* _TitleText_k__BackingField; // 0x80
	::Sofa::Core::SimpleCommand* GFFLPAOPOHA; // 0x88
	::R3::ReactiveProperty_1<::System::Int32>* _SelectedTabIndex_k__BackingField; // 0x90
	::R3::Subject_1<::System::Int32>* DKKGMPPEGNI; // 0x98
	::Class_1_7F37B67ACE9EA939* _TopBarViewModel_k__BackingField; // 0xA0
	::Sofa::Core::SimpleCommand* BJLGNMENHAA; // 0xA8
	::Sofa::Core::SimpleCommand* LINLNGALPHK; // 0xB0
	::ObservableCollections::ObservableList_1<::RPG::Client::Ui::Samples::FriendChatContactVM*>* _Contacts_k__BackingField; // 0xB8
	::R3::Observable_1<::System::String*>* _SubTitleTextID_k__BackingField; // 0xC0
	::System::Boolean _IsPamChatLLMEnabled_k__BackingField; // 0xC8
	::System::Boolean _IsPamChatEnabled_k__BackingField; // 0xC9

	::System::Void _ctor(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_59AA224BB47C8EC6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8E9E3E0D1D6E6E24()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59AA224BB47C8EC6_METHOD_1_8E9E3E0D1D6E6E24_OFFSET))(this);
	}

	::R3::Observable_1<::System::Int32>* Method_1_8AE653474AE4DD46()
	{
		return ((::R3::Observable_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59AA224BB47C8EC6_METHOD_1_8AE653474AE4DD46_OFFSET))(this);
	}

	::System::Void Method_1_CFE6FB160FFF5938()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59AA224BB47C8EC6_METHOD_1_CFE6FB160FFF5938_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::RPG::Client::Ui::Samples::FriendChatContactVM*>* get_FirstOnlineContact()
	{
		return ((::R3::ReactiveProperty_1<::RPG::Client::Ui::Samples::FriendChatContactVM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59AA224BB47C8EC6_GET_FIRSTONLINECONTACT_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::RPG::Client::Ui::Samples::FriendChatContactVM*>* get_SelectedContact()
	{
		return ((::R3::ReactiveProperty_1<::RPG::Client::Ui::Samples::FriendChatContactVM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59AA224BB47C8EC6_GET_SELECTEDCONTACT_OFFSET))(this);
	}

	::System::Void Method_1_CFE6FB160FFF5938_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59AA224BB47C8EC6_METHOD_1_CFE6FB160FFF5938_1_OFFSET))(this);
	}

	::System::Boolean get_IsPamChatEnabled()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59AA224BB47C8EC6_GET_ISPAMCHATENABLED_OFFSET))(this);
	}

	::System::Boolean get_IsPamChatLLMEnabled()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59AA224BB47C8EC6_GET_ISPAMCHATLLMENABLED_OFFSET))(this);
	}

	::Class_1_7F37B67ACE9EA939* get_TopBarViewModel()
	{
		return ((::Class_1_7F37B67ACE9EA939*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59AA224BB47C8EC6_GET_TOPBARVIEWMODEL_OFFSET))(this);
	}

	::ObservableCollections::ObservableList_1<::RPG::Client::Ui::Samples::FriendChatTabViewModel*>* get_Tabs()
	{
		return ((::ObservableCollections::ObservableList_1<::RPG::Client::Ui::Samples::FriendChatTabViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59AA224BB47C8EC6_GET_TABS_OFFSET))(this);
	}

	::ObservableCollections::ObservableList_1<::RPG::Client::Ui::Samples::FriendChatContactVM*>* get_Contacts()
	{
		return ((::ObservableCollections::ObservableList_1<::RPG::Client::Ui::Samples::FriendChatContactVM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59AA224BB47C8EC6_GET_CONTACTS_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Int32>* get_SelectedTabIndex()
	{
		return ((::R3::ReactiveProperty_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59AA224BB47C8EC6_GET_SELECTEDTABINDEX_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::RPG::Client::Ui::Samples::FriendChatTabViewModel*>* get_SelectedTab()
	{
		return ((::R3::ReactiveProperty_1<::RPG::Client::Ui::Samples::FriendChatTabViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59AA224BB47C8EC6_GET_SELECTEDTAB_OFFSET))(this);
	}

	::R3::Observable_1<::System::Boolean>* get_IsPamSelected()
	{
		return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59AA224BB47C8EC6_GET_ISPAMSELECTED_OFFSET))(this);
	}

	::R3::Observable_1<::System::String*>* get_SubTitleTextID()
	{
		return ((::R3::Observable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59AA224BB47C8EC6_GET_SUBTITLETEXTID_OFFSET))(this);
	}

	::R3::Observable_1<::System::String*>* get_TitleText()
	{
		return ((::R3::Observable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59AA224BB47C8EC6_GET_TITLETEXT_OFFSET))(this);
	}

	::R3::Observable_1<::System::Boolean>* get_IsSendPanelVisible()
	{
		return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59AA224BB47C8EC6_GET_ISSENDPANELVISIBLE_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::String*>* get_UiStateName()
	{
		return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59AA224BB47C8EC6_GET_UISTATENAME_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* Method_1_B213056103887067()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59AA224BB47C8EC6_METHOD_1_B213056103887067_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_399<::System::Int32>* Method_1_8B5BF39581014B56()
	{
		return ((::Class_0_16E4307DCC419505_399<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59AA224BB47C8EC6_METHOD_1_8B5BF39581014B56_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* Method_1_B213056103887067_1()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59AA224BB47C8EC6_METHOD_1_B213056103887067_1_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_399<::RPG::Client::Ui::Samples::FriendChatTabViewModel*>* Method_1_D8DA71DCE104F04A()
	{
		return ((::Class_0_16E4307DCC419505_399<::RPG::Client::Ui::Samples::FriendChatTabViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59AA224BB47C8EC6_METHOD_1_D8DA71DCE104F04A_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* Method_1_B213056103887067_2()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59AA224BB47C8EC6_METHOD_1_B213056103887067_2_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* Method_1_B213056103887067_3()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59AA224BB47C8EC6_METHOD_1_B213056103887067_3_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* Method_1_B213056103887067_4()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59AA224BB47C8EC6_METHOD_1_B213056103887067_4_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* Method_1_B213056103887067_5()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59AA224BB47C8EC6_METHOD_1_B213056103887067_5_OFFSET))(this);
	}

	::System::Void add_ExitRequested(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_59AA224BB47C8EC6_ADD_EXITREQUESTED_OFFSET))(this, a1);
	}

	::System::Void remove_ExitRequested(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_59AA224BB47C8EC6_REMOVE_EXITREQUESTED_OFFSET))(this, a1);
	}

	::System::Void _get_OnPreviousTabCommand_b__52_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59AA224BB47C8EC6__GET_ONPREVIOUSTABCOMMAND_B__52_0_OFFSET))(this);
	}

	::System::Void _get_OnNextTabCommand_b__55_0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_59AA224BB47C8EC6__GET_ONNEXTTABCOMMAND_B__55_0_OFFSET))(this, a1);
	}

	::System::Void _get_OnExitCommand_b__58_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59AA224BB47C8EC6__GET_ONEXITCOMMAND_B__58_0_OFFSET))(this);
	}

	::System::Void _get_RenameFirstContactCommand_b__64_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59AA224BB47C8EC6__GET_RENAMEFIRSTCONTACTCOMMAND_B__64_0_OFFSET))(this);
	}

	::System::Void _get_RemoveLastContactCommand_b__70_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59AA224BB47C8EC6__GET_REMOVELASTCONTACTCOMMAND_B__70_0_OFFSET))(this);
	}

	::System::Void _get_ScrollToLastContactCommand_b__73_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59AA224BB47C8EC6__GET_SCROLLTOLASTCONTACTCOMMAND_B__73_0_OFFSET))(this);
	}
};
