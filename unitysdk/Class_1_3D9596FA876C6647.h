#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_318;
class Class_1_7C973A0AE523EBAC;
namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_0_16E4307DCC419505_320;

#define CLASS_1_3D9596FA876C6647_GET_BUTTONCHECKED_OFFSET UNITYSDK_OFFSET(0x19512AC0)
#define CLASS_1_3D9596FA876C6647_GET_BUTTONINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x19512AB0)
#define CLASS_1_3D9596FA876C6647_GET_CHILD_OFFSET UNITYSDK_OFFSET(0x19512B10)
#define CLASS_1_3D9596FA876C6647_GET_CLICKCOMMAND_OFFSET UNITYSDK_OFFSET(0x19512B20)
#define CLASS_1_3D9596FA876C6647_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x19512740)
#define CLASS_1_3D9596FA876C6647_GET_DESELECTCOMMAND_OFFSET UNITYSDK_OFFSET(0x19512BC0)
#define CLASS_1_3D9596FA876C6647_GET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x19512A80)
#define CLASS_1_3D9596FA876C6647_GET_FIXEDTEXTARGS_OFFSET UNITYSDK_OFFSET(0x19512A40)
#define CLASS_1_3D9596FA876C6647_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x19512A50)
#define CLASS_1_3D9596FA876C6647_GET_INPUTTEXT_OFFSET UNITYSDK_OFFSET(0x19512B00)
#define CLASS_1_3D9596FA876C6647_GET_LONGCLICKCOMMAND_OFFSET UNITYSDK_OFFSET(0x19512B50)
#define CLASS_1_3D9596FA876C6647_GET_LONGPRESSEXITCOMMAND_OFFSET UNITYSDK_OFFSET(0x19512B80)
#define CLASS_1_3D9596FA876C6647_GET_LONGPRESSREPEATCOMMAND_OFFSET UNITYSDK_OFFSET(0x19512B60)
#define CLASS_1_3D9596FA876C6647_GET_MATERIALPATH_OFFSET UNITYSDK_OFFSET(0x19512A60)
#define CLASS_1_3D9596FA876C6647_GET_OVERSHORTCLICKTIMECOMMAND_OFFSET UNITYSDK_OFFSET(0x19512B90)
#define CLASS_1_3D9596FA876C6647_GET_PRESSINGDOWNCOMMAND_OFFSET UNITYSDK_OFFSET(0x19512BA0)
#define CLASS_1_3D9596FA876C6647_GET_REFRESHGATE_OFFSET UNITYSDK_OFFSET(0x19512AA0)
#define CLASS_1_3D9596FA876C6647_GET_RELEASECOMMAND_OFFSET UNITYSDK_OFFSET(0x19512B70)
#define CLASS_1_3D9596FA876C6647_GET_ROOTVISIBLE_OFFSET UNITYSDK_OFFSET(0x19512A90)
#define CLASS_1_3D9596FA876C6647_GET_SELECTCOMMAND_OFFSET UNITYSDK_OFFSET(0x19512BB0)
#define CLASS_1_3D9596FA876C6647_GET_SHORTCLICKCOMMAND_OFFSET UNITYSDK_OFFSET(0x19512B40)
#define CLASS_1_3D9596FA876C6647_GET_SHORTDOWNCOMMAND_OFFSET UNITYSDK_OFFSET(0x19512B30)
#define CLASS_1_3D9596FA876C6647_GET_SHOWINSTANTIATEDPREFAB_OFFSET UNITYSDK_OFFSET(0x19512AD0)
#define CLASS_1_3D9596FA876C6647_GET_SLIDERVALUE_OFFSET UNITYSDK_OFFSET(0x19512AF0)
#define CLASS_1_3D9596FA876C6647_GET_TEXTUREPATH_OFFSET UNITYSDK_OFFSET(0x19512A70)
#define CLASS_1_3D9596FA876C6647_GET_TITLETEXTARGS_OFFSET UNITYSDK_OFFSET(0x195128D0)
#define CLASS_1_3D9596FA876C6647_GET_TITLETEXTID_OFFSET UNITYSDK_OFFSET(0x195128C0)
#define CLASS_1_3D9596FA876C6647_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x19512730)
#define CLASS_1_3D9596FA876C6647_GET_TOGGLEVALUE_OFFSET UNITYSDK_OFFSET(0x19512AE0)
#define CLASS_1_3D9596FA876C6647_GET_UNSIGNEDCOUNT_OFFSET UNITYSDK_OFFSET(0x195128B0)
#define CLASS_1_3D9596FA876C6647_METHOD_1_019B45A470CF59C2_OFFSET UNITYSDK_OFFSET(0x19512750)
#define CLASS_1_3D9596FA876C6647_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x19513BD0)
#define CLASS_1_3D9596FA876C6647_METHOD_1_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0x19513930)
#define CLASS_1_3D9596FA876C6647_METHOD_1_79927ADEBA8AF1BC_OFFSET UNITYSDK_OFFSET(0x195128E0)
#define CLASS_1_3D9596FA876C6647_METHOD_1_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0x19513D30)
#define CLASS_1_3D9596FA876C6647_METHOD_1_EC0E3C91F79E1953_1_OFFSET UNITYSDK_OFFSET(0x19513F20)
#define CLASS_1_3D9596FA876C6647_METHOD_1_EC0E3C91F79E1953_OFFSET UNITYSDK_OFFSET(0x19513E30)
#define CLASS_1_3D9596FA876C6647__CTOR_OFFSET UNITYSDK_OFFSET(0x19512BD0)

