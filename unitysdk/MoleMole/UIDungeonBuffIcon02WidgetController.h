#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_52173F0AD5B8E490_1;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }

#define MOLEMOLE_UIDUNGEONBUFFICON02WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16D96120)
#define MOLEMOLE_UIDUNGEONBUFFICON02WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16D961B0)
#define MOLEMOLE_UIDUNGEONBUFFICON02WIDGETCONTROLLER_SETIMG_OFFSET UNITYSDK_OFFSET(0x16D96230)
#define MOLEMOLE_UIDUNGEONBUFFICON02WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16D962C0)
#define MOLEMOLE_UIDUNGEONBUFFICON02WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16D96320)
#define MOLEMOLE_UIDUNGEONBUFFICON02WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16D963B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDungeonBuffIcon02WidgetController_TypeDefinitionIndex = 72114;

	class UIDungeonBuffIcon02WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_52173F0AD5B8E490_1* _view; // 0x2C0

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
