#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::Client::CrowdAnimator
{
	inline static constexpr unsigned int CrowdPrototype_AnimationClipInfo_TypeDefinitionIndex = 73612;

	struct alignas(8) CrowdPrototype_AnimationClipInfo
	{
		::System::String* path; // 0x10
	};
}
