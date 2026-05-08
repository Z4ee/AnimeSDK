#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UIYorozuyaDifficultyInfoWidgetControllerContext_NestType.h"
#include "unitysdk/MoleMole/UIYorozuyaDifficultyListWidgetWidgetController_PointRootState.h"

class Class_2_208CC9941471731A_448;
class Class_2_724B3079070B9259_6;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIYorozuyaDifficultyInfoWidgetController; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xEBD40C0)
#define MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xEBD3800)
#define MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xEBD3910)
#define MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xEBD3890)
#define MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xEBD35B0)
#define MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_REFRESHUIBYPOINTROOTSTATE_OFFSET UNITYSDK_OFFSET(0xEBD3AC0)
#define MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_SELECTHEATBUFF_OFFSET UNITYSDK_OFFSET(0xEBD42B0)
#define MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_SETHEATID_OFFSET UNITYSDK_OFFSET(0xEBD3A50)
#define MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_SETSELECTSTATE_OFFSET UNITYSDK_OFFSET(0xEBD48F0)
#define MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_UPDATEUI_OFFSET UNITYSDK_OFFSET(0xEBD4A50)
#define MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xEBD4DA0)
#define MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xEBD4DB0)
#define MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xEBD4E40)
#define MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xEBD4EE0)
#define MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xEBD4F70)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaDifficultyListWidgetWidgetController_TypeDefinitionIndex = 57913;

	class UIYorozuyaDifficultyListWidgetWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_724B3079070B9259_6* _view; // 0x2E8
		::System::Int32 index; // 0x2F0
		::System::Action_2<::System::Int32, ::System::Boolean>* toggleCall; // 0x2F8
		::System::Action* selectCall; // 0x300
		::System::Boolean isSelect; // 0x308
		::MoleMole::UIYorozuyaDifficultyInfoWidgetControllerContext_NestType m_nestType; // 0x30C
		::MoleMole::UIYorozuyaDifficultyListWidgetWidgetController_PointRootState m_pointRootState; // 0x310
		::Class_2_208CC9941471731A_448* _heatConfig; // 0x318
		::MoleMole::UIYorozuyaDifficultyInfoWidgetController* _parentWidget; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshUIByPointRootState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_REFRESHUIBYPOINTROOTSTATE_OFFSET))(this);
		}

		::System::Void SelectHeatBuff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_SELECTHEATBUFF_OFFSET))(this);
		}

		::System::Void SetHeatID(::Class_2_208CC9941471731A_448* _heatConfig, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_448*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_SETHEATID_OFFSET))(this, _heatConfig, index);
		}

		::System::Void UpdateUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_UPDATEUI_OFFSET))(this);
		}

		::System::Void SetSelectState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_SETSELECTSTATE_OFFSET))(this);
		}

		::System::Boolean IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER_ISUNLOCK_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTYLISTWIDGETWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
