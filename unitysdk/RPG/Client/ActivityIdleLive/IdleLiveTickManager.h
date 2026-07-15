#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_1195;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETICKMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A186240)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETICKMANAGER_REGISTERTICK_OFFSET UNITYSDK_OFFSET(0x1A186160)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETICKMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A186290)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETICKMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A186600)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTickManager_TypeDefinitionIndex = 71840;

	class IdleLiveTickManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1195*>* Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETICKMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void RegisterTick(::Class_0_16E4307DCC419505_1195* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1195*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETICKMANAGER_REGISTERTICK_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETICKMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETICKMANAGER_UPDATE_OFFSET))(this);
		}
	};
}
