#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_0C4DABD06F45A7DA_1;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER_GET_TAGID_OFFSET UNITYSDK_OFFSET(0x156D9710)
#define MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x156D93A0)
#define MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x156D9430)
#define MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER_REFRESHLAYER_OFFSET UNITYSDK_OFFSET(0x156D9630)
#define MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER_SETTAGID_OFFSET UNITYSDK_OFFSET(0x156D94B0)
#define MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER_SET_TAGID_OFFSET UNITYSDK_OFFSET(0x156D9720)
#define MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x156D9730)
#define MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x156D9790)
#define MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x156D9820)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreTypeV2WidgetController_TypeDefinitionIndex = 54255;

	class UIVHSStoreTypeV2WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Int32 _tagID_k__BackingField; // 0x2C0
		::Class_2_0C4DABD06F45A7DA_1* _view; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetTagID(::System::Int32 tagid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER_SETTAGID_OFFSET))(this, tagid);
		}

		::System::Void RefreshLayer(::System::Int32 trendingLayer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER_REFRESHLAYER_OFFSET))(this, trendingLayer);
		}

		::System::Int32 get_tagID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER_GET_TAGID_OFFSET))(this);
		}

		::System::Void set_tagID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER_SET_TAGID_OFFSET))(this, value);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
