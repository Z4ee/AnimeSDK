#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CUSTOMRP_TIGHTSPOTLIGHTPROXYMESHGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xB4F2B20)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int TightSpotLightProxyMeshGenerator_TypeDefinitionIndex = 47857;

	class TightSpotLightProxyMeshGenerator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_TIGHTSPOTLIGHTPROXYMESHGENERATOR__CTOR_OFFSET))(this);
		}
	};
}
