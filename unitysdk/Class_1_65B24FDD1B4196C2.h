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

#define CLASS_1_65B24FDD1B4196C2_GET_BGCLICKCOMMAND_OFFSET UNITYSDK_OFFSET(0x1A093A20)
#define CLASS_1_65B24FDD1B4196C2_GET_CANCELBUTTONTEXTID_OFFSET UNITYSDK_OFFSET(0x1A092F30)
#define CLASS_1_65B24FDD1B4196C2_GET_CANCELCLICKCOMMAND_OFFSET UNITYSDK_OFFSET(0x1A093A00)
#define CLASS_1_65B24FDD1B4196C2_GET_CLOSECLICKCOMMAND_OFFSET UNITYSDK_OFFSET(0x1A093A10)
#define CLASS_1_65B24FDD1B4196C2_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x1A092F10)
#define CLASS_1_65B24FDD1B4196C2_GET_DESCTIPID_OFFSET UNITYSDK_OFFSET(0x1A092F80)
#define CLASS_1_65B24FDD1B4196C2_GET_DESCTIPVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A092F70)
#define CLASS_1_65B24FDD1B4196C2_GET_EXITREQUESTED_OFFSET UNITYSDK_OFFSET(0x1A092FA0)
#define CLASS_1_65B24FDD1B4196C2_GET_MODE_OFFSET UNITYSDK_OFFSET(0x1A092EF0)
#define CLASS_1_65B24FDD1B4196C2_GET_OKBUTTONTEXTID_OFFSET UNITYSDK_OFFSET(0x1A092F20)
#define CLASS_1_65B24FDD1B4196C2_GET_OKCLICKCOMMAND_OFFSET UNITYSDK_OFFSET(0x1A0939F0)
#define CLASS_1_65B24FDD1B4196C2_GET_SETTINGBUTTONVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A092F90)
#define CLASS_1_65B24FDD1B4196C2_GET_SETTINGCLICKCOMMAND_OFFSET UNITYSDK_OFFSET(0x1A093A40)
#define CLASS_1_65B24FDD1B4196C2_GET_TITLEID_OFFSET UNITYSDK_OFFSET(0x1A092F00)
#define CLASS_1_65B24FDD1B4196C2_GET_TOGGLECHECKED_OFFSET UNITYSDK_OFFSET(0x1A092F50)
#define CLASS_1_65B24FDD1B4196C2_GET_TOGGLECLICKCOMMAND_OFFSET UNITYSDK_OFFSET(0x1A093A30)
#define CLASS_1_65B24FDD1B4196C2_GET_TOGGLEPANELVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A092F40)
#define CLASS_1_65B24FDD1B4196C2_GET_TOGGLETIPSID_OFFSET UNITYSDK_OFFSET(0x1A092F60)
#define CLASS_1_65B24FDD1B4196C2_METHOD_1_0F7B0BB50D3A94E0_OFFSET UNITYSDK_OFFSET(0x1A0943B0)
#define CLASS_1_65B24FDD1B4196C2_METHOD_1_2D43574D19AF9C1E_1_OFFSET UNITYSDK_OFFSET(0x1A093420)
#define CLASS_1_65B24FDD1B4196C2_METHOD_1_2D43574D19AF9C1E_2_OFFSET UNITYSDK_OFFSET(0x1A093610)
#define CLASS_1_65B24FDD1B4196C2_METHOD_1_2D43574D19AF9C1E_3_OFFSET UNITYSDK_OFFSET(0x1A093800)
#define CLASS_1_65B24FDD1B4196C2_METHOD_1_2D43574D19AF9C1E_OFFSET UNITYSDK_OFFSET(0x1A093230)
#define CLASS_1_65B24FDD1B4196C2_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1A094B00)
#define CLASS_1_65B24FDD1B4196C2_METHOD_1_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0x1A0948D0)
#define CLASS_1_65B24FDD1B4196C2_METHOD_1_7DB49B5407C8FD68_1_OFFSET UNITYSDK_OFFSET(0x1A094610)
#define CLASS_1_65B24FDD1B4196C2_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x1A094060)
#define CLASS_1_65B24FDD1B4196C2_METHOD_1_8798C20CDED85B09_OFFSET UNITYSDK_OFFSET(0x1A093F10)
#define CLASS_1_65B24FDD1B4196C2_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1A093FF0)
#define CLASS_1_65B24FDD1B4196C2_METHOD_1_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x1A094790)
#define CLASS_1_65B24FDD1B4196C2_METHOD_1_B1936CE4DA97AA45_2_OFFSET UNITYSDK_OFFSET(0x1A094830)
#define CLASS_1_65B24FDD1B4196C2_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1A0946F0)
#define CLASS_1_65B24FDD1B4196C2_METHOD_1_EA804D98367B4628_OFFSET UNITYSDK_OFFSET(0x1A092FC0)
#define CLASS_1_65B24FDD1B4196C2_SET_EXITREQUESTED_OFFSET UNITYSDK_OFFSET(0x1A092FB0)
#define CLASS_1_65B24FDD1B4196C2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A094B60)
#define CLASS_1_65B24FDD1B4196C2__CTOR_OFFSET UNITYSDK_OFFSET(0x1A093A50)

