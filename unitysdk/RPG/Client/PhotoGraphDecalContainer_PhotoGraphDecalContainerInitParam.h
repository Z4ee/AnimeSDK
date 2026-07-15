#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_PHOTOGRAPHDECALCONTAINERINITPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x17F5B1C0)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphDecalContainer_PhotoGraphDecalContainerInitParam_TypeDefinitionIndex = 66317;

	class PhotoGraphDecalContainer_PhotoGraphDecalContainerInitParam : public ::System::Object
	{
	public:
		::System::Single MaxRaycastLength; // 0x10
		::System::Single DecalWidth; // 0x14
		::System::Single PreviewDecalCD; // 0x18
		::System::Single PreviewDecalAlpha; // 0x1C
		::System::Int32 MaxDecalCount; // 0x20
		::System::Single FadeInAnimeSpeed; // 0x24
		::System::Single FadeOutAnimeSpeed; // 0x28
		::System::Single MaxDepthVariance; // 0x2C
		::System::Single DecalHeight; // 0x30
		::System::Single DecalScale; // 0x34
		::System::Single DepthBufferSampleRadiusRatio; // 0x38
		::System::Single MaxDepthTestVariance; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_PHOTOGRAPHDECALCONTAINERINITPARAM__CTOR_OFFSET))(this);
		}
	};
}