inline static constexpr unsigned int Class_1_3D9596FA876C6647_TypeDefinitionIndex = 50350;

class Class_1_3D9596FA876C6647 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_318* _ShortDownCommand_k__BackingField; // 0x10
	::R3::ReactiveProperty_1<::System::Single>* _SliderValue_k__BackingField; // 0x18
	::Class_0_16E4307DCC419505_320<::UnityEngine::GameObject*>* _DeselectCommand_k__BackingField; // 0x20
	::Class_0_16E4307DCC419505_318* _ClickCommand_k__BackingField; // 0x28
	::R3::ReactiveProperty_1<::System::Single>* _FillAmount_k__BackingField; // 0x30
	::R3::ReactiveProperty_1<::System::Boolean>* _ButtonChecked_k__BackingField; // 0x38
	::R3::ReactiveProperty_1<::System::String*>* _IconPath_k__BackingField; // 0x40
	::Class_0_16E4307DCC419505_318* _OverShortClickTimeCommand_k__BackingField; // 0x48
	::R3::ReactiveProperty_1<::System::Boolean>* _RootVisible_k__BackingField; // 0x50
	::Class_0_16E4307DCC419505_318* _ReleaseCommand_k__BackingField; // 0x58
	::R3::ReactiveProperty_1<::Il2CppArray<::System::Object*>*>* _TitleTextArgs_k__BackingField; // 0x60
	::R3::ReactiveProperty_1<::System::Boolean>* _ShowInstantiatedPrefab_k__BackingField; // 0x68
	::R3::ReactiveProperty_1<::System::Boolean>* _ButtonInteractable_k__BackingField; // 0x70
	::Class_0_16E4307DCC419505_318* _ShortClickCommand_k__BackingField; // 0x78
	::R3::ReactiveProperty_1<::System::Boolean>* _ToggleValue_k__BackingField; // 0x80
	::R3::ReactiveProperty_1<::System::String*>* _MaterialPath_k__BackingField; // 0x88
	::R3::ReactiveProperty_1<::RPG::Client::TextID>* _TitleTextId_k__BackingField; // 0x90
	::R3::ReactiveProperty_1<::System::Int32>* _Count_k__BackingField; // 0x98
	::R3::ReactiveProperty_1<::System::UInt32>* _UnsignedCount_k__BackingField; // 0xA0
	::R3::ReactiveProperty_1<::System::String*>* _TexturePath_k__BackingField; // 0xA8
	::Class_0_16E4307DCC419505_318* _LongPressRepeatCommand_k__BackingField; // 0xB0
	::Class_0_16E4307DCC419505_318* _LongClickCommand_k__BackingField; // 0xB8
	::Class_0_16E4307DCC419505_320<::System::Single>* _PressingDownCommand_k__BackingField; // 0xC0
	::R3::ReactiveProperty_1<::Il2CppArray<::System::Object*>*>* _FixedTextArgs_k__BackingField; // 0xC8
	::R3::ReactiveProperty_1<::System::Boolean>* _RefreshGate_k__BackingField; // 0xD0
	::R3::ReactiveProperty_1<::System::String*>* _InputText_k__BackingField; // 0xD8
	::Class_0_16E4307DCC419505_320<::UnityEngine::GameObject*>* _SelectCommand_k__BackingField; // 0xE0
	::R3::ReactiveProperty_1<::System::String*>* _Title_k__BackingField; // 0xE8
	::Class_1_7C973A0AE523EBAC* _Child_k__BackingField; // 0xF0
	::Class_0_16E4307DCC419505_318* _LongPressExitCommand_k__BackingField; // 0xF8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647__CTOR_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::String*>* get_Title()
	{
		return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_GET_TITLE_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Int32>* get_Count()
	{
		return ((::R3::ReactiveProperty_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_GET_COUNT_OFFSET))(this);
	}

	::R3::Observable_1<::System::String*>* Method_1_019B45A470CF59C2()
	{
		return ((::R3::Observable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_METHOD_1_019B45A470CF59C2_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::UInt32>* get_UnsignedCount()
	{
		return ((::R3::ReactiveProperty_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_GET_UNSIGNEDCOUNT_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::RPG::Client::TextID>* get_TitleTextId()
	{
		return ((::R3::ReactiveProperty_1<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_GET_TITLETEXTID_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::Il2CppArray<::System::Object*>*>* get_TitleTextArgs()
	{
		return ((::R3::ReactiveProperty_1<::Il2CppArray<::System::Object*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_GET_TITLETEXTARGS_OFFSET))(this);
	}

	::R3::Observable_1<::System::ValueTuple_2<::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*>>* Method_1_79927ADEBA8AF1BC()
	{
		return ((::R3::Observable_1<::System::ValueTuple_2<::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_METHOD_1_79927ADEBA8AF1BC_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::Il2CppArray<::System::Object*>*>* get_FixedTextArgs()
	{
		return ((::R3::ReactiveProperty_1<::Il2CppArray<::System::Object*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_GET_FIXEDTEXTARGS_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::String*>* get_IconPath()
	{
		return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_GET_ICONPATH_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::String*>* get_MaterialPath()
	{
		return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_GET_MATERIALPATH_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::String*>* get_TexturePath()
	{
		return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_GET_TEXTUREPATH_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Single>* get_FillAmount()
	{
		return ((::R3::ReactiveProperty_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_GET_FILLAMOUNT_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_RootVisible()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_GET_ROOTVISIBLE_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_RefreshGate()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_GET_REFRESHGATE_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_ButtonInteractable()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_GET_BUTTONINTERACTABLE_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_ButtonChecked()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_GET_BUTTONCHECKED_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_ShowInstantiatedPrefab()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_GET_SHOWINSTANTIATEDPREFAB_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_ToggleValue()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_GET_TOGGLEVALUE_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Single>* get_SliderValue()
	{
		return ((::R3::ReactiveProperty_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_GET_SLIDERVALUE_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::String*>* get_InputText()
	{
		return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_GET_INPUTTEXT_OFFSET))(this);
	}

	::Class_1_7C973A0AE523EBAC* get_Child()
	{
		return ((::Class_1_7C973A0AE523EBAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_GET_CHILD_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_318* get_ClickCommand()
	{
		return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_GET_CLICKCOMMAND_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_318* get_ShortDownCommand()
	{
		return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_GET_SHORTDOWNCOMMAND_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_318* get_ShortClickCommand()
	{
		return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_GET_SHORTCLICKCOMMAND_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_318* get_LongClickCommand()
	{
		return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_GET_LONGCLICKCOMMAND_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_318* get_LongPressRepeatCommand()
	{
		return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_GET_LONGPRESSREPEATCOMMAND_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_318* get_ReleaseCommand()
	{
		return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_GET_RELEASECOMMAND_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_318* get_LongPressExitCommand()
	{
		return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_GET_LONGPRESSEXITCOMMAND_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_318* get_OverShortClickTimeCommand()
	{
		return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_GET_OVERSHORTCLICKTIMECOMMAND_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_320<::System::Single>* get_PressingDownCommand()
	{
		return ((::Class_0_16E4307DCC419505_320<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_GET_PRESSINGDOWNCOMMAND_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_320<::UnityEngine::GameObject*>* get_SelectCommand()
	{
		return ((::Class_0_16E4307DCC419505_320<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_GET_SELECTCOMMAND_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_320<::UnityEngine::GameObject*>* get_DeselectCommand()
	{
		return ((::Class_0_16E4307DCC419505_320<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_GET_DESELECTCOMMAND_OFFSET))(this);
	}

	::System::Void Method_1_64501B5CB67A94C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_METHOD_1_64501B5CB67A94C3_OFFSET))(this);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_1_8C4AEC0BC1CA0CB4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_METHOD_1_8C4AEC0BC1CA0CB4_OFFSET))(this, a1);
	}

	::System::Void Method_1_EC0E3C91F79E1953(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_METHOD_1_EC0E3C91F79E1953_OFFSET))(this, a1);
	}

	::System::Void Method_1_EC0E3C91F79E1953_1(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_3D9596FA876C6647_METHOD_1_EC0E3C91F79E1953_1_OFFSET))(this, a1);
	}
};
