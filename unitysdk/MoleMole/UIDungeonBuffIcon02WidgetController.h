#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_52173F0AD5B8E490;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }

#define MOLEMOLE_UIDUNGEONBUFFICON02WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15A41F00)
#define MOLEMOLE_UIDUNGEONBUFFICON02WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15A41F90)
#define MOLEMOLE_UIDUNGEONBUFFICON02WIDGETCONTROLLER_SETIMG_OFFSET UNITYSDK_OFFSET(0x15A42010)
#define MOLEMOLE_UIDUNGEONBUFFICON02WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15A420A0)
#define MOLEMOLE_UIDUNGEONBUFFICON02WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15A42100)
#define MOLEMOLE_UIDUNGEONBUFFICON02WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15A42190)

namespace MoleMole
{
	inline static constexpr unsigned int UIDungeonBuffIcon02WidgetController_TypeDefinitionIndex = 49607;

	class UIDungeonBuffIcon02WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_52173F0AD5B8E490* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUNGEONBUFFICON02WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUNGEONBUFFICON02WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUNGEONBUFFICON02WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetImg(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUNGEONBUFFICON02WIDGETCONTROLLER_SETIMG_OFFSET))(this, path);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUNGEONBUFFICON02WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUNGEONBUFFICON02WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
