#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/Enum_3_DBF2701137F18AA6.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_208CC9941471731A_1157;
class Class_2_8139880E3DA2C2D0;
class Class_2_82E7DB6BA9499BE4;
namespace MoleMole { class UIAbyssArpeggioLevelWidgetController; }
namespace MoleMole { class UIAbyssArpeggioRowWidgetController; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFadeConfig; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_GETOVERRIDEFADEINANIM_OFFSET UNITYSDK_OFFSET(0x191CC1B0)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x191CB260)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x191CB250)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_GOTOMAINCITY_OFFSET UNITYSDK_OFFSET(0x191CD060)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_INITTOKEN_OFFSET UNITYSDK_OFFSET(0x191CBE90)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONARPEGGIOROWCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x191CCAF0)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x191CB270)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONDUNGEONSWEEP_OFFSET UNITYSDK_OFFSET(0x191CC910)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONINFOBTNCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x191CC250)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONLEVELCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x191CCCE0)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x191CC160)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONTALENTCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x191CC470)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONTOTALREWARDCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x191CC660)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x191CD180)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x191CB300)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x191CB990)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_PLAYBMFADEOUT_OFFSET UNITYSDK_OFFSET(0x191CC590)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x191CD1F0)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER__ONTALENTCLICKHANDLE_B__20_0_OFFSET UNITYSDK_OFFSET(0x191CD200)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___BASE_GETOVERRIDEFADEINANIM_OFFSET UNITYSDK_OFFSET(0x191CD3C0)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x191CD3D0)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x191CD460)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x191CD470)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x191CD480)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x191CD490)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssArpeggioPageController_TypeDefinitionIndex = 41614;

	class UIAbyssArpeggioPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_82E7DB6BA9499BE4* _view; // 0x318
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1157*>* _chapterList; // 0x320
		::MoleMole::UIAbyssArpeggioLevelWidgetController* _levelWidgetCtrl; // 0x328
		::Class_2_208CC9941471731A_1157* _selectChapterCfg; // 0x330
		::MoleMole::UIActivityCompWeekRewardBtnWidgetController* _bigRewardBtn; // 0x338
		::MoleMole::UIActivityCompWeekRewardBtnWidgetController* _timeLimitRewardBtn; // 0x340
		::System::Collections::Generic::List_1<::MoleMole::UIAbyssArpeggioRowWidgetController*>* _rowList; // 0x348
		::MoleMole::UIAbyssArpeggioRowWidgetController* _selectArpeggioRow; // 0x350
		::Class_2_8139880E3DA2C2D0* _arpeggioModel; // 0x358

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void InitToken()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_INITTOKEN_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::String* GetOverrideFadeInAnim(::MoleMole::UIFadeConfig* fadeData, ::Enum_3_DBF2701137F18AA6 fromCtrl)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::UIFadeConfig*, ::Enum_3_DBF2701137F18AA6))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_GETOVERRIDEFADEINANIM_OFFSET))(this, fadeData, fromCtrl);
		}

		::System::Void OnInfoBtnClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONINFOBTNCLICKHANDLE_OFFSET))(this);
		}

		::System::Void OnTalentClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONTALENTCLICKHANDLE_OFFSET))(this);
		}

		::System::Void OnTotalRewardClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONTOTALREWARDCLICKHANDLE_OFFSET))(this);
		}

		::System::Single PlayBmFadeOut()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_PLAYBMFADEOUT_OFFSET))(this);
		}

		::System::Void OnDungeonSweep(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONDUNGEONSWEEP_OFFSET))(this, args);
		}

		::System::Void OnArpeggioRowClickHandle(::System::Int32 obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONARPEGGIOROWCLICKHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnLevelClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONLEVELCLICKHANDLE_OFFSET))(this);
		}

		::System::Void GoToMainCity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_GOTOMAINCITY_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _OnTalentClickHandle_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER__ONTALENTCLICKHANDLE_B__20_0_OFFSET))(this);
		}

		::System::String* __base_GetOverrideFadeInAnim(::MoleMole::UIFadeConfig* P0, ::Enum_3_DBF2701137F18AA6 P1)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::UIFadeConfig*, ::Enum_3_DBF2701137F18AA6))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___BASE_GETOVERRIDEFADEINANIM_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
