#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_0_16E4307DCC419505_11;
class Class_2_013DB5EBD89922B2;
class Class_2_9AAD4291078F8F04;
class Class_2_CEF0D076577A9E4E;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRoleTrustButtonWidgetController_AvatarDataHelper; }
namespace System { class String; }

#define MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_GET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0x147FFD70)
#define MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x147FF710)
#define MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_ONTRUSTBTNCLICK_OFFSET UNITYSDK_OFFSET(0x147FF1E0)
#define MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x147FF7A0)
#define MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x147FF070)
#define MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x147FF6A0)
#define MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_ONVALUECHANGE_TEMPLATE_OFFSET UNITYSDK_OFFSET(0x147FF8F0)
#define MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x147FFA10)
#define MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_SET_AVATARTEMPLATE_OFFSET UNITYSDK_OFFSET(0x147FFE00)
#define MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_SET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0x147FFD80)
#define MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_SWITCHSHAPEWITHSKINBTN_OFFSET UNITYSDK_OFFSET(0x147FF820)
#define MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x147FFF30)
#define MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x147FFED0)
#define MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER__ONTRUSTBTNCLICK_B__2_0_OFFSET UNITYSDK_OFFSET(0x147FFF80)
#define MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER__ONTRUSTBTNCLICK_B__2_1_OFFSET UNITYSDK_OFFSET(0x14800010)
#define MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER__ONVALUECHANGE_TEMPLATE_B__7_0_OFFSET UNITYSDK_OFFSET(0x148000D0)
#define MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14800140)
#define MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x148001D0)
#define MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14800260)
#define MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x148002F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleTrustButtonWidgetController_TypeDefinitionIndex = 38867;

	class UIRoleTrustButtonWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::String** StaticGet_FadeOutAnimName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIRoleTrustButtonWidgetController_TypeDefinitionIndex)->GetStaticField(0x43A00);
		}
		static ::System::String** StaticGet_FadeInAnimName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIRoleTrustButtonWidgetController_TypeDefinitionIndex)->GetStaticField(0x43A08);
		}
		::Class_2_9AAD4291078F8F04* _view; // 0x2B8
		::System::Boolean _templateFirst; // 0x2C0
		::Class_2_CEF0D076577A9E4E* _template; // 0x2C8
		::MoleMole::UIRoleTrustButtonWidgetController_AvatarDataHelper* _avatarData; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnTrustBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_ONTRUSTBTNCLICK_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SwitchShapeWithSkinBtn(::System::Boolean showSkinBtn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_SWITCHSHAPEWITHSKINBTN_OFFSET))(this, showSkinBtn);
		}

		::System::Void OnValueChange_Template(::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_ONVALUECHANGE_TEMPLATE_OFFSET))(this, init);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::Class_2_CEF0D076577A9E4E* get_Template()
		{
			return ((::Class_2_CEF0D076577A9E4E*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_GET_TEMPLATE_OFFSET))(this);
		}

		::System::Void set_Template(::Class_2_CEF0D076577A9E4E* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_CEF0D076577A9E4E*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_SET_TEMPLATE_OFFSET))(this, value);
		}

		::System::Void set_AvatarTemplate(::Class_2_013DB5EBD89922B2* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_013DB5EBD89922B2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_SET_AVATARTEMPLATE_OFFSET))(this, value);
		}

		::System::Void _OnTrustBtnClick_b__2_0(::Class_0_16E4307DCC419505_11* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER__ONTRUSTBTNCLICK_B__2_0_OFFSET))(this, msg);
		}

		::System::Void _OnTrustBtnClick_b__2_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER__ONTRUSTBTNCLICK_B__2_1_OFFSET))(this);
		}

		::System::Void _OnValueChange_Template_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER__ONVALUECHANGE_TEMPLATE_B__7_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
