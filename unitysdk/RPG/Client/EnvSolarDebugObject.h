#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define RPG_CLIENT_ENVSOLARDEBUGOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0xCEA5110)

namespace RPG::Client
{
	inline static constexpr unsigned int EnvSolarDebugObject_TypeDefinitionIndex = 69754;

	class EnvSolarDebugObject : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* SolarName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVSOLARDEBUGOBJECT__CTOR_OFFSET))(this);
		}
	};
}
