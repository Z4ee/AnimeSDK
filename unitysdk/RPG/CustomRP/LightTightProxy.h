#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CUSTOMRP_LIGHTTIGHTPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0xA7AAD60)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int LightTightProxy_TypeDefinitionIndex = 41873;

	class LightTightProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LIGHTTIGHTPROXY__CTOR_OFFSET))(this);
		}
	};
}
