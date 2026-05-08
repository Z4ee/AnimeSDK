#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_48D56DACBE4271BC;
class Class_2_3E1A0459A6647B99_9;
namespace DG::Tweening { class Tweener; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFlowerMainTagWidgetController_Context; }
namespace MoleMole { class UIFlowerMainTagWidgetController_ViewModel; }
namespace System { class String; }

#define MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER_BINDBUTTON_OFFSET UNITYSDK_OFFSET(0x15F701B0)
#define MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER_BUILDDATABINDING_OFFSET UNITYSDK_OFFSET(0x15F705D0)
#define MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER_BUILDVIEWMODELDATABINDING_OFFSET UNITYSDK_OFFSET(0x15F701F0)
#define MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER_CREATESUBWIDGET_OFFSET UNITYSDK_OFFSET(0x15F70660)
#define MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER_GET_CURRENTNUM_OFFSET UNITYSDK_OFFSET(0x15F70A90)
#define MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER_GET_MAXNUM_OFFSET UNITYSDK_OFFSET(0x15F70870)
#define MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x15F70730)
#define MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15F706A0)
#define MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15F704B0)
#define MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15F707F0)
#define MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15F700B0)
#define MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER_SET_CURRENTNUM_OFFSET UNITYSDK_OFFSET(0x15F70B80)
#define MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER_SET_MAXNUM_OFFSET UNITYSDK_OFFSET(0x15F70960)
#define MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER__BUILDVIEWMODELDATABINDING_B__14_0_OFFSET UNITYSDK_OFFSET(0x15F70D70)
#define MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER__BUILDVIEWMODELDATABINDING_B__14_1_OFFSET UNITYSDK_OFFSET(0x15F714E0)
#define MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER__BUILDVIEWMODELDATABINDING_B__14_2_OFFSET UNITYSDK_OFFSET(0x15F71690)
#define MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER__BUILDVIEWMODELDATABINDING_B__14_3_OFFSET UNITYSDK_OFFSET(0x15F712F0)
#define MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER__BUILDVIEWMODELDATABINDING_B__14_4_OFFSET UNITYSDK_OFFSET(0x15F713E0)
#define MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F70D10)
#define MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15F70CB0)
#define MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x15F717B0)
#define MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15F71840)
#define MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15F718D0)
#define MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15F71970)
#define MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15F71A00)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMainTagWidgetController_TypeDefinitionIndex = 79118;

	class UIFlowerMainTagWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::String** StaticGet__fillUp()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIFlowerMainTagWidgetController_TypeDefinitionIndex)->GetStaticField(0x47AD0);
		}
		static ::System::String** StaticGet__fillDown()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIFlowerMainTagWidgetController_TypeDefinitionIndex)->GetStaticField(0x47AD8);
		}
		static ::System::Single* StaticGet__animTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIFlowerMainTagWidgetController_TypeDefinitionIndex)->GetStaticField(0x112F0);
		}
		::Class_2_3E1A0459A6647B99_9* _view; // 0x2B8
		::MoleMole::UIFlowerMainTagWidgetController_Context* _context; // 0x2C0
		::MoleMole::UIFlowerMainTagWidgetController_ViewModel* _viewModel; // 0x2C8
		::Class_1_48D56DACBE4271BC* _propertySyncHelper; // 0x2D0
		::Class_1_48D56DACBE4271BC* _propertySyncHelper_ViewModel; // 0x2D8
		::DG::Tweening::Tweener* _fillTweener; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Int32 get_MaxNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER_GET_MAXNUM_OFFSET))(this);
		}

		::System::Void set_MaxNum(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER_SET_MAXNUM_OFFSET))(this, value);
		}

		::System::Int32 get_CurrentNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER_GET_CURRENTNUM_OFFSET))(this);
		}

		::System::Void set_CurrentNum(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER_SET_CURRENTNUM_OFFSET))(this, value);
		}

		::System::Void BuildDataBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER_BUILDDATABINDING_OFFSET))(this);
		}

		::System::Void BuildViewModelDataBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER_BUILDVIEWMODELDATABINDING_OFFSET))(this);
		}

		::System::Void CreateSubWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER_CREATESUBWIDGET_OFFSET))(this);
		}

		::System::Void BindButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER_BINDBUTTON_OFFSET))(this);
		}

		::System::Void _BuildViewModelDataBinding_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER__BUILDVIEWMODELDATABINDING_B__14_0_OFFSET))(this);
		}

		::System::Single _BuildViewModelDataBinding_b__14_3()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER__BUILDVIEWMODELDATABINDING_B__14_3_OFFSET))(this);
		}

		::System::Void _BuildViewModelDataBinding_b__14_4(::System::Single x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER__BUILDVIEWMODELDATABINDING_B__14_4_OFFSET))(this, x);
		}

		::System::Void _BuildViewModelDataBinding_b__14_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER__BUILDVIEWMODELDATABINDING_B__14_1_OFFSET))(this);
		}

		::System::Void _BuildViewModelDataBinding_b__14_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER__BUILDVIEWMODELDATABINDING_B__14_2_OFFSET))(this);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
