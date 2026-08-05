#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_7BEEB90214042948;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIWISHLISTPROPERTYITEMWIDGETCONTROLLER_GETPROPERTYICON_OFFSET UNITYSDK_OFFSET(0x15146A60)
#define MOLEMOLE_UIWISHLISTPROPERTYITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15146950)
#define MOLEMOLE_UIWISHLISTPROPERTYITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x151469E0)
#define MOLEMOLE_UIWISHLISTPROPERTYITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15146880)
#define MOLEMOLE_UIWISHLISTPROPERTYITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x151468E0)
#define MOLEMOLE_UIWISHLISTPROPERTYITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x15146C90)
#define MOLEMOLE_UIWISHLISTPROPERTYITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15146FE0)
#define MOLEMOLE_UIWISHLISTPROPERTYITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15147040)
#define MOLEMOLE_UIWISHLISTPROPERTYITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x151470D0)
#define MOLEMOLE_UIWISHLISTPROPERTYITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15147160)
#define MOLEMOLE_UIWISHLISTPROPERTYITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x151471F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWishlistPropertyItemWidgetController_TypeDefinitionIndex = 48461;

	class UIWishlistPropertyItemWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_7BEEB90214042948* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTPROPERTYITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTPROPERTYITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTPROPERTYITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTPROPERTYITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTPROPERTYITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::String* GetPropertyIcon(::System::Int32 propertyId)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTPROPERTYITEMWIDGETCONTROLLER_GETPROPERTYICON_OFFSET))(this, propertyId);
		}

		::System::Boolean RefreshView(::System::UInt32 propertyId, ::System::Int32 index, ::System::Int32 slotBasePropertyId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTPROPERTYITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, propertyId, index, slotBasePropertyId);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTPROPERTYITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTPROPERTYITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTPROPERTYITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTPROPERTYITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
