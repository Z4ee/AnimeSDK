#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_3E1A0459A6647B99_8;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UISUIBIANTEMPLEPREVIEWROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15121D70)
#define MOLEMOLE_UISUIBIANTEMPLEPREVIEWROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15121E00)
#define MOLEMOLE_UISUIBIANTEMPLEPREVIEWROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15121CA0)
#define MOLEMOLE_UISUIBIANTEMPLEPREVIEWROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15121D00)
#define MOLEMOLE_UISUIBIANTEMPLEPREVIEWROWWIDGETCONTROLLER_REFRESHTAG_OFFSET UNITYSDK_OFFSET(0x15122020)
#define MOLEMOLE_UISUIBIANTEMPLEPREVIEWROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x15121E80)
#define MOLEMOLE_UISUIBIANTEMPLEPREVIEWROWWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x15121F90)
#define MOLEMOLE_UISUIBIANTEMPLEPREVIEWROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15122200)
#define MOLEMOLE_UISUIBIANTEMPLEPREVIEWROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15122260)
#define MOLEMOLE_UISUIBIANTEMPLEPREVIEWROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x151222F0)
#define MOLEMOLE_UISUIBIANTEMPLEPREVIEWROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15122380)
#define MOLEMOLE_UISUIBIANTEMPLEPREVIEWROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15122410)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTemplePreviewRowWidgetController_TypeDefinitionIndex = 59795;

	class UISuibianTemplePreviewRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_3E1A0459A6647B99_8* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEPREVIEWROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEPREVIEWROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEPREVIEWROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEPREVIEWROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEPREVIEWROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::System::String* icon, ::System::String* text, ::System::Int32 tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEPREVIEWROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, icon, text, tag);
		}

		::System::Void SetEmpty(::System::Boolean empty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEPREVIEWROWWIDGETCONTROLLER_SETEMPTY_OFFSET))(this, empty);
		}

		::System::Void RefreshTag(::System::Int32 tagType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEPREVIEWROWWIDGETCONTROLLER_REFRESHTAG_OFFSET))(this, tagType);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEPREVIEWROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEPREVIEWROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEPREVIEWROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEPREVIEWROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
