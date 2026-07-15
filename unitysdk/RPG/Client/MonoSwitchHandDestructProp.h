#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MONOSWITCHHANDDESTRUCTPROP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A34F710)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoSwitchHandDestructProp_TypeDefinitionIndex = 65710;

	class MonoSwitchHandDestructProp : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDDESTRUCTPROP__CTOR_OFFSET))(this);
		}
	};
}
