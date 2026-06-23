#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_9C7B017C7858A67C_Class_1_9E89B2D44593C915;
class Class_2_E8F9A0CEDB2C640A;
class Class_2_EEA82AB6BB42A902;
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

#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_BATTLEREDPOINTPOPWINDOWINFOUPDATE_OFFSET UNITYSDK_OFFSET(0x16A1B350)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_INITBATTLEPOPUPSORTDATA_OFFSET UNITYSDK_OFFSET(0x16A1A1C0)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_INITEXTERNALPOPUPS_OFFSET UNITYSDK_OFFSET(0x16A199D0)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_INITHOLLOWINFO_OFFSET UNITYSDK_OFFSET(0x16A1A4F0)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_INITPOPUPDATA_OFFSET UNITYSDK_OFFSET(0x16A185B0)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_INITREDPOINTDATAS_OFFSET UNITYSDK_OFFSET(0x16A1AC50)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_INITTACTICSPOPUPSORTDATA_OFFSET UNITYSDK_OFFSET(0x16A19D10)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_INITTUTORIAL_OFFSET UNITYSDK_OFFSET(0x16A18760)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_INITWIDGET_OFFSET UNITYSDK_OFFSET(0x16A181C0)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16A19030)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x16A19150)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16A190C0)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16A18150)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16A184C0)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_SELECTEDPOPUP_OFFSET UNITYSDK_OFFSET(0x16A191B0)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A1B670)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16A1B510)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER__INITBATTLEPOPUPSORTDATA_B__14_0_OFFSET UNITYSDK_OFFSET(0x16A1B680)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16A1B7C0)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x16A1B850)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16A1B8E0)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16A1B970)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16A1BA00)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseTutorialWidgetController_TypeDefinitionIndex = 63167;

	class UIInLevelPauseTutorialWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Int32* StaticGet_EMPTY_POPUP_GROUP_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseTutorialWidgetController_TypeDefinitionIndex)->GetStaticField(0xEE30);
		}
		::Class_2_E8F9A0CEDB2C640A* _view; // 0x2C0
		::System::Collections::Generic::List_1<::System::Int32>* m_externalPopupWindowGroupIDs; // 0x2C8
		::System::Boolean _isInBattle; // 0x2D0
		::MoleMole::UIWorkBenchInterKnotNoteTutorialWidgetController* _tutorialWidget; // 0x2D8
		::System::Collections::Generic::List_1<::MoleMole::UIInLevelPauseTutorialWidgetController_TutorialData*>* _popUpGroupDatas; // 0x2E0
		::Class_1_9C7B017C7858A67C_Class_1_9E89B2D44593C915* _emptyPopUpGroupData; // 0x2E8
		::System::Nullable_1<::System::Boolean> _isEmpty; // 0x2F0
		::System::Collections::Generic::List_1<::MoleMole::UITabBtn03RowAllRoundWidgetController*>* _widgetCollect; // 0x2F8
		::Class_2_F5737224A0253470* _uiHollowModel; // 0x300
		::Class_2_EEA82AB6BB42A902* _uiBattleInfoModel; // 0x308
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
