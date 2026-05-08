#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01FCCDD0DAFD0465.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_1_888C549537AA5C52;
class Class_2_09E16C0EB2A7A6B6;
class Class_2_208CC9941471731A_490;
class Class_2_208CC9941471731A_708;
class Class_2_C356C4C12B41397B;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFashionStore3DModelController; }
namespace MoleMole { class UIFashionStoreGameKeyOnTrailWidgetController; }
namespace MoleMole { class UIFashionStoreKeyItemWidgetController; }
namespace MoleMole { class UIFashionStoreMiniGameRowWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_CLEANKEYSCTRLS_OFFSET UNITYSDK_OFFSET(0x157929D0)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_CLEANKEYSONTRAILCTRLS_OFFSET UNITYSDK_OFFSET(0x15792B60)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_CLEANTRAILROWS_OFFSET UNITYSDK_OFFSET(0x15792CF0)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_GETRANGE_OFFSET UNITYSDK_OFFSET(0x15792E80)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_GET_CURPLAYINGLEVELCFG_OFFSET UNITYSDK_OFFSET(0x15792450)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_GET_CURTIMESCALE_OFFSET UNITYSDK_OFFSET(0x15792460)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_GET_KEYSONTRAILCTRLS_OFFSET UNITYSDK_OFFSET(0x157932F0)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x15792340)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x157915C0)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_ONCLICKPAUSEORRESUME_OFFSET UNITYSDK_OFFSET(0x15792550)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x157915D0)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_ONKEYCALLBACK_OFFSET UNITYSDK_OFFSET(0x15791BA0)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_ONLEVELEND_OFFSET UNITYSDK_OFFSET(0x157924B0)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_ONSTARTLEVEL_OFFSET UNITYSDK_OFFSET(0x15791910)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x157933B0)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15791660)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15791850)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_REFRESHSCOREPROGRESS_OFFSET UNITYSDK_OFFSET(0x15791C60)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_RESETKEYBOARDBYROUND_OFFSET UNITYSDK_OFFSET(0x157925F0)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_SETROUNDMSG_OFFSET UNITYSDK_OFFSET(0x15792140)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_SETROUNDPROG_OFFSET UNITYSDK_OFFSET(0x15792240)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x15793300)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15793420)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15793430)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x157934C0)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x157934D0)
#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x157934E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStoreGamePageController_TypeDefinitionIndex = 54843;

	class UIFashionStoreGamePageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::Class_2_09E16C0EB2A7A6B6* _view; // 0x320
		::MoleMole::UIFashionStore3DModelController* _minigame3DModelController; // 0x328
		::Class_2_208CC9941471731A_490* m_levelConfig; // 0x330
		::Class_2_C356C4C12B41397B* m_model; // 0x338
		::Class_1_888C549537AA5C52* m_manager; // 0x340
		::Class_2_208CC9941471731A_490* m_curPlayingLevelCfg; // 0x348
		::System::Boolean m_isTicking; // 0x350
		::System::Int32 m_totalScore; // 0x354
		::System::Int32 m_maxScore; // 0x358
		::System::Collections::Generic::List_1<::MoleMole::UIFashionStoreMiniGameRowWidgetController*>* m_trailRows; // 0x360
		::System::Collections::Generic::List_1<::MoleMole::UIFashionStoreGameKeyOnTrailWidgetController*>* m_keysOnTrailCtrls; // 0x368
		::System::Collections::Generic::List_1<::MoleMole::UIFashionStoreKeyItemWidgetController*>* m_keysCtrls; // 0x370

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnKeyCallBack(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_ONKEYCALLBACK_OFFSET))(this, args);
		}

		::System::Void SetRoundMsg(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_SETROUNDMSG_OFFSET))(this, msg);
		}

		::System::Void SetRoundProg(::System::Int32 curRound)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_SETROUNDPROG_OFFSET))(this, curRound);
		}

		::Class_2_C356C4C12B41397B* get_Model()
		{
			return ((::Class_2_C356C4C12B41397B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_GET_MODEL_OFFSET))(this);
		}

		::Class_2_208CC9941471731A_490* get_CurPlayingLevelCfg()
		{
			return ((::Class_2_208CC9941471731A_490*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_GET_CURPLAYINGLEVELCFG_OFFSET))(this);
		}

		::System::Void OnStartLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_ONSTARTLEVEL_OFFSET))(this);
		}

		::System::Single get_CurTimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_GET_CURTIMESCALE_OFFSET))(this);
		}

		::System::Void OnLevelEnd(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_ONLEVELEND_OFFSET))(this, args);
		}

		::System::Void OnClickPauseOrResume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_ONCLICKPAUSEORRESUME_OFFSET))(this);
		}

		::System::Void ResetKeyBoardByRound(::Class_2_208CC9941471731A_708* roundCfg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_708*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_RESETKEYBOARDBYROUND_OFFSET))(this, roundCfg);
		}

		::System::Void RefreshScoreProgress(::Enum_3_01FCCDD0DAFD0465 beatActionType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_01FCCDD0DAFD0465))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_REFRESHSCOREPROGRESS_OFFSET))(this, beatActionType);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetRange(::System::Collections::Generic::List_1<::System::Int32>* original, ::System::Int32 partIdx)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_GETRANGE_OFFSET))(this, original, partIdx);
		}

		::System::Void CleanKeysCtrls()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_CLEANKEYSCTRLS_OFFSET))(this);
		}

		::System::Void CleanKeysOnTrailCtrls()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_CLEANKEYSONTRAILCTRLS_OFFSET))(this);
		}

		::System::Void CleanTrailRows()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_CLEANTRAILROWS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIFashionStoreGameKeyOnTrailWidgetController*>* get_KeysOnTrailCtrls()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIFashionStoreGameKeyOnTrailWidgetController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_GET_KEYSONTRAILCTRLS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
