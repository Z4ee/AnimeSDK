#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_16396D88BA38E0AB_4;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UINAVIGATIONAREADETAILWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x175661A0)
#define MOLEMOLE_UINAVIGATIONAREADETAILWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x175662B0)
#define MOLEMOLE_UINAVIGATIONAREADETAILWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17566230)
#define MOLEMOLE_UINAVIGATIONAREADETAILWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17566140)
#define MOLEMOLE_UINAVIGATIONAREADETAILWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x17566430)
#define MOLEMOLE_UINAVIGATIONAREADETAILWIDGETCONTROLLER_SETPARTNERID_OFFSET UNITYSDK_OFFSET(0x175663E0)
#define MOLEMOLE_UINAVIGATIONAREADETAILWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x175666E0)
#define MOLEMOLE_UINAVIGATIONAREADETAILWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x175666F0)
#define MOLEMOLE_UINAVIGATIONAREADETAILWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17566780)
#define MOLEMOLE_UINAVIGATIONAREADETAILWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17566820)
#define MOLEMOLE_UINAVIGATIONAREADETAILWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x175668B0)

namespace MoleMole
{
	inline static constexpr unsigned int UINavigationAreaDetailWidgetController_TypeDefinitionIndex = 89582;

	class UINavigationAreaDetailWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_16396D88BA38E0AB_4* _view; // 0x2F0
		::System::Int32 _partnerID; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINAVIGATIONAREADETAILWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINAVIGATIONAREADETAILWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINAVIGATIONAREADETAILWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINAVIGATIONAREADETAILWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINAVIGATIONAREADETAILWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetPartnerID(::System::Int32 partnerID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINAVIGATIONAREADETAILWIDGETCONTROLLER_SETPARTNERID_OFFSET))(this, partnerID);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINAVIGATIONAREADETAILWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINAVIGATIONAREADETAILWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINAVIGATIONAREADETAILWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINAVIGATIONAREADETAILWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINAVIGATIONAREADETAILWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
