#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Sofa/Runtime/ReactiveBinding/Example/ConfirmDialogReactiveBtnMode.h"
#include "unitysdk/Sofa/Runtime/ReactiveBinding/Example/ConfirmDialogReactiveClickType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_318;
namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_65B24FDD1B4196C2_GET_BGCLICKCOMMAND_OFFSET UNITYSDK_OFFSET(0xC505D70)
#define CLASS_1_65B24FDD1B4196C2_GET_CANCELBUTTONTEXTID_OFFSET UNITYSDK_OFFSET(0xC505280)
#define CLASS_1_65B24FDD1B4196C2_GET_CANCELCLICKCOMMAND_OFFSET UNITYSDK_OFFSET(0xC505D50)
#define CLASS_1_65B24FDD1B4196C2_GET_CLOSECLICKCOMMAND_OFFSET UNITYSDK_OFFSET(0xC505D60)
#define CLASS_1_65B24FDD1B4196C2_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xC505260)
#define CLASS_1_65B24FDD1B4196C2_GET_DESCTIPID_OFFSET UNITYSDK_OFFSET(0xC5052D0)
#define CLASS_1_65B24FDD1B4196C2_GET_DESCTIPVISIBLE_OFFSET UNITYSDK_OFFSET(0xC5052C0)
#define CLASS_1_65B24FDD1B4196C2_GET_EXITREQUESTED_OFFSET UNITYSDK_OFFSET(0xC5052F0)
#define CLASS_1_65B24FDD1B4196C2_GET_MODE_OFFSET UNITYSDK_OFFSET(0xC505240)
#define CLASS_1_65B24FDD1B4196C2_GET_OKBUTTONTEXTID_OFFSET UNITYSDK_OFFSET(0xC505270)
#define CLASS_1_65B24FDD1B4196C2_GET_OKCLICKCOMMAND_OFFSET UNITYSDK_OFFSET(0xC505D40)
#define CLASS_1_65B24FDD1B4196C2_GET_SETTINGBUTTONVISIBLE_OFFSET UNITYSDK_OFFSET(0xC5052E0)
#define CLASS_1_65B24FDD1B4196C2_GET_SETTINGCLICKCOMMAND_OFFSET UNITYSDK_OFFSET(0xC505D90)
#define CLASS_1_65B24FDD1B4196C2_GET_TITLEID_OFFSET UNITYSDK_OFFSET(0xC505250)
#define CLASS_1_65B24FDD1B4196C2_GET_TOGGLECHECKED_OFFSET UNITYSDK_OFFSET(0xC5052A0)
#define CLASS_1_65B24FDD1B4196C2_GET_TOGGLECLICKCOMMAND_OFFSET UNITYSDK_OFFSET(0xC505D80)
#define CLASS_1_65B24FDD1B4196C2_GET_TOGGLEPANELVISIBLE_OFFSET UNITYSDK_OFFSET(0xC505290)
#define CLASS_1_65B24FDD1B4196C2_GET_TOGGLETIPSID_OFFSET UNITYSDK_OFFSET(0xC5052B0)
#define CLASS_1_65B24FDD1B4196C2_METHOD_1_0F7B0BB50D3A94E0_OFFSET UNITYSDK_OFFSET(0xC506730)
#define CLASS_1_65B24FDD1B4196C2_METHOD_1_248DA5F58F8F6D75_OFFSET UNITYSDK_OFFSET(0xC505310)
#define CLASS_1_65B24FDD1B4196C2_METHOD_1_2D43574D19AF9C1E_1_OFFSET UNITYSDK_OFFSET(0xC505770)
#define CLASS_1_65B24FDD1B4196C2_METHOD_1_2D43574D19AF9C1E_2_OFFSET UNITYSDK_OFFSET(0xC505960)
#define CLASS_1_65B24FDD1B4196C2_METHOD_1_2D43574D19AF9C1E_3_OFFSET UNITYSDK_OFFSET(0xC505B50)
#define CLASS_1_65B24FDD1B4196C2_METHOD_1_2D43574D19AF9C1E_OFFSET UNITYSDK_OFFSET(0xC505580)
#define CLASS_1_65B24FDD1B4196C2_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xC506E70)
#define CLASS_1_65B24FDD1B4196C2_METHOD_1_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0xC506C40)
#define CLASS_1_65B24FDD1B4196C2_METHOD_1_7DB49B5407C8FD68_1_OFFSET UNITYSDK_OFFSET(0xC506980)
#define CLASS_1_65B24FDD1B4196C2_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0xC5063C0)
#define CLASS_1_65B24FDD1B4196C2_METHOD_1_8798C20CDED85B09_OFFSET UNITYSDK_OFFSET(0xC506270)
#define CLASS_1_65B24FDD1B4196C2_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xC506350)
#define CLASS_1_65B24FDD1B4196C2_METHOD_1_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0xC506B00)
#define CLASS_1_65B24FDD1B4196C2_METHOD_1_B1936CE4DA97AA45_2_OFFSET UNITYSDK_OFFSET(0xC506BA0)
#define CLASS_1_65B24FDD1B4196C2_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xC506A60)
#define CLASS_1_65B24FDD1B4196C2_SET_EXITREQUESTED_OFFSET UNITYSDK_OFFSET(0xC505300)
#define CLASS_1_65B24FDD1B4196C2__CCTOR_OFFSET UNITYSDK_OFFSET(0xC506ED0)
#define CLASS_1_65B24FDD1B4196C2__CTOR_OFFSET UNITYSDK_OFFSET(0xC505DA0)

