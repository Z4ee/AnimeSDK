#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4D1ACF3BA3E010AE.h"
#include "unitysdk/Struct_2_85121BFD79A0E193.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_LookAtIKSetting_TypeDefinitionIndex = 70446;

	struct alignas(8) AnimationSubManager_LookAtIKSetting
	{
		::Unity::Collections::NativeSlice_1<::Struct_2_85121BFD79A0E193> Spines; // 0x10
		::System::Single SpineWeight; // 0x20
		::System::Single SpineClampWeight; // 0x24
		::UnityEngine::Vector3 SpineTargetOffset; // 0x28
		::Struct_2_4D1ACF3BA3E010AE Head; // 0x34
		::System::Single HeadWeight; // 0x3C
		::System::Single HeadClampWeight; // 0x40
		::Unity::Collections::NativeSlice_1<::Struct_2_4D1ACF3BA3E010AE> Eyes; // 0x48
		::System::Single EyeWeight; // 0x58
		::System::Single EyeClampWeight; // 0x5C
		::System::Int32 ClampSmoothingIteration; // 0x60
	};
}
