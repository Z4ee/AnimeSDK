#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CRPLightType.h"
#include "unitysdk/RPG/CustomRP/LightFeature.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LightType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::CustomRP { class CustomAdditionalLightData; }

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPLightDebugData_TypeDefinitionIndex = 36022;

	struct alignas(8) CRPLightDebugData
	{
		::RPG::CustomRP::CustomAdditionalLightData* light; // 0x10
		::UnityEngine::Vector3 pos; // 0x18
		::UnityEngine::Color color; // 0x24
		::System::Single finalRange; // 0x34
		::UnityEngine::LightType type; // 0x38
		::RPG::CustomRP::CRPLightType internalLightType; // 0x3C
		::RPG::CustomRP::LightFeature lightFeature; // 0x40
		::System::Int32 lod; // 0x44
	};
}
