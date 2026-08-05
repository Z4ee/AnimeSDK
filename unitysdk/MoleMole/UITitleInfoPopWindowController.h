#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_5773E3AF07ABF14E.h"

class Class_1_466597060C7011BF;
class Class_2_7BEEB90214042948_6;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UITITLEINFOPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15A61600)
#define MOLEMOLE_UITITLEINFOPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15A62100)
#define MOLEMOLE_UITITLEINFOPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15A62190)
#define MOLEMOLE_UITITLEINFOPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15A61610)
#define MOLEMOLE_UITITLEINFOPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15A61820)
#define MOLEMOLE_UITITLEINFOPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15A62280)
#define MOLEMOLE_UITITLEINFOPOPWINDOWCONTROLLER__ONUIOPEN_B__5_0_OFFSET UNITYSDK_OFFSET(0x15A62290)
#define MOLEMOLE_UITITLEINFOPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15A622B0)
#define MOLEMOLE_UITITLEINFOPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15A62340)
#define MOLEMOLE_UITITLEINFOPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15A62350)
#define MOLEMOLE_UITITLEINFOPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15A62360)

namespace MoleMole
{
	inline static constexpr unsigned int UITitleInfoPopWindowController_TypeDefinitionIndex = 82079;

	class UITitleInfoPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_7BEEB90214042948_6* _view; // 0x318
		::Struct_2_5773E3AF07ABF14E _titleInfo; // 0x320
		::Foundation::AssetRequestHandle _uiMatHandler; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITITLEINFOPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITITLEINFOPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITITLEINFOPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITITLEINFOPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITITLEINFOPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITITLEINFOPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean _OnUIOpen_b__5_0(::Class_1_466597060C7011BF* title)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_466597060C7011BF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITITLEINFOPOPWINDOWCONTROLLER__ONUIOPEN_B__5_0_OFFSET))(this, title);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITITLEINFOPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITITLEINFOPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITITLEINFOPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITITLEINFOPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
