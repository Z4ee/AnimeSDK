#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_6649B9A2EDB08512;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFashionStoreGameKeyOnTrailWidgetController; }
namespace MoleMole { class UIFashionStoreMiniGameRowWidgetController_Context; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFASHIONSTOREMINIGAMEROWWIDGETCONTROLLER_GETBEAT_OFFSET UNITYSDK_OFFSET(0x15A559A0)
#define MOLEMOLE_UIFASHIONSTOREMINIGAMEROWWIDGETCONTROLLER_GET_ALLVALIDBEATS_OFFSET UNITYSDK_OFFSET(0x15A55190)
#define MOLEMOLE_UIFASHIONSTOREMINIGAMEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15A55B90)
#define MOLEMOLE_UIFASHIONSTOREMINIGAMEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15A55C20)
#define MOLEMOLE_UIFASHIONSTOREMINIGAMEROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15A55A50)
#define MOLEMOLE_UIFASHIONSTOREMINIGAMEROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15A55AB0)
#define MOLEMOLE_UIFASHIONSTOREMINIGAMEROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x15A551A0)
#define MOLEMOLE_UIFASHIONSTOREMINIGAMEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15A55CA0)
#define MOLEMOLE_UIFASHIONSTOREMINIGAMEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15A55D00)
#define MOLEMOLE_UIFASHIONSTOREMINIGAMEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15A55D90)
#define MOLEMOLE_UIFASHIONSTOREMINIGAMEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15A55E20)
#define MOLEMOLE_UIFASHIONSTOREMINIGAMEROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15A55EB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStoreMiniGameRowWidgetController_TypeDefinitionIndex = 58454;

	class UIFashionStoreMiniGameRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 beatPerRow = 0x4; // 0x0
		::Class_2_6649B9A2EDB08512* _view; // 0x2C0
		::System::Collections::Generic::List_1<::MoleMole::UIFashionStoreGameKeyOnTrailWidgetController*>* m_validBeats; // 0x2C8
		::MoleMole::UIFashionStoreMiniGameRowWidgetController_Context* m_ctx; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMINIGAMEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIFashionStoreGameKeyOnTrailWidgetController*>* get_AllValidBeats()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIFashionStoreGameKeyOnTrailWidgetController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMINIGAMEROWWIDGETCONTROLLER_GET_ALLVALIDBEATS_OFFSET))(this);
		}

		::System::Void RefreshView(::MoleMole::UIFashionStoreMiniGameRowWidgetController_Context* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIFashionStoreMiniGameRowWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMINIGAMEROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, ctx);
		}

		::MoleMole::UIFashionStoreGameKeyOnTrailWidgetController* GetBeat(::System::Int32 beatIdx)
		{
			return ((::MoleMole::UIFashionStoreGameKeyOnTrailWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMINIGAMEROWWIDGETCONTROLLER_GETBEAT_OFFSET))(this, beatIdx);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMINIGAMEROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMINIGAMEROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMINIGAMEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMINIGAMEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMINIGAMEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMINIGAMEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMINIGAMEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMINIGAMEROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
