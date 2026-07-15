#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_EFFECT_PETALINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1511D0C0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_PetalInstance_TypeDefinitionIndex = 67372;

	class Effect_PetalInstance : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single TimeLocation; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PETALINSTANCE__CTOR_OFFSET))(this);
		}
	};
}
