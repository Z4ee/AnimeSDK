#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/ShaderPropertyType.h"

class NapGradient;
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

namespace MoleMole
{
	inline static constexpr unsigned int MonoGhostEffect_Struct_2_9167F944B15AEA92_TypeDefinitionIndex = 70637;

	struct alignas(8) MonoGhostEffect_Struct_2_9167F944B15AEA92
	{
		::System::String* Field_2_1; // 0x10
		::System::Int32 Field_2_0; // 0x18
		::UnityEngine::AnimationCurve* Field_2_7; // 0x20
		::NapGradient* Field_2_6; // 0x28
		::System::Single Field_2_5; // 0x30
		::System::Single Field_2_4; // 0x34
		::UnityEngine::Rendering::ShaderPropertyType Field_2_11; // 0x38
		::Il2CppArray<::UnityEngine::AnimationCurve*>* Field_2_10; // 0x40
	};
}
