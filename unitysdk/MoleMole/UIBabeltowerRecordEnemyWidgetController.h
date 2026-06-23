#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_5DA2E7556103D5A3_236;
class Class_2_08E43914789BE5F3;
class Class_2_BCA11629035BC7F2_4;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18C84A00)
#define MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18C84A90)
#define MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18C84830)
#define MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18C84890)
#define MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER_REFRESHCARD_OFFSET UNITYSDK_OFFSET(0x18C84B10)
#define MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18C84DA0)
#define MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER__UPDATEBOSSIMAGE_OFFSET UNITYSDK_OFFSET(0x18C84D20)
#define MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18C84E00)
#define MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18C84E90)
#define MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18C84F20)
#define MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18C84FB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerRecordEnemyWidgetController_TypeDefinitionIndex = 87360;

	class UIBabeltowerRecordEnemyWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_BCA11629035BC7F2_4* _view; // 0x2C0
		::Class_2_08E43914789BE5F3* towerModel; // 0x2C8
		::System::Int32 curFloor; // 0x2D0
		::System::Int32 towerid; // 0x2D4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshCard(::System::Int32 towerid, ::System::Int32 floor, ::System::Int32 monsterCardID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER_REFRESHCARD_OFFSET))(this, towerid, floor, monsterCardID);
		}

		::System::Void _UpdateBossImage(::Class_1_5DA2E7556103D5A3_236* cardConfigTemplate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_236*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER__UPDATEBOSSIMAGE_OFFSET))(this, cardConfigTemplate);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDENEMYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