inline static constexpr unsigned int Class_1_65B24FDD1B4196C2_TypeDefinitionIndex = 50363;

class Class_1_65B24FDD1B4196C2 : public ::System::Object
{
public:
	static ::RPG::Client::TextID* StaticGet_CCGPIEMOBIM()
	{
		return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65B24FDD1B4196C2_TypeDefinitionIndex)->GetStaticField(0x13BF0);
	}
	::System::Action* OILOBJJIGMN; // 0x10
	::R3::ReactiveProperty_1<::RPG::Client::TextID>* _DescTipId_k__BackingField; // 0x18
	::R3::ReactiveProperty_1<::RPG::Client::TextID>* _OkButtonTextId_k__BackingField; // 0x20
	::R3::ReactiveProperty_1<::RPG::Client::TextID>* _ToggleTipsId_k__BackingField; // 0x28
	::System::Action* INBBPFBIJAK; // 0x30
	::System::Action* HEFHAHFJPFJ; // 0x38
	::System::Action* EHEBKEAKCDL; // 0x40
	::Class_0_16E4307DCC419505_318* _OkClickCommand_k__BackingField; // 0x48
	::R3::ReactiveProperty_1<::System::Boolean>* _DescTipVisible_k__BackingField; // 0x50
	::System::Action_1<::System::Boolean>* CABLMEKFCIN; // 0x58
	::System::Action* _ExitRequested_k__BackingField; // 0x60
	::R3::ReactiveProperty_1<::System::Boolean>* _ToggleChecked_k__BackingField; // 0x68
	::Class_0_16E4307DCC419505_318* _BgClickCommand_k__BackingField; // 0x70
	::Class_0_16E4307DCC419505_318* _ToggleClickCommand_k__BackingField; // 0x78
	::R3::ReactiveProperty_1<::System::Boolean>* _TogglePanelVisible_k__BackingField; // 0x80
	::Class_0_16E4307DCC419505_318* _SettingClickCommand_k__BackingField; // 0x88
	::Class_0_16E4307DCC419505_318* _CloseClickCommand_k__BackingField; // 0x90
	::Class_0_16E4307DCC419505_318* _CancelClickCommand_k__BackingField; // 0x98
	::R3::ReactiveProperty_1<::RPG::Client::TextID>* _ContentId_k__BackingField; // 0xA0
	::System::Action* HNLEAFNGMDF; // 0xA8
	::System::Action* JDIELJIADAP; // 0xB0
	::System::Action* OBDBCEFBOPG; // 0xB8
	::R3::ReactiveProperty_1<::Sofa::Runtime::ReactiveBinding::Example::ConfirmDialogReactiveBtnMode>* _Mode_k__BackingField; // 0xC0
	::R3::ReactiveProperty_1<::System::Boolean>* _SettingButtonVisible_k__BackingField; // 0xC8
	::System::Action_1<::System::Boolean>* PIHLIGDCDDD; // 0xD0
	::R3::ReactiveProperty_1<::RPG::Client::TextID>* _CancelButtonTextId_k__BackingField; // 0xD8
	::R3::ReactiveProperty_1<::RPG::Client::TextID>* _TitleId_k__BackingField; // 0xE0
	::Sofa::Runtime::ReactiveBinding::Example::ConfirmDialogReactiveClickType NPCLAAHPCMN; // 0xE8
	::System::Boolean PLFBBGDPDDD; // 0xEC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2__CCTOR_OFFSET))();
	}

	::R3::ReactiveProperty_1<::Sofa::Runtime::ReactiveBinding::Example::ConfirmDialogReactiveBtnMode>* get_Mode()
	{
		return ((::R3::ReactiveProperty_1<::Sofa::Runtime::ReactiveBinding::Example::ConfirmDialogReactiveBtnMode>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_GET_MODE_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::RPG::Client::TextID>* get_TitleId()
	{
		return ((::R3::ReactiveProperty_1<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_GET_TITLEID_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::RPG::Client::TextID>* get_ContentId()
	{
		return ((::R3::ReactiveProperty_1<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_GET_CONTENTID_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::RPG::Client::TextID>* get_OkButtonTextId()
	{
		return ((::R3::ReactiveProperty_1<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_GET_OKBUTTONTEXTID_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::RPG::Client::TextID>* get_CancelButtonTextId()
	{
		return ((::R3::ReactiveProperty_1<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_GET_CANCELBUTTONTEXTID_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_TogglePanelVisible()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_GET_TOGGLEPANELVISIBLE_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_ToggleChecked()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_GET_TOGGLECHECKED_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::RPG::Client::TextID>* get_ToggleTipsId()
	{
		return ((::R3::ReactiveProperty_1<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_GET_TOGGLETIPSID_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_DescTipVisible()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_GET_DESCTIPVISIBLE_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::RPG::Client::TextID>* get_DescTipId()
	{
		return ((::R3::ReactiveProperty_1<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_GET_DESCTIPID_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_SettingButtonVisible()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_GET_SETTINGBUTTONVISIBLE_OFFSET))(this);
	}

	::System::Action* get_ExitRequested()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_GET_EXITREQUESTED_OFFSET))(this);
	}

	::System::Void set_ExitRequested(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_SET_EXITREQUESTED_OFFSET))(this, a1);
	}

	::R3::Observable_1<::RPG::Client::TextID>* Method_1_248DA5F58F8F6D75()
	{
		return ((::R3::Observable_1<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_METHOD_1_248DA5F58F8F6D75_OFFSET))(this);
	}

	::R3::Observable_1<::System::Boolean>* Method_1_2D43574D19AF9C1E()
	{
		return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_METHOD_1_2D43574D19AF9C1E_OFFSET))(this);
	}

	::R3::Observable_1<::System::Boolean>* Method_1_2D43574D19AF9C1E_1()
	{
		return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_METHOD_1_2D43574D19AF9C1E_1_OFFSET))(this);
	}

	::R3::Observable_1<::System::Boolean>* Method_1_2D43574D19AF9C1E_2()
	{
		return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_METHOD_1_2D43574D19AF9C1E_2_OFFSET))(this);
	}

	::R3::Observable_1<::System::Boolean>* Method_1_2D43574D19AF9C1E_3()
	{
		return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_METHOD_1_2D43574D19AF9C1E_3_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_318* get_OkClickCommand()
	{
		return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_GET_OKCLICKCOMMAND_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_318* get_CancelClickCommand()
	{
		return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_GET_CANCELCLICKCOMMAND_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_318* get_CloseClickCommand()
	{
		return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_GET_CLOSECLICKCOMMAND_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_318* get_BgClickCommand()
	{
		return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_GET_BGCLICKCOMMAND_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_318* get_ToggleClickCommand()
	{
		return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_GET_TOGGLECLICKCOMMAND_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_318* get_SettingClickCommand()
	{
		return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_GET_SETTINGCLICKCOMMAND_OFFSET))(this);
	}

	::System::Void Method_1_8798C20CDED85B09(::Sofa::Runtime::ReactiveBinding::Example::ConfirmDialogReactiveBtnMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::Sofa::Runtime::ReactiveBinding::Example::ConfirmDialogReactiveBtnMode))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_METHOD_1_8798C20CDED85B09_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_0F7B0BB50D3A94E0(::System::Boolean a1, ::System::Action_1<::System::Boolean>* a2, ::RPG::Client::TextID a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action_1<::System::Boolean>*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_METHOD_1_0F7B0BB50D3A94E0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7DB49B5407C8FD68_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_METHOD_1_7DB49B5407C8FD68_1_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_METHOD_1_B1936CE4DA97AA45_1_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_METHOD_1_B1936CE4DA97AA45_2_OFFSET))(this);
	}

	::System::Void Method_1_64501B5CB67A94C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_METHOD_1_64501B5CB67A94C3_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
