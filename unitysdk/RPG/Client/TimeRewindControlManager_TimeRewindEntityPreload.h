#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E45C207B1AC948BE;
namespace RPG::Client { class TimeRewindControlManager; }
namespace RPG::Client { class TimeRewindControlManager_TimeRewindEntityPreloadEffItem; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_CACHEEFFASYNC_OFFSET UNITYSDK_OFFSET(0x1ACC3570)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_CLEAR_OFFSET UNITYSDK_OFFSET(0x1ACC7720)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_EFFECTSETFINISH_OFFSET UNITYSDK_OFFSET(0x1ACC4BD0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_FIREEFFECTASYNC_OFFSET UNITYSDK_OFFSET(0x1ACC48D0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_GET_LOADEFFITEM_OFFSET UNITYSDK_OFFSET(0x1ACCEDB0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_INIT_OFFSET UNITYSDK_OFFSET(0x1ACC3C00)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACCF290)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeRewindControlManager_TimeRewindEntityPreload_TypeDefinitionIndex = 60922;

	class TimeRewindControlManager_TimeRewindEntityPreload : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::TimeRewindControlManager_TimeRewindEntityPreloadEffItem*>* _LoadEffItem; // 0x10
		::System::Collections::Generic::HashSet_1<::System::String*>* _UniqueEffPreloadPaths; // 0x18
		::RPG::Client::TimeRewindControlManager* _OwnerManager; // 0x20
		::RPG::GameCore::GameEntity* Owner; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::TimeRewindControlManager_TimeRewindEntityPreloadEffItem*>* get_LoadEffItem()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::TimeRewindControlManager_TimeRewindEntityPreloadEffItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_GET_LOADEFFITEM_OFFSET))(this);
		}

		::System::Void FireEffectAsync(::RPG::Client::TriggerEffectParams* a1, ::Class_1_E45C207B1AC948BE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*, ::Class_1_E45C207B1AC948BE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_FIREEFFECTASYNC_OFFSET))(this, a1, a2);
		}

		::System::Void EffectSetFinish(::Class_1_E45C207B1AC948BE* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E45C207B1AC948BE*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_EFFECTSETFINISH_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_CLEAR_OFFSET))(this);
		}

		::System::Void Init(::RPG::GameCore::GameEntity* a1, ::RPG::Client::TimeRewindControlManager* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::TimeRewindControlManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void CacheEffAsync(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_CACHEEFFASYNC_OFFSET))(this, a1);
		}
	};
}
