#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_190E3717882702BE_1.h"
#include "unitysdk/Enum_3_F3B35B60B7BAFCAF.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_D9ECFDE81FE491A6.h"

class Class_2_61D4C9C3A09F6B77;
namespace MoleMole { class UIBallGameProgressRowWidgetController_FillViewData; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_CONVERTWAVETYPE_OFFSET UNITYSDK_OFFSET(0x19569C90)
#define MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19569570)
#define MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19569600)
#define MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19569410)
#define MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19569470)
#define MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19569680)
#define MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19569CF0)
#define MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19569DD0)
#define MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19569E60)
#define MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19569EF0)
#define MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19569F80)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameProgressRowWidgetController_TypeDefinitionIndex = 48063;

	class UIBallGameProgressRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_61D4C9C3A09F6B77* _view; // 0x2C0
		::System::Single TotalLength; // 0x2C8
		::System::Collections::Generic::List_1<::MoleMole::UIBallGameProgressRowWidgetController_FillViewData*>* ViewDatas; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::Struct_2_D9ECFDE81FE491A6 wave)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_D9ECFDE81FE491A6))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, wave);
		}

		::Enum_3_F3B35B60B7BAFCAF ConvertWaveType(::Enum_3_190E3717882702BE_1 type)
		{
			return ((::Enum_3_F3B35B60B7BAFCAF(*)(::PVOID, ::Enum_3_190E3717882702BE_1))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_CONVERTWAVETYPE_OFFSET))(this, type);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
