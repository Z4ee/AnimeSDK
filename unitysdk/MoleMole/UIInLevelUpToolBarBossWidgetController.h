#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Enum_3_81A3942BCC6E42B5.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/UIInLevelUpToolBarBossWidgetController___c__DisplayClass10_0.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_2CC23FE9C9AEC1B7.h"

class Class_1_17106743E900C7CC;
class Class_1_6740168B11ECBECF;
class Class_1_FA793AB1D49D0132;
class Class_2_05BFAB15000D9DD3;
class Class_2_77915EE9002093EC;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIStunDamageWidgetController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_ADDBOSSID_OFFSET UNITYSDK_OFFSET(0x15D2F280)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_CLEARCURBOSSHUD_OFFSET UNITYSDK_OFFSET(0x15D30AF0)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_CREATESUBWIDGETS_OFFSET UNITYSDK_OFFSET(0x15D2E4F0)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_DELAYCALL_OFFSET UNITYSDK_OFFSET(0x15D325C0)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D2F030)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_GETBACKUPCACHE_OFFSET UNITYSDK_OFFSET(0x15D311F0)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_GETBOSSID_OFFSET UNITYSDK_OFFSET(0x15D30D50)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_GETMODELCACHEBYID_OFFSET UNITYSDK_OFFSET(0x15D32220)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_GETVIEWMODELBYID_OFFSET UNITYSDK_OFFSET(0x15D321B0)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x15D2E3C0)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_ONBUFFADD_OFFSET UNITYSDK_OFFSET(0x15D31330)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_ONBUFFCUSTOMNUMCHANGE_OFFSET UNITYSDK_OFFSET(0x15D31570)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_ONBUFFREMOVE_OFFSET UNITYSDK_OFFSET(0x15D31640)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15D2EF10)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15D31820)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x15D32760)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15D31BE0)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_ONLOCKTARGET_OFFSET UNITYSDK_OFFSET(0x15D31C60)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_ONOVERDRIVEHUDSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x15D32460)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_ONSTUNDESTROYDELAY_OFFSET UNITYSDK_OFFSET(0x15D32300)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_ONSTUNRESETSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x15D32080)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15D2EFA0)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15D2E3D0)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15D2EB40)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x15D2EBC0)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_OVERDRIVESTATEFADEIN_OFFSET UNITYSDK_OFFSET(0x15D31FE0)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_OVERDRIVESTATEFADEOUT_OFFSET UNITYSDK_OFFSET(0x15D31F40)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_REFRESHLIFEPOINT_OFFSET UNITYSDK_OFFSET(0x15D303C0)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x15D2FC10)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_REMOVEBOSSHUD_OFFSET UNITYSDK_OFFSET(0x15D30DB0)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_SETACTIVEINTERNAL_OFFSET UNITYSDK_OFFSET(0x15D31770)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_SETACTIVEWITHANIM_OFFSET UNITYSDK_OFFSET(0x15D31700)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x15D2E800)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_STOPALLDELAYCALLBACK_OFFSET UNITYSDK_OFFSET(0x15D326C0)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_TICKDELAYCALL_OFFSET UNITYSDK_OFFSET(0x15D2EC40)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER__ADDBOSSID_G__NEEDCHANGEBOSSVIEWMODEL_10_0_OFFSET UNITYSDK_OFFSET(0x15D2F880)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D32840)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER__ONUIINIT_B__5_0_OFFSET UNITYSDK_OFFSET(0x15D329D0)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER__OVERDRIVESTATEFADEIN_B__40_0_OFFSET UNITYSDK_OFFSET(0x15D32B10)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER__SETACTIVEINTERNAL_B__35_0_OFFSET UNITYSDK_OFFSET(0x15D32A50)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15D32BD0)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15D32C60)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15D32CF0)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15D32D80)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelUpToolBarBossWidgetController_TypeDefinitionIndex = 47486;

	class UIInLevelUpToolBarBossWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_77915EE9002093EC* _view; // 0x2B8
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _lifePoints; // 0x2C0
		::System::String* _lifePointCustomProperty; // 0x2C8
		::System::Boolean isFading; // 0x2D0
		::System::Boolean fadeing; // 0x2D1
		::System::Boolean curActiveValue; // 0x2D2
		::System::Boolean targetActiveValue; // 0x2D3
		::System::Boolean cancelActiveFade; // 0x2D4
		::System::Boolean loopInOverDrive; // 0x2D5
		::System::Collections::Generic::List_1<::System::Single>* delayTimerList; // 0x2D8
		::System::Collections::Generic::List_1<::System::Action*>* delayCallBackList; // 0x2E0
		::Class_1_17106743E900C7CC* bossViewModel_1; // 0x2E8
		::MoleMole::UIStunDamageWidgetController* _stunDamageWidget_1; // 0x2F0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6740168B11ECBECF*>* bossModelCache; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_NeedCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_ONUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void AddBossId(::System::UInt32 entityId, ::Struct_2_2CC23FE9C9AEC1B7 data)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Struct_2_2CC23FE9C9AEC1B7))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_ADDBOSSID_OFFSET))(this, entityId, data);
		}

		::System::Void ClearCurBossHud()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_CLEARCURBOSSHUD_OFFSET))(this);
		}

		::System::Void RemoveBossHud(::System::UInt32 entityId, ::Struct_2_2CC23FE9C9AEC1B7 data)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Struct_2_2CC23FE9C9AEC1B7))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_REMOVEBOSSHUD_OFFSET))(this, entityId, data);
		}

		::System::Void RefreshView(::Struct_2_2CC23FE9C9AEC1B7 data)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_2CC23FE9C9AEC1B7))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void OnBuffAdd(::System::UInt32 buffOwnerId, ::System::Int32 buffId, ::System::Boolean replaceBuff)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_ONBUFFADD_OFFSET))(this, buffOwnerId, buffId, replaceBuff);
		}

		::System::Void OnBuffCustomNumChange(::MoleMole::Battle::Entity* buffOwner, ::System::Int32 buffId, ::System::Int32 customNum)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_ONBUFFCUSTOMNUMCHANGE_OFFSET))(this, buffOwner, buffId, customNum);
		}

		::System::Void OnBuffRemove(::System::UInt32 buffOwnerId, ::System::Int32 buffId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_ONBUFFREMOVE_OFFSET))(this, buffOwnerId, buffId);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_DISPOSE_OFFSET))(this);
		}

		::System::Void SetActiveWithAnim(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_SETACTIVEWITHANIM_OFFSET))(this, value);
		}

		::System::Void SetActive(::System::Boolean value, ::System::Boolean sync)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_SETACTIVE_OFFSET))(this, value, sync);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_ONLATEUPDATE_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask SetActiveInternal(::System::Boolean value)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_SETACTIVEINTERNAL_OFFSET))(this, value);
		}

		::System::Void OnLockTarget(::MoleMole::Battle::Entity* targetEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_ONLOCKTARGET_OFFSET))(this, targetEntity);
		}

		::System::Boolean OnStunResetStateChange(::Class_2_05BFAB15000D9DD3* evt)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_05BFAB15000D9DD3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_ONSTUNRESETSTATECHANGE_OFFSET))(this, evt);
		}

		::System::Void OnStunDestroyDelay(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_ONSTUNDESTROYDELAY_OFFSET))(this, args);
		}

		::System::Void OnOverDriveHUDStateChange(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_ONOVERDRIVEHUDSTATECHANGE_OFFSET))(this, entityId);
		}

		::Cysharp::Threading::Tasks::UniTask OverDriveStateFadeIn()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_OVERDRIVESTATEFADEIN_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OverDriveStateFadeOut()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_OVERDRIVESTATEFADEOUT_OFFSET))(this);
		}

		::System::UInt32 GetBossID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_GETBOSSID_OFFSET))(this);
		}

		::Class_1_17106743E900C7CC* GetViewModelById(::System::UInt32 targetId)
		{
			return ((::Class_1_17106743E900C7CC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_GETVIEWMODELBYID_OFFSET))(this, targetId);
		}

		::Class_1_6740168B11ECBECF* GetModelCacheById(::System::UInt32 targetId)
		{
			return ((::Class_1_6740168B11ECBECF*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_GETMODELCACHEBYID_OFFSET))(this, targetId);
		}

		::Class_1_6740168B11ECBECF* GetBackUpCache()
		{
			return ((::Class_1_6740168B11ECBECF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_GETBACKUPCACHE_OFFSET))(this);
		}

		::System::Void CreateSubWidgets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_CREATESUBWIDGETS_OFFSET))(this);
		}

		::System::Void DelayCall(::System::Single delay, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_DELAYCALL_OFFSET))(this, delay, callback);
		}

		::System::Void TickDelayCall(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_TICKDELAYCALL_OFFSET))(this, deltaTime);
		}

		::System::Void StopAllDelayCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_STOPALLDELAYCALLBACK_OFFSET))(this);
		}

		::System::Void OnFighter_PropertyValueChanged(::System::UInt32 FighterId, ::MoleMole::Config::BaseProperty type, ::System::String* customType, ::System::Double oldValue, ::System::Double newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET))(this, FighterId, type, customType, oldValue, newValue);
		}

		::System::Void RefreshLifePoint(::System::Int32 fromCount, ::System::Int32 toCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER_REFRESHLIFEPOINT_OFFSET))(this, fromCount, toCount);
		}

		::System::Void _OnUIInit_b__5_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER__ONUIINIT_B__5_0_OFFSET))(this, args);
		}

		::System::Boolean _AddBossId_g__NeedChangeBossViewModel_10_0(::MoleMole::UIInLevelUpToolBarBossWidgetController___c__DisplayClass10_0& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIInLevelUpToolBarBossWidgetController___c__DisplayClass10_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER__ADDBOSSID_G__NEEDCHANGEBOSSVIEWMODEL_10_0_OFFSET))(this, a1);
		}

		::System::Void _SetActiveInternal_b__35_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER__SETACTIVEINTERNAL_B__35_0_OFFSET))(this);
		}

		::System::Void _OverDriveStateFadeIn_b__40_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER__OVERDRIVESTATEFADEIN_B__40_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
