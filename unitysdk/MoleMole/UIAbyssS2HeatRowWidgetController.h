#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UIAbyssS2HeatRowWidgetController_PointRootState.h"

class Class_2_208CC9941471731A_576;
class Class_2_724B3079070B9259_1;
class Class_2_E621E51D351EB960;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIYorozuyaS2DifficultyInfoWidgetController; }
namespace MoleMole { class UIYorozuyaS2DifficultyInfoWidgetController_AbyssHeatData; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_GETABYSSPOINT_OFFSET UNITYSDK_OFFSET(0x1643FC10)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_GET_HEADID_OFFSET UNITYSDK_OFFSET(0x1643F6A0)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_ISSELECT_OFFSET UNITYSDK_OFFSET(0x16440860)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x1643FA20)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1643F300)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x164407B0)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1643F410)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1643F390)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1643F050)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_REFRESHUIBYPOINTROOTSTATE_OFFSET UNITYSDK_OFFSET(0x1643F6C0)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_SELECTHEATBUFF_OFFSET UNITYSDK_OFFSET(0x1643FC60)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_SETHEATID_OFFSET UNITYSDK_OFFSET(0x1643F630)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_SETSELECTSTATE_OFFSET UNITYSDK_OFFSET(0x16440320)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_UPDATEUI_OFFSET UNITYSDK_OFFSET(0x164404E0)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x164408B0)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x164408C0)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16440950)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x164409F0)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16440A80)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2HeatRowWidgetController_TypeDefinitionIndex = 43701;

	class UIAbyssS2HeatRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_724B3079070B9259_1* _view; // 0x2F0
		::System::Int32 _index; // 0x2F8
		::MoleMole::UIYorozuyaS2DifficultyInfoWidgetController_AbyssHeatData* _data; // 0x300
		::System::Action_2<::System::Int32, ::System::Boolean>* _toggleCall; // 0x308
		::System::Action* _selectCall; // 0x310
		::Class_2_E621E51D351EB960* _abyssModel; // 0x318
		::System::Boolean _isSelect; // 0x320
		::MoleMole::UIAbyssS2HeatRowWidgetController_PointRootState _pointRootState; // 0x324
		::Class_2_208CC9941471731A_576* _config; // 0x328
		::MoleMole::UIYorozuyaS2DifficultyInfoWidgetController* _parentWidget; // 0x330
		::System::Int32 _heatLimit; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshUIByPointRootState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_REFRESHUIBYPOINTROOTSTATE_OFFSET))(this);
		}

		::System::Int32 GetAbyssPoint()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_GETABYSSPOINT_OFFSET))(this);
		}

		::System::Void SelectHeatBuff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_SELECTHEATBUFF_OFFSET))(this);
		}

		::System::Void SetHeatID(::Class_2_208CC9941471731A_576* heatConfig, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_576*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_SETHEATID_OFFSET))(this, heatConfig, index);
		}

		::System::Void UpdateUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_UPDATEUI_OFFSET))(this);
		}

		::System::Void SetSelectState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_SETSELECTSTATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Boolean IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_ISUNLOCK_OFFSET))(this);
		}

		::System::Boolean IsSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_ISSELECT_OFFSET))(this);
		}

		::System::Int32 get_HeadID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_GET_HEADID_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
