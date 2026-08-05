#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIINLEVELPLAYERMOVECHILDWINDOWCONTROLLER_CONTEXT_GET_DISABLEDEFAULTCAMERAWIDGET_OFFSET UNITYSDK_OFFSET(0x17AC2EC0)
#define MOLEMOLE_UIINLEVELPLAYERMOVECHILDWINDOWCONTROLLER_CONTEXT_GET_ISBATTLE_OFFSET UNITYSDK_OFFSET(0x17AC2EA0)
#define MOLEMOLE_UIINLEVELPLAYERMOVECHILDWINDOWCONTROLLER_CONTEXT_SET_DISABLEDEFAULTCAMERAWIDGET_OFFSET UNITYSDK_OFFSET(0x17AC2ED0)
#define MOLEMOLE_UIINLEVELPLAYERMOVECHILDWINDOWCONTROLLER_CONTEXT_SET_ISBATTLE_OFFSET UNITYSDK_OFFSET(0x17AC2EB0)
#define MOLEMOLE_UIINLEVELPLAYERMOVECHILDWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17AC2EE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPlayerMoveChildWindowController_Context_TypeDefinitionIndex = 43475;

	class UIInLevelPlayerMoveChildWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean _IsBattle_k__BackingField; // 0x28
		::System::Boolean _DisableDefaultCameraWidget_k__BackingField; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERMOVECHILDWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERMOVECHILDWINDOWCONTROLLER_CONTEXT_GET_ISBATTLE_OFFSET))(this);
		}

		::System::Void set_IsBattle(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERMOVECHILDWINDOWCONTROLLER_CONTEXT_SET_ISBATTLE_OFFSET))(this, value);
		}

		::System::Boolean get_DisableDefaultCameraWidget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERMOVECHILDWINDOWCONTROLLER_CONTEXT_GET_DISABLEDEFAULTCAMERAWIDGET_OFFSET))(this);
		}

		::System::Void set_DisableDefaultCameraWidget(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERMOVECHILDWINDOWCONTROLLER_CONTEXT_SET_DISABLEDEFAULTCAMERAWIDGET_OFFSET))(this, value);
		}
	};
}
