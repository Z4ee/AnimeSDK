#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_79F6D62CE30E3F8E_70;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralBtn03WidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x196FB6A0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x196FB730)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x196FB550)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x196FB630)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_REFRESHCARD_OFFSET UNITYSDK_OFFSET(0x196FB820)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x196FC410)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_SETNEW_OFFSET UNITYSDK_OFFSET(0x196FB7B0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_SWITCHINACTION_OFFSET UNITYSDK_OFFSET(0x196FBF10)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_SWITCHOUTACTION_OFFSET UNITYSDK_OFFSET(0x196FC190)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x196FC460)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x196FC4C0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x196FC550)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x196FC5E0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x196FC670)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerFightingBuffItemWidgetController_TypeDefinitionIndex = 59601;

	class UIBabeltowerFightingBuffItemWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_70* _view; // 0x2C0
		::MoleMole::UIGeneralBtn03WidgetController* btn; // 0x2C8
		::System::Boolean isSwitching; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetNew(::System::Boolean isNew)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_SETNEW_OFFSET))(this, isNew);
		}

		::System::Void RefreshCard(::System::Int32 towerid, ::System::UInt32 floorIndex, ::System::Int32 cardid, ::System::Int32 cardSet, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_REFRESHCARD_OFFSET))(this, towerid, floorIndex, cardid, cardSet, callback);
		}

		::System::Void SwitchInAction(::System::Action* onSwitch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_SWITCHINACTION_OFFSET))(this, onSwitch);
		}

		::System::Void SwitchOutAction(::System::Action* onSwitch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_SWITCHOUTACTION_OFFSET))(this, onSwitch);
		}

		::System::Void SetEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER_SETEMPTY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
