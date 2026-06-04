#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_POWERPOLE__CTOR_OFFSET UNITYSDK_OFFSET(0xC4B2F70)

namespace RPG::Client
{
	inline static constexpr unsigned int PowerPole_TypeDefinitionIndex = 66482;

	class PowerPole : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POWERPOLE__CTOR_OFFSET))(this);
		}
	};
}
