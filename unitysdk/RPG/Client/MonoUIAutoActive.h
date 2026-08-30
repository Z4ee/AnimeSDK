#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MONOUIAUTOACTIVE_AWAKE_OFFSET UNITYSDK_OFFSET(0xD87A3B0)
#define RPG_CLIENT_MONOUIAUTOACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0xD87A510)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUIAutoActive_TypeDefinitionIndex = 72538;

	class MonoUIAutoActive : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean IsPCNode; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIAUTOACTIVE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIAUTOACTIVE_AWAKE_OFFSET))(this);
		}
	};
}
