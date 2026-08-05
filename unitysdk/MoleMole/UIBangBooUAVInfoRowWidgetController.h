#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_3EE49F58BE5D45A5_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIBANGBOOUAVINFOROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1929B140)
#define MOLEMOLE_UIBANGBOOUAVINFOROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1929B1D0)
#define MOLEMOLE_UIBANGBOOUAVINFOROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1929B070)
#define MOLEMOLE_UIBANGBOOUAVINFOROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1929B0D0)
#define MOLEMOLE_UIBANGBOOUAVINFOROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1929B250)
#define MOLEMOLE_UIBANGBOOUAVINFOROWWIDGETCONTROLLER_UPDATEICON_OFFSET UNITYSDK_OFFSET(0x1929B4C0)
#define MOLEMOLE_UIBANGBOOUAVINFOROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1929B550)
#define MOLEMOLE_UIBANGBOOUAVINFOROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1929B5B0)
#define MOLEMOLE_UIBANGBOOUAVINFOROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1929B640)
#define MOLEMOLE_UIBANGBOOUAVINFOROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1929B6D0)
#define MOLEMOLE_UIBANGBOOUAVINFOROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1929B760)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangBooUAVInfoRowWidgetController_TypeDefinitionIndex = 82925;

	class UIBangBooUAVInfoRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_3EE49F58BE5D45A5_1* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVINFOROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVINFOROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVINFOROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVINFOROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVINFOROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Int32 questid, ::System::Boolean finish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVINFOROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, questid, finish);
		}

		::System::Void UpdateIcon(::Foundation::AssetPath iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVINFOROWWIDGETCONTROLLER_UPDATEICON_OFFSET))(this, iconPath);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVINFOROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVINFOROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVINFOROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVINFOROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
