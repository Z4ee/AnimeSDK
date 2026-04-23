#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_DEBUGGIZMOSRACASTTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xA0F7060)

namespace RPG::Client
{
	inline static constexpr unsigned int DebugGizmosRacastTarget_TypeDefinitionIndex = 63009;

	class DebugGizmosRacastTarget : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGIZMOSRACASTTARGET__CTOR_OFFSET))(this);
		}
	};
}
