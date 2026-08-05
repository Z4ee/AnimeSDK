#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_0C4DABD06F45A7DA;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER_GET_TAGID_OFFSET UNITYSDK_OFFSET(0x17D7A960)
#define MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17D7A5E0)
#define MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17D7A670)
#define MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER_REFRESHLAYER_OFFSET UNITYSDK_OFFSET(0x17D7A880)
#define MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER_SETTAGID_OFFSET UNITYSDK_OFFSET(0x17D7A6F0)
#define MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER_SET_TAGID_OFFSET UNITYSDK_OFFSET(0x17D7A970)
#define MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D7A980)
#define MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17D7A9E0)
#define MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17D7AA70)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreTypeV2WidgetController_TypeDefinitionIndex = 84770;

	class UIVHSStoreTypeV2WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Int32 _tagID_k__BackingField; // 0x2C0
		::Class_2_0C4DABD06F45A7DA* _view; // 0x2C8

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
