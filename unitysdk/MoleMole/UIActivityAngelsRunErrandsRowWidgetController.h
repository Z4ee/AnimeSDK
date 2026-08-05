#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_208CC9941471731A_259;
class Class_2_2725B9A08E959D58;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_UIACTIVITYANGELSRUNERRANDSROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18935230)
#define MOLEMOLE_UIACTIVITYANGELSRUNERRANDSROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18935340)
#define MOLEMOLE_UIACTIVITYANGELSRUNERRANDSROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x189352C0)
#define MOLEMOLE_UIACTIVITYANGELSRUNERRANDSROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18935160)
#define MOLEMOLE_UIACTIVITYANGELSRUNERRANDSROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x189351C0)
#define MOLEMOLE_UIACTIVITYANGELSRUNERRANDSROWWIDGETCONTROLLER_PLAYFADEINANIM_OFFSET UNITYSDK_OFFSET(0x18935750)
#define MOLEMOLE_UIACTIVITYANGELSRUNERRANDSROWWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18935870)
#define MOLEMOLE_UIACTIVITYANGELSRUNERRANDSROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18935860)
#define MOLEMOLE_UIACTIVITYANGELSRUNERRANDSROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x189358C0)
#define MOLEMOLE_UIACTIVITYANGELSRUNERRANDSROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18935950)
#define MOLEMOLE_UIACTIVITYANGELSRUNERRANDSROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x189359F0)
#define MOLEMOLE_UIACTIVITYANGELSRUNERRANDSROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18935A80)
#define MOLEMOLE_UIACTIVITYANGELSRUNERRANDSROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18935B10)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityAngelsRunErrandsRowWidgetController_TypeDefinitionIndex = 73123;

	class UIActivityAngelsRunErrandsRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		static ::System::String** StaticGet_PlayerFadeInAnim()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIActivityAngelsRunErrandsRowWidgetController_TypeDefinitionIndex)->GetStaticField(0x32930);
		}
		static ::System::String** StaticGet_NormalFadeInAnim()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIActivityAngelsRunErrandsRowWidgetController_TypeDefinitionIndex)->GetStaticField(0x32938);
		}
		::Class_2_2725B9A08E959D58* _view; // 0x2F0
		::System::Int32 _index; // 0x2F8
		::Class_2_208CC9941471731A_259* _config; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYANGELSRUNERRANDSROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYANGELSRUNERRANDSROWWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYANGELSRUNERRANDSROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYANGELSRUNERRANDSROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYANGELSRUNERRANDSROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYANGELSRUNERRANDSROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYANGELSRUNERRANDSROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void PlayFadeInAnim(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYANGELSRUNERRANDSROWWIDGETCONTROLLER_PLAYFADEINANIM_OFFSET))(this, callback);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYANGELSRUNERRANDSROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYANGELSRUNERRANDSROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYANGELSRUNERRANDSROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYANGELSRUNERRANDSROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYANGELSRUNERRANDSROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
