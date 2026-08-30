#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_SIMPRTXGROUPCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x196B7400)

namespace RPG::Client
{
	inline static constexpr unsigned int SimpRTXGroupComponent_TypeDefinitionIndex = 70153;

	class SimpRTXGroupComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXGROUPCOMPONENT__CTOR_OFFSET))(this);
		}
	};
}
