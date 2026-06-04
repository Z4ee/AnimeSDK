#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_INSTANCEDATABAKER__CTOR_OFFSET UNITYSDK_OFFSET(0xBD3F610)

namespace RPG::Client
{
	inline static constexpr unsigned int InstanceDataBaker_TypeDefinitionIndex = 66521;

	class InstanceDataBaker : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INSTANCEDATABAKER__CTOR_OFFSET))(this);
		}
	};
}
