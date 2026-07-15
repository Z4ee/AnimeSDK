#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AnimationClipMotionParams.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_CLIENT_ANIMATIONCLIPMOTIONPARAMGROUP_METHOD_2_E31AE924598D4DE5_OFFSET UNITYSDK_OFFSET(0x39E7120)

namespace RPG::Client
{
	inline static constexpr unsigned int AnimationClipMotionParamGroup_TypeDefinitionIndex = 69901;

	struct alignas(8) AnimationClipMotionParamGroup
	{
		::Il2CppArray<::RPG::Client::AnimationClipMotionParams>* MotionParams; // 0x10

		::RPG::Client::AnimationClipMotionParams Method_2_E31AE924598D4DE5(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::RPG::Client::AnimationClipMotionParams(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATIONCLIPMOTIONPARAMGROUP_METHOD_2_E31AE924598D4DE5_OFFSET))(this, a1, a2);
		}
	};
}
