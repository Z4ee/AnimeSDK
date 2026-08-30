#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MONOALLEYROUTEDEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0x19E28990)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoAlleyRouteDebug_TypeDefinitionIndex = 62401;

	class MonoAlleyRouteDebug : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOALLEYROUTEDEBUG__CTOR_OFFSET))(this);
		}
	};
}
