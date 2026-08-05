#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NPCCrowdMaterialOverrideParamsInfo;
namespace UnityEngine { class Renderer; }

#define NPCCROWD_AVATAR_PARTRENDEREROVERRIDEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x11945E70)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int PartRendererOverrideInfo_TypeDefinitionIndex = 62721;

	class PartRendererOverrideInfo : public ::System::Object
	{
	public:
		::UnityEngine::Renderer* partRender; // 0x10
		::System::Byte materialIndex; // 0x18
		::NPCCrowdMaterialOverrideParamsInfo* partOverrideInfo; // 0x20

		::System::Void _ctor(::UnityEngine::Renderer* inRender, ::System::Byte inMaterialIndex, ::NPCCrowdMaterialOverrideParamsInfo* inPartOverrideInfo)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Byte, ::NPCCrowdMaterialOverrideParamsInfo*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_PARTRENDEREROVERRIDEINFO__CTOR_OFFSET))(this, inRender, inMaterialIndex, inPartOverrideInfo);
		}
	};
}
