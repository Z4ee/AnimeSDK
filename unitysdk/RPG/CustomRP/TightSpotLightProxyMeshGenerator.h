#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CUSTOMRP_TIGHTSPOTLIGHTPROXYMESHGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x16830900)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int TightSpotLightProxyMeshGenerator_TypeDefinitionIndex = 52143;

	class TightSpotLightProxyMeshGenerator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_TIGHTSPOTLIGHTPROXYMESHGENERATOR__CTOR_OFFSET))(this);
		}
	};
}
