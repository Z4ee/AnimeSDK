#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_14E7CE92E8A3183F;
class Class_2_208CC9941471731A_535;
class Class_2_46B1304F31463D00_1;
class Class_2_E621E51D351EB960;
namespace MoleMole { class UIAbyssLimboAniMono; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_GETENTRANCEID_OFFSET UNITYSDK_OFFSET(0x15E761D0)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_GETNEEDPLAYUNLOCKEFFECT_OFFSET UNITYSDK_OFFSET(0x15E7A450)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_GETPROGRESSEFFECTPLAYCOUNT_OFFSET UNITYSDK_OFFSET(0x15E7A500)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_GET_ISAFKLOCKED_OFFSET UNITYSDK_OFFSET(0x15E7A430)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_GET_ISBOSSRUSHENTRANCE_OFFSET UNITYSDK_OFFSET(0x15E795D0)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_GET_ISLOCK_OFFSET UNITYSDK_OFFSET(0x15E7A440)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_GET_ISNESTENTRANCE_OFFSET UNITYSDK_OFFSET(0x15E795E0)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x15E759B0)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ISNEW_OFFSET UNITYSDK_OFFSET(0x15E7B030)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ISRED_OFFSET UNITYSDK_OFFSET(0x15E7B1D0)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E7B350)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15E7A2C0)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ONLIMBOBTNCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x15E73040)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15E7A3C0)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E7B3E0)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15E795F0)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15E7A0F0)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_REFRESHENTRANCEVIEW_OFFSET UNITYSDK_OFFSET(0x15E7A580)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_REFRESHHOBAPREFACVIEW_OFFSET UNITYSDK_OFFSET(0x15E7AB00)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_REFRESHNEWSTATE_OFFSET UNITYSDK_OFFSET(0x15E774E0)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_REFRESHPERIODVIEW_OFFSET UNITYSDK_OFFSET(0x15E7A750)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_REFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x15E76230)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15E7B460)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER__ONUIOPEN_B__21_0_OFFSET UNITYSDK_OFFSET(0x15E7B5C0)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER__ONUIOPEN_B__21_1_OFFSET UNITYSDK_OFFSET(0x15E7B5D0)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER__REFRESHSTATE_B__35_0_OFFSET UNITYSDK_OFFSET(0x15E7B5E0)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER__REFRESHSTATE_B__35_1_OFFSET UNITYSDK_OFFSET(0x15E7B650)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER__REFRESHSTATE_B__35_2_OFFSET UNITYSDK_OFFSET(0x15E7B6C0)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER__REFRESHSTATE_B__35_3_OFFSET UNITYSDK_OFFSET(0x15E7B760)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E7B9D0)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15E7BA60)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E7BB00)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15E7BB90)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15E7BC20)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssLimboWidgetController_TypeDefinitionIndex = 73958;

	class UIAbyssLimboWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_46B1304F31463D00_1* _view; // 0x2B8
		::UnityEngine::Transform* lockObj; // 0x2C0
		::UnityEngine::Transform* newObj; // 0x2C8
		::UnityEngine::Transform* redPointObj; // 0x2D0
		::Il2CppArray<::UnityEngine::GameObject*>* progressIconArr; // 0x2D8
		::Il2CppArray<::UnityEngine::GameObject*>* progressLightArr; // 0x2E0
		::MoleMole::UIAbyssLimboAniMono* aniMono; // 0x2E8
		::UnityEngine::UI::Image* iconInTrack; // 0x2F0
		::System::Int32 limboIndex; // 0x2F8
		::System::Action_1<::Class_2_208CC9941471731A_535*>* clickAction; // 0x300
		::Class_2_E621E51D351EB960* _abyssModel; // 0x308
		::UnityEngine::Animation* difficutyLoopAni; // 0x310
		::UnityEngine::Animation* difficutyLoopAni2; // 0x318
		::System::Boolean m_isBossRushEntrance; // 0x320
		::System::Boolean m_isNestEntrance; // 0x321
		::System::Collections::Generic::List_1<::Class_2_14E7CE92E8A3183F*>* abyssDungeonList; // 0x328
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* progressLightList; // 0x330
		::System::Collections::Generic::List_1<::UnityEngine::Animation*>* progressAniList; // 0x338
		::System::Boolean hasDifficuty; // 0x340
		::System::Boolean m_isAfkLocked; // 0x341
		::System::Boolean m_isLock; // 0x342
		::Class_2_208CC9941471731A_535* entranceCfg; // 0x348

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsBossRushEntrance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_GET_ISBOSSRUSHENTRANCE_OFFSET))(this);
		}

		::System::Boolean get_IsNestEntrance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_GET_ISNESTENTRANCE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void InitView(::System::Int32 abyssGroup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_INITVIEW_OFFSET))(this, abyssGroup);
		}

		::System::Boolean get_IsAfkLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_GET_ISAFKLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_GET_ISLOCK_OFFSET))(this);
		}

		::System::Void RefreshState(::System::Single delay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_REFRESHSTATE_OFFSET))(this, delay);
		}

		::System::Void RefreshEntranceView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_REFRESHENTRANCEVIEW_OFFSET))(this);
		}

		::System::Void RefreshPeriodView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_REFRESHPERIODVIEW_OFFSET))(this);
		}

		::System::Void RefreshHobaPrefacView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_REFRESHHOBAPREFACVIEW_OFFSET))(this);
		}

		::System::Int32 GetEntranceID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_GETENTRANCEID_OFFSET))(this);
		}

		::System::Boolean GetNeedPlayUnlockEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_GETNEEDPLAYUNLOCKEFFECT_OFFSET))(this);
		}

		::System::Int32 GetProgressEffectPlayCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_GETPROGRESSEFFECTPLAYCOUNT_OFFSET))(this);
		}

		::System::Void RefreshNewState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_REFRESHNEWSTATE_OFFSET))(this);
		}

		::System::Boolean IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ISNEW_OFFSET))(this);
		}

		::System::Boolean IsRed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ISRED_OFFSET))(this);
		}

		::System::Void OnLimboBtnClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ONLIMBOBTNCLICKHANDLE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__21_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER__ONUIOPEN_B__21_0_OFFSET))(this, args);
		}

		::System::Void _OnUIOpen_b__21_1(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER__ONUIOPEN_B__21_1_OFFSET))(this, args);
		}

		::System::Void _RefreshState_b__35_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER__REFRESHSTATE_B__35_0_OFFSET))(this);
		}

		::System::Void _RefreshState_b__35_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER__REFRESHSTATE_B__35_1_OFFSET))(this);
		}

		::System::Void _RefreshState_b__35_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER__REFRESHSTATE_B__35_2_OFFSET))(this);
		}

		::System::Void _RefreshState_b__35_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER__REFRESHSTATE_B__35_3_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
