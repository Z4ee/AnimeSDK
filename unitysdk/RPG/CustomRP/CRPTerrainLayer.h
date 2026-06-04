#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Texture2D; }

#define RPG_CUSTOMRP_CRPTERRAINLAYER_GETMAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x18EBD1E0)
#define RPG_CUSTOMRP_CRPTERRAINLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EBD1F0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPTerrainLayer_TypeDefinitionIndex = 35397;

	class CRPTerrainLayer : public ::UnityEngine::ScriptableObject
	{
	public:
		// static const ::System::Single NORMAL_SCALE_RANGE; // 0x0
		// static const ::System::Single METALLIC_SCALE_RANGE; // 0x0
		// static const ::System::Single SMOOTHNESS_SCALE_RANGE; // 0x0
		::UnityEngine::Texture2D* diffuse; // 0x18
		::UnityEngine::Texture2D* normalMap; // 0x20
		::System::Single normalScale; // 0x28
		::System::Single metallicScale; // 0x2C
		::System::Single smoothnessScale; // 0x30
		::System::Single tileSize; // 0x34
		::UnityEngine::Vector2 tileOffset; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINLAYER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Texture2D* GetMainTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINLAYER_GETMAINTEXTURE_OFFSET))(this);
		}
	};
}
