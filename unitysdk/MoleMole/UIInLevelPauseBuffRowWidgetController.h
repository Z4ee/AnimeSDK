#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_1C93660C39236995;
class Class_2_7A192581FF7290CF;
class Class_2_C3C162BA7C6E9D7E;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18309BD0)
#define MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18309C60)
#define MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18309B00)
#define MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18309B60)
#define MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0x18309CE0)
#define MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER_SETBUFFSTATE_OFFSET UNITYSDK_OFFSET(0x1830A650)
#define MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1830A850)
#define MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1830A930)
#define MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1830A9C0)
#define MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1830AA50)
#define MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1830AAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseBuffRowWidgetController_TypeDefinitionIndex = 69078;

	class UIInLevelPauseBuffRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_7A192581FF7290CF* _view; // 0x2C0
		::System::Collections::Generic::List_1<::Class_2_1C93660C39236995*>* modifiers; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshInfo(::System::UInt32 enittyId, ::System::Int32 buffId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER_REFRESHINFO_OFFSET))(this, enittyId, buffId);
		}

		::System::Void SetBuffState(::Class_2_C3C162BA7C6E9D7E* buffMeta)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_C3C162BA7C6E9D7E*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER_SETBUFFSTATE_OFFSET))(this, buffMeta);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
