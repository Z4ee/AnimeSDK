#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }

#define SRDEBUGGER_EXTENSION_OPTION_RPGDEBUGMONOTICKBRIDGE_SET_LIFETIME_OFFSET UNITYSDK_OFFSET(0xE909200)
#define SRDEBUGGER_EXTENSION_OPTION_RPGDEBUGMONOTICKBRIDGE_UPDATE_OFFSET UNITYSDK_OFFSET(0xE909210)
#define SRDEBUGGER_EXTENSION_OPTION_RPGDEBUGMONOTICKBRIDGE__CTOR_OFFSET UNITYSDK_OFFSET(0xE909290)

namespace SRDebugger::Extension::Option
{
	inline static constexpr unsigned int RPGDebugMonoTickBridge_TypeDefinitionIndex = 48168;

	class RPGDebugMonoTickBridge : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action* TickCallback; // 0x18
		::System::Single MMOCIIJHFHL; // 0x20
		::System::Single COCJDAKNIAP; // 0x24
		::System::Single Interval; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_EXTENSION_OPTION_RPGDEBUGMONOTICKBRIDGE__CTOR_OFFSET))(this);
		}

		::System::Void set_LifeTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SRDEBUGGER_EXTENSION_OPTION_RPGDEBUGMONOTICKBRIDGE_SET_LIFETIME_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_EXTENSION_OPTION_RPGDEBUGMONOTICKBRIDGE_UPDATE_OFFSET))(this);
		}
	};
}
