#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Spine { class Animation; }
namespace System { class String; }

#define SPINE_ANIMATIONSTATEDATA_ANIMATIONPAIR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3867630)
#define SPINE_ANIMATIONSTATEDATA_ANIMATIONPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x80F20)

namespace Spine
{
	inline static constexpr unsigned int AnimationStateData_AnimationPair_TypeDefinitionIndex = 36701;

	struct alignas(8) AnimationStateData_AnimationPair
	{
		::Spine::Animation* a1; // 0x10
		::Spine::Animation* a2; // 0x18

		::System::Void _ctor(::Spine::Animation* a1, ::Spine::Animation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Animation*, ::Spine::Animation*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATEDATA_ANIMATIONPAIR__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATEDATA_ANIMATIONPAIR_TOSTRING_OFFSET))(this);
		}
	};
}
