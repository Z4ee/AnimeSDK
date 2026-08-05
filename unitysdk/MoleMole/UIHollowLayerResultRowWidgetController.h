#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/System/Nullable_1.h"

class Class_2_D61BA7F803900930;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1AE43C70)
#define MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1AE43D00)
#define MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1AE43BA0)
#define MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1AE43C00)
#define MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER_REFRESHWIDGET_OFFSET UNITYSDK_OFFSET(0x1AE43D80)
#define MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE44070)
#define MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1AE440D0)
#define MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1AE44160)
#define MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1AE441F0)
#define MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1AE44280)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowLayerResultRowWidgetController_TypeDefinitionIndex = 73916;

	class UIHollowLayerResultRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_D61BA7F803900930* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshWidget(::System::String* title, ::System::String* desc, ::System::Nullable_1<::System::UInt32> time)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER_REFRESHWIDGET_OFFSET))(this, title, desc, time);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
