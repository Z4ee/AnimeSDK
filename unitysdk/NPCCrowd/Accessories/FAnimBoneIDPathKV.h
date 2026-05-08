#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Accessories/FTransformConfig.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int FAnimBoneIDPathKV_TypeDefinitionIndex = 40375;

	struct alignas(8) FAnimBoneIDPathKV
	{
		::System::Int32 boneID; // 0x10
		::System::String* BonePath; // 0x18
		::NPCCrowd::Accessories::FTransformConfig boneInitTrans; // 0x20
	};
}
