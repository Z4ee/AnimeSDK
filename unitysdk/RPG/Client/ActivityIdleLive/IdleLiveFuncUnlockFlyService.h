#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveFuncUnlockType.h"
#include "unitysdk/System/Object.h"

class Class_1_B18A907A8E4C5C9C;
namespace RPG::Client::ActivityIdleLive { class FuncUnlockUiData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLYSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B55F10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLYSERVICE_REGISTERFUNCUNLOCKDEST_OFFSET UNITYSDK_OFFSET(0x9B55A70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLYSERVICE_REGISTERROOT_OFFSET UNITYSDK_OFFSET(0x9B55980)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLYSERVICE_SHOWFUNCUNLOCKFLY_OFFSET UNITYSDK_OFFSET(0x9B55B30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLYSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x9B55F50)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveFuncUnlockFlyService_TypeDefinitionIndex = 69351;

	class IdleLiveFuncUnlockFlyService : public ::System::Object
	{
	public:
		// static const ::System::String* FUNC_UNLOCK_FLY_PREFAB_PATH; // 0x0
		// static const ::System::String* FUNC_UNLOCK_ADD_PREFAB_PATH; // 0x0
		::Class_1_B18A907A8E4C5C9C* _PoolMgr; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveFuncUnlockType, ::UnityEngine::Transform*>* _FuncUnlockDestinations; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLYSERVICE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterRoot(::UnityEngine::Transform* root)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLYSERVICE_REGISTERROOT_OFFSET))(this, root);
		}

		::System::Void RegisterFuncUnlockDest(::RPG::GameCore::IdleLiveFuncUnlockType type, ::UnityEngine::Transform* dest)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveFuncUnlockType, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLYSERVICE_REGISTERFUNCUNLOCKDEST_OFFSET))(this, type, dest);
		}

		::System::Void ShowFuncUnlockFly(::RPG::Client::ActivityIdleLive::FuncUnlockUiData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::FuncUnlockUiData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLYSERVICE_SHOWFUNCUNLOCKFLY_OFFSET))(this, data);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLYSERVICE_DISPOSE_OFFSET))(this);
		}
	};
}
