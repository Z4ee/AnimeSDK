#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_PVSDEBUGMONO__CTOR_OFFSET UNITYSDK_OFFSET(0xAC1BBE0)

namespace RPG::Client
{
	inline static constexpr unsigned int PVSDebugMono_TypeDefinitionIndex = 63533;

	class PVSDebugMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PVSDEBUGMONO__CTOR_OFFSET))(this);
		}
	};
}
