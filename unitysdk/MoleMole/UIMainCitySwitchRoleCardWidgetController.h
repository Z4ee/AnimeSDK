#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_126D16B1AF601722;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIMainCitySwitchRoleCardWidgetController_Context; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_HIDEALL_OFFSET UNITYSDK_OFFSET(0x15D8D3E0)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15D8D210)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x15D8D540)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15D8D320)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_ONSERVERFORMDATACHANGED_OFFSET UNITYSDK_OFFSET(0x15D8C550)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15D8D2A0)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15D8C3A0)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_REFRESHBYCONTEXT_OFFSET UNITYSDK_OFFSET(0x15D8C750)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_REFRESHFORM_OFFSET UNITYSDK_OFFSET(0x15D8CFB0)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D8D6F0)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D8D6E0)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER__ONUIINIT_B__2_0_OFFSET UNITYSDK_OFFSET(0x15D8D700)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15D8D780)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x15D8D810)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15D8D8A0)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15D8D940)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15D8D9D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCitySwitchRoleCardWidgetController_TypeDefinitionIndex = 42282;

	class UIMainCitySwitchRoleCardWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		static ::System::Int32* StaticGet_SelectAvatar()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMainCitySwitchRoleCardWidgetController_TypeDefinitionIndex)->GetStaticField(0xB140);
		}
		::Class_2_126D16B1AF601722* _view; // 0x2F0
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
