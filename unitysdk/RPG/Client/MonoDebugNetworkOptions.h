#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MONODEBUGNETWORKOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xD74B980)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoDebugNetworkOptions_TypeDefinitionIndex = 72680;

	class MonoDebugNetworkOptions : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODEBUGNETWORKOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
