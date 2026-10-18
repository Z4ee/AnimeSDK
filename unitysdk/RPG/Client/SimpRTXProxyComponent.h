#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_SIMPRTXPROXYCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xE0C0190)

namespace RPG::Client
{
	inline static constexpr unsigned int SimpRTXProxyComponent_TypeDefinitionIndex = 70193;

	class SimpRTXProxyComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXPROXYCOMPONENT__CTOR_OFFSET))(this);
		}
	};
}
