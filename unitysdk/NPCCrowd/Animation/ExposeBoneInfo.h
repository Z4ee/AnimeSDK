#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCCROWD_ANIMATION_EXPOSEBONEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xF4F41D0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int ExposeBoneInfo_TypeDefinitionIndex = 72384;

	class ExposeBoneInfo : public ::System::Object
	{
	public:
		::System::String* bonePath; // 0x10
		::System::Int32 boneId; // 0x18

		::System::Void _ctor(::System::String* inBonePath, ::System::Int32 inBoneId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_EXPOSEBONEINFO__CTOR_OFFSET))(this, inBonePath, inBoneId);
		}
	};
}
