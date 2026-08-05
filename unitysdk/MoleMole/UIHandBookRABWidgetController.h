#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_7.h"
#include "unitysdk/MoleMole/UIHandBookRABItemRowWidgetController_RABSectionType.h"
#include "unitysdk/MoleMole/UIHandBookRABWidgetController_BubbleSource.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_208CC9941471731A_62;
class Class_2_2FF5A177B1A2022E;
class Class_2_79F6D62CE30E3F8E_188;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHandBookRABItemRowWidgetController_PanelData; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_COMPAREPANELDATA_OFFSET UNITYSDK_OFFSET(0x17BEFF50)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_GETSECTIONBTNTIPSKEY_OFFSET UNITYSDK_OFFSET(0x17BEEB90)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_GETTRAININGLEVELBTNTIPSKEY_OFFSET UNITYSDK_OFFSET(0x17BEFDB0)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_GET_GOTOACCESSID_OFFSET UNITYSDK_OFFSET(0x17BED830)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_GET_RABMODEL_OFFSET UNITYSDK_OFFSET(0x17BED920)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ISALLSTAGEFINISHED_OFFSET UNITYSDK_OFFSET(0x17BEFC40)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ISRABFEATUREVALID_OFFSET UNITYSDK_OFFSET(0x17BEFB10)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17BEE2D0)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ONGOTOBUTTON_OFFSET UNITYSDK_OFFSET(0x17BF00A0)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x17BEE660)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ONINFOBUTTON_OFFSET UNITYSDK_OFFSET(0x17BF0380)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ONTRAININGCAMPBUBBLEREFRESH_OFFSET UNITYSDK_OFFSET(0x17BEE280)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17BEE610)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17BEE710)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17BED9E0)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17BEDE70)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_REFRESHGOBTNREDDOT_OFFSET UNITYSDK_OFFSET(0x17BEEF50)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_REFRESHGOBTNTIPS_OFFSET UNITYSDK_OFFSET(0x17BEF220)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_REFRESHGOTOBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x17BEE530)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_REFRESHSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x17BEEC20)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_REFRESHSTAGEREWARD_OFFSET UNITYSDK_OFFSET(0x17BEF4A0)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_SHOWPANEL_OFFSET UNITYSDK_OFFSET(0x17BEDEF0)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17BF04E0)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17BF0400)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER__ONUIINIT_B__19_0_OFFSET UNITYSDK_OFFSET(0x17BF07B0)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER__ONUIINIT_B__19_1_OFFSET UNITYSDK_OFFSET(0x17BF07C0)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER__ONUIINIT_B__19_2_OFFSET UNITYSDK_OFFSET(0x17BF07D0)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17BF07E0)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x17BF0870)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17BF0900)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17BF0910)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17BF09A0)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17BF0A30)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookRABWidgetController_TypeDefinitionIndex = 83162;

	class UIHandBookRABWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::Il2CppArray<::MoleMole::UIHandBookRABWidgetController_BubbleSource>** StaticGet_BubbleSources()
		{
			return (::Il2CppArray<::MoleMole::UIHandBookRABWidgetController_BubbleSource>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookRABWidgetController_TypeDefinitionIndex)->GetStaticField(0x490D0);
		}
		static ::Il2CppArray<::MoleMole::UIHandBookRABItemRowWidgetController_PanelData*>** StaticGet_SectionPanelData()
		{
			return (::Il2CppArray<::MoleMole::UIHandBookRABItemRowWidgetController_PanelData*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookRABWidgetController_TypeDefinitionIndex)->GetStaticField(0x490D8);
		}
		// static const ::System::Int32 RABInfoDialogId = 0x9888D7; // 0x0
		// static const ::System::Int32 TrainingLevelLockGroupID = 0x27DE; // 0x0
		// static const ::System::Int32 LayerLockGroupID = 0x26FA; // 0x0
		// static const ::System::Int32 SpecialTrainingLockGroupID = 0x26FB; // 0x0
		// static const ::System::Int32 TrainingLevelAccessID = 0x6F5D; // 0x0
		// static const ::System::Int32 TowerAccessID = 0x6F5E; // 0x0
		// static const ::System::Int32 BossChallengeAccessID = 0x6F5F; // 0x0
		::Class_2_79F6D62CE30E3F8E_188* _view; // 0x2C0
		::System::Action_1<::System::Int32>* _trainingLvBubbleListener; // 0x2C8
		::System::Action_1<::System::Int32>* _goBtnBubbleListener; // 0x2D0
		::System::Collections::Generic::List_1<::System::Action_1<::System::Int32>*>* _bubbleSourceListeners; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Int32 get_GoToAccessID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_GET_GOTOACCESSID_OFFSET))(this);
		}

		static ::Class_2_2FF5A177B1A2022E* get_RabModel()
		{
			return ((::Class_2_2FF5A177B1A2022E*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_GET_RABMODEL_OFFSET))();
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

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ShowPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_SHOWPANEL_OFFSET))(this);
		}

		::System::Void RefreshGoBtnRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_REFRESHGOBTNREDDOT_OFFSET))(this);
		}

		::System::Void RefreshStageInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_REFRESHSTAGEINFO_OFFSET))(this);
		}

		::System::Void RefreshGoBtnTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_REFRESHGOBTNTIPS_OFFSET))(this);
		}

		static ::System::Boolean IsRABFeatureValid(::Enum_3_F80BFD5B986D5503_7 subType)
		{
			return ((::System::Boolean(*)(::Enum_3_F80BFD5B986D5503_7))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ISRABFEATUREVALID_OFFSET))(subType);
		}

		::System::Void RefreshStageReward(::Class_2_208CC9941471731A_62* stageConfig)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_62*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_REFRESHSTAGEREWARD_OFFSET))(this, stageConfig);
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

		::System::Void RefreshGoToButtonText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_REFRESHGOTOBUTTONTEXT_OFFSET))(this);
		}

		::System::Void OnGoToButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ONGOTOBUTTON_OFFSET))(this);
		}

		::System::Void OnInfoButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER_ONINFOBUTTON_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__19_0(::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER__ONUIINIT_B__19_0_OFFSET))(this, _);
		}

		::System::Void _OnUIInit_b__19_1(::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER__ONUIINIT_B__19_1_OFFSET))(this, _);
		}

		::System::Void _OnUIInit_b__19_2(::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER__ONUIINIT_B__19_2_OFFSET))(this, _);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
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
