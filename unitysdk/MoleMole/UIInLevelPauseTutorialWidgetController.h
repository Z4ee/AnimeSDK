#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_135463D7458ED59A_Class_1_9E89B2D44593C915;
class Class_2_514CF55F8D2B1D8F;
class Class_2_E8F9A0CEDB2C640A;
class Class_2_F5737224A0253470;
class Class_3_5F8DAA47ACDB7251;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIInLevelPauseTutorialWidgetController_TutorialData; }
namespace MoleMole { class UITabBtn03RowAllRoundWidgetController; }
namespace MoleMole { class UIWorkBenchInterKnotNoteTutorialWidgetController; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_BATTLEREDPOINTPOPWINDOWINFOUPDATE_OFFSET UNITYSDK_OFFSET(0x18FE3DF0)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_INITBATTLEPOPUPSORTDATA_OFFSET UNITYSDK_OFFSET(0x18FE2C80)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_INITEXTERNALPOPUPS_OFFSET UNITYSDK_OFFSET(0x18FE2490)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_INITHOLLOWINFO_OFFSET UNITYSDK_OFFSET(0x18FE2FB0)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_INITPOPUPDATA_OFFSET UNITYSDK_OFFSET(0x18FE1040)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_INITREDPOINTDATAS_OFFSET UNITYSDK_OFFSET(0x18FE3710)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_INITTACTICSPOPUPSORTDATA_OFFSET UNITYSDK_OFFSET(0x18FE27D0)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_INITTUTORIAL_OFFSET UNITYSDK_OFFSET(0x18FE11F0)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_INITWIDGET_OFFSET UNITYSDK_OFFSET(0x18FE0C30)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18FE1AC0)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x18FE1BE0)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18FE1B50)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18FE0BC0)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18FE0F50)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_SELECTEDPOPUP_OFFSET UNITYSDK_OFFSET(0x18FE1C40)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18FE4110)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18FE3FB0)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER__INITBATTLEPOPUPSORTDATA_B__14_0_OFFSET UNITYSDK_OFFSET(0x18FE4120)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18FE4250)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x18FE42E0)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18FE4370)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18FE4400)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18FE4490)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseTutorialWidgetController_TypeDefinitionIndex = 90231;

	class UIInLevelPauseTutorialWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Int32* StaticGet_EMPTY_POPUP_GROUP_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseTutorialWidgetController_TypeDefinitionIndex)->GetStaticField(0x101B0);
		}
		::Class_2_E8F9A0CEDB2C640A* _view; // 0x2C0
		::System::Collections::Generic::List_1<::System::Int32>* m_externalPopupWindowGroupIDs; // 0x2C8
		::System::Boolean _isInBattle; // 0x2D0
		::MoleMole::UIWorkBenchInterKnotNoteTutorialWidgetController* _tutorialWidget; // 0x2D8
		::System::Collections::Generic::List_1<::MoleMole::UIInLevelPauseTutorialWidgetController_TutorialData*>* _popUpGroupDatas; // 0x2E0
		::Class_1_135463D7458ED59A_Class_1_9E89B2D44593C915* _emptyPopUpGroupData; // 0x2E8
		::System::Nullable_1<::System::Boolean> _isEmpty; // 0x2F0
		::System::Collections::Generic::List_1<::MoleMole::UITabBtn03RowAllRoundWidgetController*>* _widgetCollect; // 0x2F8
		::Class_2_F5737224A0253470* _uiHollowModel; // 0x300
		::Class_2_514CF55F8D2B1D8F* _uiBattleInfoModel; // 0x308
		::Class_3_5F8DAA47ACDB7251* hollowGameContext; // 0x310
		::System::Collections::Generic::HashSet_1<::System::Int32>* redPointData; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void InitPopUpData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_INITPOPUPDATA_OFFSET))(this);
		}

		::System::Void InitRedPointDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_INITREDPOINTDATAS_OFFSET))(this);
		}

		::System::Void InitExternalPopups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_INITEXTERNALPOPUPS_OFFSET))(this);
		}

		::System::Void InitHollowInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_INITHOLLOWINFO_OFFSET))(this);
		}

		::System::Void InitWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_INITWIDGET_OFFSET))(this);
		}

		::System::Void InitTacticsPopupSortData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_INITTACTICSPOPUPSORTDATA_OFFSET))(this);
		}

		::System::Void InitBattlePopupSortData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_INITBATTLEPOPUPSORTDATA_OFFSET))(this);
		}

		::System::Void InitTutorial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_INITTUTORIAL_OFFSET))(this);
		}

		::System::Void SelectedPopUp(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_SELECTEDPOPUP_OFFSET))(this, index);
		}

		::System::Void BattleRedPointPopWindowInfoUpdate(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_BATTLEREDPOINTPOPWINDOWINFOUPDATE_OFFSET))(this, index);
		}

		::System::Int32 _InitBattlePopupSortData_b__14_0(::MoleMole::UIInLevelPauseTutorialWidgetController_TutorialData* a, ::MoleMole::UIInLevelPauseTutorialWidgetController_TutorialData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIInLevelPauseTutorialWidgetController_TutorialData*, ::MoleMole::UIInLevelPauseTutorialWidgetController_TutorialData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER__INITBATTLEPOPUPSORTDATA_B__14_0_OFFSET))(this, a, b);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
