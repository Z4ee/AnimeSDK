#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UIAbyssS2HeatRowWidgetController_PointRootState.h"

class Class_2_208CC9941471731A_287;
class Class_2_724B3079070B9259_2;
class Class_2_AB2EF02AB0EB9012;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIYorozuyaS2DifficultyInfoWidgetController; }
namespace MoleMole { class UIYorozuyaS2DifficultyInfoWidgetController_AbyssHeatData; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_GETABYSSPOINT_OFFSET UNITYSDK_OFFSET(0x180B2A80)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_GET_HEADID_OFFSET UNITYSDK_OFFSET(0x180B2510)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_ISSELECT_OFFSET UNITYSDK_OFFSET(0x180B36D0)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x180B2890)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x180B2170)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x180B3620)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x180B2280)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x180B2200)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x180B1EC0)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_REFRESHUIBYPOINTROOTSTATE_OFFSET UNITYSDK_OFFSET(0x180B2530)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_SELECTHEATBUFF_OFFSET UNITYSDK_OFFSET(0x180B2AD0)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_SETHEATID_OFFSET UNITYSDK_OFFSET(0x180B24A0)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_SETSELECTSTATE_OFFSET UNITYSDK_OFFSET(0x180B3190)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_UPDATEUI_OFFSET UNITYSDK_OFFSET(0x180B3350)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x180B3720)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x180B3730)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x180B37C0)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x180B3860)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x180B38F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2HeatRowWidgetController_TypeDefinitionIndex = 51288;

	class UIAbyssS2HeatRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_724B3079070B9259_2* _view; // 0x2F0
		::System::Int32 _index; // 0x2F8
		::MoleMole::UIYorozuyaS2DifficultyInfoWidgetController_AbyssHeatData* _data; // 0x300
		::System::Action_2<::System::Int32, ::System::Boolean>* _toggleCall; // 0x308
		::System::Action* _selectCall; // 0x310
		::Class_2_AB2EF02AB0EB9012* _abyssModel; // 0x318
		::System::Boolean _isSelect; // 0x320
		::MoleMole::UIAbyssS2HeatRowWidgetController_PointRootState _pointRootState; // 0x324
		::Class_2_208CC9941471731A_287* _config; // 0x328
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

		::System::Void SetHeatID(::Class_2_208CC9941471731A_287* heatConfig, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_287*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_SETHEATID_OFFSET))(this, heatConfig, index);
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
