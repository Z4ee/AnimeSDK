#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_95E1BEF84A79D9EB;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client::ActivityIdleLive { class IInteractionProvider; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveGiftDanmu; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveGiftUiData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER_AWAKE_OFFSET UNITYSDK_OFFSET(0xB14D080)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER_CLEARDANMU_OFFSET UNITYSDK_OFFSET(0xB14DEB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER_ISSHOWINGDANMU_OFFSET UNITYSDK_OFFSET(0xB14E0E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB14D790)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB14E140)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER_PAUSEDANMU_OFFSET UNITYSDK_OFFSET(0xB14CE40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER_RESUMEDANMU_OFFSET UNITYSDK_OFFSET(0xB14CF60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER_SETINTERACTIONPROVIDER_OFFSET UNITYSDK_OFFSET(0xB14CDF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER_UPDATE_OFFSET UNITYSDK_OFFSET(0xB14D1C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER__CANSHOWNEWDANMU_OFFSET UNITYSDK_OFFSET(0xB14D480)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER__CLEANENDEDDANMUS_OFFSET UNITYSDK_OFFSET(0xB14D870)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER__CTOR_OFFSET UNITYSDK_OFFSET(0xB14E190)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER__ISPAUSED_OFFSET UNITYSDK_OFFSET(0xB14D3E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER__ONLOAD_OFFSET UNITYSDK_OFFSET(0xB14D0D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER__SPAWNDANMU_OFFSET UNITYSDK_OFFSET(0xB14DCA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER__TRYFETCHGIFTTOSHOW_OFFSET UNITYSDK_OFFSET(0xB14D5D0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveGiftDanmuSpawner_TypeDefinitionIndex = 70051;

	class IdleLiveGiftDanmuSpawner : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* _GIFT_DANMU_PREFAB_PATH; // 0x0
		::RPG::Client::PrefabLoadMeta* _LoaderDanmu; // 0x18
		::RPG::Client::ActivityIdleLive::IInteractionProvider* _InteractionProvider; // 0x20
		::System::Boolean _IsManualPaused; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveGiftDanmu*>* _CreatedDanmus; // 0x30
		::Class_1_95E1BEF84A79D9EB* _UiObjectPoolManager; // 0x38
		::System::Single _GiftProtectTimer; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER__CTOR_OFFSET))(this);
		}

		::System::Void SetInteractionProvider(::RPG::Client::ActivityIdleLive::IInteractionProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IInteractionProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER_SETINTERACTIONPROVIDER_OFFSET))(this, a1);
		}

		::System::Void PauseDanmu()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER_PAUSEDANMU_OFFSET))(this);
		}

		::System::Void ResumeDanmu()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER_RESUMEDANMU_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER_AWAKE_OFFSET))(this);
		}

		::System::Void _OnLoad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER__ONLOAD_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER_UPDATE_OFFSET))(this);
		}

		::System::Boolean _IsPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER__ISPAUSED_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER_LATEUPDATE_OFFSET))(this);
		}

		::System::Boolean _CanShowNewDanmu()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER__CANSHOWNEWDANMU_OFFSET))(this);
		}

		::System::Void _TryFetchGiftToShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER__TRYFETCHGIFTTOSHOW_OFFSET))(this);
		}

		::System::Void _SpawnDanmu(::RPG::Client::ActivityIdleLive::IdleLiveGiftUiData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveGiftUiData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER__SPAWNDANMU_OFFSET))(this, a1);
		}

		::System::Void _CleanEndedDanmus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER__CLEANENDEDDANMUS_OFFSET))(this);
		}

		::System::Void ClearDanmu()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER_CLEARDANMU_OFFSET))(this);
		}

		::System::Boolean IsShowingDanmu()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER_ISSHOWINGDANMU_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER_ONDESTROY_OFFSET))(this);
		}
	};
}
