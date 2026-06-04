#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Texture2D; }

#define RPG_CUSTOMRP_CRPRENDERERDATA_CRPTEXTURERESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x18EBB840)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPRendererData_CRPTextureResources_TypeDefinitionIndex = 35537;

	class CRPRendererData_CRPTextureResources : public ::System::Object
	{
	public:
		::UnityEngine::Texture2D* AOJitterTexture; // 0x10
		::UnityEngine::Texture2D* ltc_1; // 0x18
		::UnityEngine::Texture2D* ltc_2; // 0x20
		::UnityEngine::Texture2D* ltc_3; // 0x28
		::UnityEngine::Texture2D* capsuleBakeTex; // 0x30
		::UnityEngine::Texture2D* deformationNoiseTex; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPRENDERERDATA_CRPTEXTURERESOURCES__CTOR_OFFSET))(this);
		}
	};
}
