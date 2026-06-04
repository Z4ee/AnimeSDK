#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_DEBUGGING_DEBUGCHARACTERAIDESCISIONHUD__CTOR_OFFSET UNITYSDK_OFFSET(0xB7370E0)

namespace RPG::Client::Debugging
{
	inline static constexpr unsigned int DebugCharacterAIDescisionHud_TypeDefinitionIndex = 74319;

	class DebugCharacterAIDescisionHud : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGING_DEBUGCHARACTERAIDESCISIONHUD__CTOR_OFFSET))(this);
		}
	};
}
