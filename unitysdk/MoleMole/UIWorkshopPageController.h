#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_A2C58D13E488024D;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIWorkshop3DModelController; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define MOLEMOLE_UIWORKSHOPPAGECONTROLLER_BACKTOMAIN_OFFSET UNITYSDK_OFFSET(0x1514B5D0)
#define MOLEMOLE_UIWORKSHOPPAGECONTROLLER_BIND_OFFSET UNITYSDK_OFFSET(0x1514B250)
#define MOLEMOLE_UIWORKSHOPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1514B0E0)
#define MOLEMOLE_UIWORKSHOPPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1514B0F0)
#define MOLEMOLE_UIWORKSHOPPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1514B560)
#define MOLEMOLE_UIWORKSHOPPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1514B180)
#define MOLEMOLE_UIWORKSHOPPAGECONTROLLER_OPENBLACKSMITHWIDGET_OFFSET UNITYSDK_OFFSET(0x1514B750)
#define MOLEMOLE_UIWORKSHOPPAGECONTROLLER_OPENMATERIALTRANSFORMWIDGET_OFFSET UNITYSDK_OFFSET(0x1514B6F0)
#define MOLEMOLE_UIWORKSHOPPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1514BA00)
#define MOLEMOLE_UIWORKSHOPPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1514BA10)
#define MOLEMOLE_UIWORKSHOPPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1514BAA0)
#define MOLEMOLE_UIWORKSHOPPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1514BAB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkshopPageController_TypeDefinitionIndex = 80318;

	class UIWorkshopPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_A2C58D13E488024D* _view; // 0x318
		::MoleMole::UIWorkshop3DModelController* _workshop3DModelController; // 0x320
		::UnityEngine::UI::Extension::UITabButtonGroup* _tabButtonGroup; // 0x328
		::MoleMole::UIWindowController* _curWidget; // 0x330
		::System::Boolean inClick; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void Bind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPPAGECONTROLLER_BIND_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void BackToMain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPPAGECONTROLLER_BACKTOMAIN_OFFSET))(this);
		}

		::System::Void OpenMaterialTransformWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPPAGECONTROLLER_OPENMATERIALTRANSFORMWIDGET_OFFSET))(this);
		}

		::System::Void OpenBlackSmithWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPPAGECONTROLLER_OPENBLACKSMITHWIDGET_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
