#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define RPG_CLIENT_ENVSOLARDEBUGOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0xB9134C0)

namespace RPG::Client
{
	inline static constexpr unsigned int EnvSolarDebugObject_TypeDefinitionIndex = 65243;

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
