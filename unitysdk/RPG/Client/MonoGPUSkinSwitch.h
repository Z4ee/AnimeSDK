#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MONOGPUSKINSWITCH_AWAKE_OFFSET UNITYSDK_OFFSET(0x18C467C0)
#define RPG_CLIENT_MONOGPUSKINSWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x18C46B90)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoGPUSkinSwitch_TypeDefinitionIndex = 65556;

	class MonoGPUSkinSwitch : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean DisableGPUSkin; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOGPUSKINSWITCH__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOGPUSKINSWITCH_AWAKE_OFFSET))(this);
		}
	};
}
