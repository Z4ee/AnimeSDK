#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_126D16B1AF601722_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIMainCitySwitchRoleCardWidgetController_Context; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_HIDEALL_OFFSET UNITYSDK_OFFSET(0x1864D940)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1864D770)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x1864DAA0)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1864D880)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_ONSERVERFORMDATACHANGED_OFFSET UNITYSDK_OFFSET(0x1864CA40)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1864D800)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1864C890)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_REFRESHBYCONTEXT_OFFSET UNITYSDK_OFFSET(0x1864CC40)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_REFRESHFORM_OFFSET UNITYSDK_OFFSET(0x1864D510)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1864DC50)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1864DC40)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER__ONUIINIT_B__2_0_OFFSET UNITYSDK_OFFSET(0x1864DC60)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1864DCE0)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x1864DD70)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1864DE00)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1864DEA0)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1864DF30)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCitySwitchRoleCardWidgetController_TypeDefinitionIndex = 52758;

	class UIMainCitySwitchRoleCardWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		static ::System::Int32* StaticGet_SelectAvatar()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMainCitySwitchRoleCardWidgetController_TypeDefinitionIndex)->GetStaticField(0xB360);
		}
		::Class_2_126D16B1AF601722_1* _view; // 0x2F0
		::MoleMole::UIMainCitySwitchRoleCardWidgetController_Context* _context; // 0x2F8
		::System::Action_1<::MoleMole::UIMainCitySwitchRoleCardWidgetController_Context*>* _clickAction; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnServerFormDataChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_ONSERVERFORMDATACHANGED_OFFSET))(this, args);
		}

		::System::Void RefreshForm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_REFRESHFORM_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshByContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_REFRESHBYCONTEXT_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void HideAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_HIDEALL_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER__ONUIINIT_B__2_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
