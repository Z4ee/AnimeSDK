#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_2.h"
#include "unitysdk/MoleMole/UIHandBookRABItemRowWidgetController_RABSectionType.h"
#include "unitysdk/MoleMole/UIHandBookRABWidgetController_BubbleSource.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_208CC9941471731A_155;
class Class_2_79F6D62CE30E3F8E_173;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHandBookRABItemRowWidgetController_PanelData; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_COMPAREPANELDATA_OFFSET UNITYSDK_OFFSET(0x17803C90)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_GETAVAILABLEGACHAPOOLID_OFFSET UNITYSDK_OFFSET(0x17803190)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_GETSECTIONBTNTIPSKEY_OFFSET UNITYSDK_OFFSET(0x17802750)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_GETTRAININGLEVELBTNTIPSKEY_OFFSET UNITYSDK_OFFSET(0x17803AF0)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ISALLSTAGEFINISHED_OFFSET UNITYSDK_OFFSET(0x17803980)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ISRABFEATUREVALID_OFFSET UNITYSDK_OFFSET(0x17803850)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x178020E0)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ONGOTOBUTTON_OFFSET UNITYSDK_OFFSET(0x17803DE0)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ONINFOBUTTON_OFFSET UNITYSDK_OFFSET(0x17803FB0)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ONTRAININGCAMPBUBBLEREFRESH_OFFSET UNITYSDK_OFFSET(0x17802090)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17802360)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x178023B0)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17801820)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17801BB0)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_REFRESHGOBTNTIPS_OFFSET UNITYSDK_OFFSET(0x178035D0)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_REFRESHSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x178027E0)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_REFRESHSTAGEREWARD_OFFSET UNITYSDK_OFFSET(0x17802B40)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_SHOWPANEL_OFFSET UNITYSDK_OFFSET(0x17801C30)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17804110)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17804030)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER__ONUIINIT_B__14_0_OFFSET UNITYSDK_OFFSET(0x178043E0)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER__ONUIINIT_B__14_1_OFFSET UNITYSDK_OFFSET(0x178043F0)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17804400)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17804490)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x178044A0)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17804530)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x178045C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookRABWidgetController_TypeDefinitionIndex = 81060;

	class UIHandBookRABWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::Il2CppArray<::MoleMole::UIHandBookRABWidgetController_BubbleSource>** StaticGet_BubbleSources()
		{
			return (::Il2CppArray<::MoleMole::UIHandBookRABWidgetController_BubbleSource>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookRABWidgetController_TypeDefinitionIndex)->GetStaticField(0x45190);
		}
		static ::Il2CppArray<::MoleMole::UIHandBookRABItemRowWidgetController_PanelData*>** StaticGet_SectionPanelData()
		{
			return (::Il2CppArray<::MoleMole::UIHandBookRABItemRowWidgetController_PanelData*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookRABWidgetController_TypeDefinitionIndex)->GetStaticField(0x45198);
		}
		// static const ::System::Int32 RABInfoDialogId = 0x9888D7; // 0x0
		// static const ::System::Int32 TrainingLevelLockGroupID = 0x26D8; // 0x0
		// static const ::System::Int32 LayerLockGroupID = 0x26D4; // 0x0
		// static const ::System::Int32 SpecialTrainingLockGroupID = 0x26D5; // 0x0
		// static const ::System::Int32 ManufactureLockGroupID = 0x26D6; // 0x0
		// static const ::System::Int32 TrainingLevelAccessID = 0x6F5D; // 0x0
		// static const ::System::Int32 TowerAccessID = 0x6F5E; // 0x0
		// static const ::System::Int32 BossChallengeAccessID = 0x6F5F; // 0x0
		::Class_2_79F6D62CE30E3F8E_173* _view; // 0x2C0
		::System::Action_1<::System::Int32>* _trainingLvBubbleListener; // 0x2C8
		::System::Collections::Generic::List_1<::System::Action_1<::System::Int32>*>* _bubbleSourceListeners; // 0x2D0
		::System::Int32 _gachaPoolId; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnTrainingCampBubbleRefresh(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ONTRAININGCAMPBUBBLEREFRESH_OFFSET))(this, _);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ShowPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_SHOWPANEL_OFFSET))(this);
		}

		::System::Void RefreshStageInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_REFRESHSTAGEINFO_OFFSET))(this);
		}

		::System::Void RefreshGoBtnTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_REFRESHGOBTNTIPS_OFFSET))(this);
		}

		static ::System::Boolean IsRABFeatureValid(::Enum_3_F80BFD5B986D5503_2 subType)
		{
			return ((::System::Boolean(*)(::Enum_3_F80BFD5B986D5503_2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ISRABFEATUREVALID_OFFSET))(subType);
		}

		static ::System::Int32 GetAvailableGachaPoolId()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_GETAVAILABLEGACHAPOOLID_OFFSET))();
		}

		::System::Void RefreshStageReward(::Class_2_208CC9941471731A_155* stageConfig)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_155*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_REFRESHSTAGEREWARD_OFFSET))(this, stageConfig);
		}

		::System::Boolean IsAllStageFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ISALLSTAGEFINISHED_OFFSET))(this);
		}

		static ::System::String* GetSectionBtnTipsKey(::MoleMole::UIHandBookRABItemRowWidgetController_RABSectionType sectionType)
		{
			return ((::System::String*(*)(::MoleMole::UIHandBookRABItemRowWidgetController_RABSectionType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_GETSECTIONBTNTIPSKEY_OFFSET))(sectionType);
		}

		static ::System::String* GetTrainingLevelBtnTipsKey()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_GETTRAININGLEVELBTNTIPSKEY_OFFSET))();
		}

		static ::System::Int32 ComparePanelData(::MoleMole::UIHandBookRABItemRowWidgetController_PanelData* a, ::MoleMole::UIHandBookRABItemRowWidgetController_PanelData* b)
		{
			return ((::System::Int32(*)(::MoleMole::UIHandBookRABItemRowWidgetController_PanelData*, ::MoleMole::UIHandBookRABItemRowWidgetController_PanelData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_COMPAREPANELDATA_OFFSET))(a, b);
		}

		::System::Void OnGoToButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ONGOTOBUTTON_OFFSET))(this);
		}

		::System::Void OnInfoButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ONINFOBUTTON_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__14_0(::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER__ONUIINIT_B__14_0_OFFSET))(this, _);
		}

		::System::Void _OnUIInit_b__14_1(::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER__ONUIINIT_B__14_1_OFFSET))(this, _);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
