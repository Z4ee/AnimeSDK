#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class FABRIK; }

#define RPG_CLIENT_TAILIKCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B403CC0)
#define RPG_CLIENT_TAILIKCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1B403F80)
#define RPG_CLIENT_TAILIKCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B403F10)
#define RPG_CLIENT_TAILIKCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B403EA0)
#define RPG_CLIENT_TAILIKCONTROLLER_RESET_OFFSET UNITYSDK_OFFSET(0x1B403DD0)
#define RPG_CLIENT_TAILIKCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4043D0)

namespace RPG::Client
{
	inline static constexpr unsigned int TailIKController_TypeDefinitionIndex = 68827;

	class TailIKController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::FABRIK* mainIK; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAILIKCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAILIKCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAILIKCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAILIKCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAILIKCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAILIKCONTROLLER_RESET_OFFSET))(this);
		}
	};
}
