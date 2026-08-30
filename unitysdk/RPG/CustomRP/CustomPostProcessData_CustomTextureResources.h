#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture3D; }

#define RPG_CUSTOMRP_CUSTOMPOSTPROCESSDATA_CUSTOMTEXTURERESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x1C69CFC0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CustomPostProcessData_CustomTextureResources_TypeDefinitionIndex = 37087;

	class CustomPostProcessData_CustomTextureResources : public ::System::Object
	{
	public:
		::UnityEngine::Texture2D* SMAAAreaTex; // 0x10
		::UnityEngine::Texture2D* SMAASearchTex; // 0x18
		::UnityEngine::Texture3D* BlueNoiseTex3D; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMPOSTPROCESSDATA_CUSTOMTEXTURERESOURCES__CTOR_OFFSET))(this);
		}
	};
}
