#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_8019553DE28C70A1_Enum_3_D1D49B5EF8F4C317.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIBaseController_FadeFlag.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_7CD0CB2DB1477D73;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIVirusMainWidgetController_Context; }
namespace MoleMole { class UIVirusShowRowWidgetController; }
namespace MoleMole { class UIVirusStageRowWidgetController_Data; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_GETCOLLECTSHOWITEM_OFFSET UNITYSDK_OFFSET(0x1553BE40)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_GET_SELECTQUESTID_OFFSET UNITYSDK_OFFSET(0x15539D30)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_HIDEALLSHOWITEM_OFFSET UNITYSDK_OFFSET(0x1553BC80)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_MOVETOLEVELPROCESS_OFFSET UNITYSDK_OFFSET(0x1553B290)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_ONCLICKLEVELBTN_OFFSET UNITYSDK_OFFSET(0x1553BF70)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_ONCLICKQUEST_OFFSET UNITYSDK_OFFSET(0x1553B430)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15539D90)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x1553A3C0)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1553B340)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1553A350)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_ONSELECTQUEST_OFFSET UNITYSDK_OFFSET(0x1553B780)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1553A110)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15539FB0)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1553A190)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_PLAYLEVELUPANIMBYCO_OFFSET UNITYSDK_OFFSET(0x1553B200)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_PLAYLEVELUPANIM_OFFSET UNITYSDK_OFFSET(0x1553A450)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_RECORDTABSHOW_OFFSET UNITYSDK_OFFSET(0x1553AC60)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_REFRESHLEVEL_OFFSET UNITYSDK_OFFSET(0x1553A690)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_REFRESHQUESTS_OFFSET UNITYSDK_OFFSET(0x1553A8A0)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_REFRESHVIRUSCOLLECTTIPS_OFFSET UNITYSDK_OFFSET(0x1553B8A0)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_REFRESHWIDGET_OFFSET UNITYSDK_OFFSET(0x1553A600)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_SETLEVEL_OFFSET UNITYSDK_OFFSET(0x1553B0B0)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_SETPOINT_OFFSET UNITYSDK_OFFSET(0x1553AE30)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_SETVIRUSCOLLECTTIPS_OFFSET UNITYSDK_OFFSET(0x1553BA30)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1553C0C0)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1553C210)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x1553C2A0)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1553C2B0)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1553C360)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1553C3F0)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1553C480)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1553C510)

namespace MoleMole
{
	inline static constexpr unsigned int UIVirusMainWidgetController_TypeDefinitionIndex = 56884;

	class UIVirusMainWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_7CD0CB2DB1477D73* _view; // 0x2B8
		::MoleMole::UIVirusMainWidgetController_Context* _context; // 0x2C0
		::Class_2_8019553DE28C70A1_Enum_3_D1D49B5EF8F4C317 _levelType; // 0x2C8
		::System::Int32 _normalSelectQuestID; // 0x2CC
		::System::Int32 _hardSelectQuestID; // 0x2D0
		::System::Collections::Generic::List_1<::MoleMole::UIVirusStageRowWidgetController_Data*>* _dataList; // 0x2D8
		::System::Collections::Generic::List_1<::MoleMole::UIVirusShowRowWidgetController*>* _collectShowItems; // 0x2E0
		::Foundation::Coroutine::CoroutineHandle _levelUpCoHandle; // 0x2E8
		::System::Boolean _needLevelUpAnim; // 0x2EC
		::System::Int32 _levelUpStartPoint; // 0x2F0
		::System::Int32 _levelUpEndPoint; // 0x2F4
		::System::Int32 _collectTipsQuestID; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_SelectQuestID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_GET_SELECTQUESTID_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnFadePlayFinish(::MoleMole::UIBaseController_FadeFlag flag, ::System::String* animName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_ONFADEPLAYFINISH_OFFSET))(this, flag, animName);
		}

		::System::Void RefreshWidget(::Class_2_8019553DE28C70A1_Enum_3_D1D49B5EF8F4C317 levelType, ::System::Int32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_8019553DE28C70A1_Enum_3_D1D49B5EF8F4C317, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_REFRESHWIDGET_OFFSET))(this, levelType, questID);
		}

		::System::Void RecordTabShow(::Class_2_8019553DE28C70A1_Enum_3_D1D49B5EF8F4C317 levelType)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_8019553DE28C70A1_Enum_3_D1D49B5EF8F4C317))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_RECORDTABSHOW_OFFSET))(this, levelType);
		}

		::System::Void RefreshLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_REFRESHLEVEL_OFFSET))(this);
		}

		::System::Void SetPoint(::System::Int32 curPoint, ::System::Int32 curLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_SETPOINT_OFFSET))(this, curPoint, curLevel);
		}

		::System::Void SetLevel(::System::Int32 level, ::System::Boolean isFullLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_SETLEVEL_OFFSET))(this, level, isFullLevel);
		}

		::System::Void PlayLevelUpAnim(::System::Int32 startPoint, ::System::Int32 endPoint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_PLAYLEVELUPANIM_OFFSET))(this, startPoint, endPoint);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* PlayLevelUpAnimByCo(::System::Int32 startPoint, ::System::Int32 endPoint)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_PLAYLEVELUPANIMBYCO_OFFSET))(this, startPoint, endPoint);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* MoveToLevelProcess(::System::Single curRate, ::System::Single targetRate)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_MOVETOLEVELPROCESS_OFFSET))(this, curRate, targetRate);
		}

		::System::Void RefreshQuests(::Class_2_8019553DE28C70A1_Enum_3_D1D49B5EF8F4C317 levelType, ::System::Int32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_8019553DE28C70A1_Enum_3_D1D49B5EF8F4C317, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_REFRESHQUESTS_OFFSET))(this, levelType, questID);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void OnClickQuest(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_ONCLICKQUEST_OFFSET))(this, index);
		}

		::System::Void OnSelectQuest(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_ONSELECTQUEST_OFFSET))(this, index);
		}

		::System::Void RefreshVirusCollectTips(::System::Int32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_REFRESHVIRUSCOLLECTTIPS_OFFSET))(this, questID);
		}

		::System::Void SetVirusCollectTips(::System::Int32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_SETVIRUSCOLLECTTIPS_OFFSET))(this, questID);
		}

		::MoleMole::UIVirusShowRowWidgetController* GetCollectShowItem(::System::Int32 index)
		{
			return ((::MoleMole::UIVirusShowRowWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_GETCOLLECTSHOWITEM_OFFSET))(this, index);
		}

		::System::Void HideAllShowItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_HIDEALLSHOWITEM_OFFSET))(this);
		}

		::System::Void OnClickLevelBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_ONCLICKLEVELBTN_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnFadePlayFinish(::MoleMole::UIBaseController_FadeFlag P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
