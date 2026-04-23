#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_DEBUGUIADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0xA0F70C0)

namespace RPG::Client
{
	inline static constexpr unsigned int DebugUIAdapter_TypeDefinitionIndex = 67024;

	class DebugUIAdapter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGUIADAPTER__CTOR_OFFSET))(this);
		}
	};
}
