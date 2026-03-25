#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DD81253E160EB8B2;
namespace RPG::Client { class TimeRewindControlManager; }
namespace RPG::Client { class TimeRewindControlManager_TimeRewindEntityPreloadEffItem; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_CACHEEFFASYNC_OFFSET UNITYSDK_OFFSET(0xA5A2730)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_CLEAR_OFFSET UNITYSDK_OFFSET(0xA5A6880)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_EFFECTSETFINISH_OFFSET UNITYSDK_OFFSET(0xA5A3DD0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_FIREEFFECTASYNC_OFFSET UNITYSDK_OFFSET(0xA5A3A80)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_GET_LOADEFFITEM_OFFSET UNITYSDK_OFFSET(0xA5AD7B0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_INIT_OFFSET UNITYSDK_OFFSET(0xA5A2DA0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD__CTOR_OFFSET UNITYSDK_OFFSET(0xA5ADC30)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeRewindControlManager_TimeRewindEntityPreload_TypeDefinitionIndex = 49289;

	class TimeRewindControlManager_TimeRewindEntityPreload : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Owner; // 0x10
		::System::Collections::Generic::HashSet_1<::System::String*>* _UniqueEffPreloadPaths; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::TimeRewindControlManager_TimeRewindEntityPreloadEffItem*>* _LoadEffItem; // 0x20
		::RPG::Client::TimeRewindControlManager* _OwnerManager; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::TimeRewindControlManager_TimeRewindEntityPreloadEffItem*>* get_LoadEffItem()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::TimeRewindControlManager_TimeRewindEntityPreloadEffItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_GET_LOADEFFITEM_OFFSET))(this);
		}

		::System::Void FireEffectAsync(::RPG::Client::TriggerEffectParams* param, ::Class_1_DD81253E160EB8B2* handler)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*, ::Class_1_DD81253E160EB8B2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_FIREEFFECTASYNC_OFFSET))(this, param, handler);
		}

		::System::Void EffectSetFinish(::Class_1_DD81253E160EB8B2* handler, ::System::Boolean needFadeOut)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DD81253E160EB8B2*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_EFFECTSETFINISH_OFFSET))(this, handler, needFadeOut);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_CLEAR_OFFSET))(this);
		}

		::System::Void Init(::RPG::GameCore::GameEntity* owner, ::RPG::Client::TimeRewindControlManager* ownerManager)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::TimeRewindControlManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_INIT_OFFSET))(this, owner, ownerManager);
		}

		::System::Void CacheEffAsync(::System::Collections::Generic::List_1<::System::String*>* paths)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_CACHEEFFASYNC_OFFSET))(this, paths);
		}
	};
}
