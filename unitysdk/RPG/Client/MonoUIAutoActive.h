#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MONOUIAUTOACTIVE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C294CA0)
#define RPG_CLIENT_MONOUIAUTOACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C294E00)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUIAutoActive_TypeDefinitionIndex = 72537;

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
