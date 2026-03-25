#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class FABRIK; }

#define RPG_CLIENT_TAILIKCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xA53B650)
#define RPG_CLIENT_TAILIKCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA53B910)
#define RPG_CLIENT_TAILIKCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA53B8A0)
#define RPG_CLIENT_TAILIKCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA53B830)
#define RPG_CLIENT_TAILIKCONTROLLER_RESET_OFFSET UNITYSDK_OFFSET(0xA53B760)
#define RPG_CLIENT_TAILIKCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA53BCF0)

namespace RPG::Client
{
	inline static constexpr unsigned int TailIKController_TypeDefinitionIndex = 56255;

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
