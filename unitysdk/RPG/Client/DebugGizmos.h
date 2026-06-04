#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_DEBUGGIZMOS__CTOR_OFFSET UNITYSDK_OFFSET(0xB736DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int DebugGizmos_TypeDefinitionIndex = 63923;

	class DebugGizmos : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGIZMOS__CTOR_OFFSET))(this);
		}
	};
}
