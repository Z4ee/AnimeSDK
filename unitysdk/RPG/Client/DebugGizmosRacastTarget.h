#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_DEBUGGIZMOSRACASTTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xB736DF0)

namespace RPG::Client
{
	inline static constexpr unsigned int DebugGizmosRacastTarget_TypeDefinitionIndex = 63924;

	class DebugGizmosRacastTarget : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGIZMOSRACASTTARGET__CTOR_OFFSET))(this);
		}
	};
}
