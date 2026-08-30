#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class MonoTriggerRegion; }

#define RPG_CLIENT_MONOBASETRIGGER_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19E2C030)
#define RPG_CLIENT_MONOBASETRIGGER_START_OFFSET UNITYSDK_OFFSET(0x19E2BEE0)
#define RPG_CLIENT_MONOBASETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19E2C070)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoBaseTrigger_TypeDefinitionIndex = 68871;

	class MonoBaseTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MonoTriggerRegion* ECBAOBGDJBL; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBASETRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBASETRIGGER_START_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBASETRIGGER_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