inline static constexpr unsigned int Class_1_65B24FDD1B4196C2_TypeDefinitionIndex = 50363;

class Class_1_65B24FDD1B4196C2 : public ::System::Object
{
public:
	static ::RPG::Client::TextID* StaticGet_CCGPIEMOBIM()
	{
		return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65B24FDD1B4196C2_TypeDefinitionIndex)->GetStaticField(0x13DA0);
	}
	::R3::ReactiveProperty_1<::System::Boolean>* _DescTipVisible_k__BackingField; // 0x10
	::System::Action* OBDBCEFBOPG; // 0x18
	::R3::ReactiveProperty_1<::System::Boolean>* _ToggleChecked_k__BackingField; // 0x20
	::System::Action* HEFHAHFJPFJ; // 0x28
	::R3::ReactiveProperty_1<::Sofa::Runtime::ReactiveBinding::Example::ConfirmDialogReactiveBtnMode>* _Mode_k__BackingField; // 0x30
	::Class_0_16E4307DCC419505_318* _CancelClickCommand_k__BackingField; // 0x38
	::R3::ReactiveProperty_1<::RPG::Client::TextID>* _ContentId_k__BackingField; // 0x40
	::Class_0_16E4307DCC419505_318* _SettingClickCommand_k__BackingField; // 0x48
	::R3::ReactiveProperty_1<::System::Boolean>* _SettingButtonVisible_k__BackingField; // 0x50
	::Class_0_16E4307DCC419505_318* _OkClickCommand_k__BackingField; // 0x58
	::Class_0_16E4307DCC419505_318* _CloseClickCommand_k__BackingField; // 0x60
	::System::Action_1<::System::Boolean>* PIHLIGDCDDD; // 0x68
	::System::Action* _ExitRequested_k__BackingField; // 0x70
	::R3::ReactiveProperty_1<::RPG::Client::TextID>* _CancelButtonTextId_k__BackingField; // 0x78
	::System::Action* EHEBKEAKCDL; // 0x80
	::System::Action* INBBPFBIJAK; // 0x88
	::R3::ReactiveProperty_1<::RPG::Client::TextID>* _TitleId_k__BackingField; // 0x90
	::R3::ReactiveProperty_1<::System::Boolean>* _TogglePanelVisible_k__BackingField; // 0x98
	::System::Action* HNLEAFNGMDF; // 0xA0
	::System::Action_1<::System::Boolean>* CABLMEKFCIN; // 0xA8
	::System::Action* OILOBJJIGMN; // 0xB0
	::R3::ReactiveProperty_1<::RPG::Client::TextID>* _DescTipId_k__BackingField; // 0xB8
	::Class_0_16E4307DCC419505_318* _ToggleClickCommand_k__BackingField; // 0xC0
	::R3::ReactiveProperty_1<::RPG::Client::TextID>* _ToggleTipsId_k__BackingField; // 0xC8
	::R3::ReactiveProperty_1<::RPG::Client::TextID>* _OkButtonTextId_k__BackingField; // 0xD0
	::Class_0_16E4307DCC419505_318* _BgClickCommand_k__BackingField; // 0xD8
	::System::Action* JDIELJIADAP; // 0xE0
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

	::R3::Observable_1<::RPG::Client::TextID>* Method_1_EA804D98367B4628()
	{
		return ((::R3::Observable_1<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_METHOD_1_EA804D98367B4628_OFFSET))(this);
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
