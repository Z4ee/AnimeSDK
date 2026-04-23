#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class Material; }

#define CODE_MONOBEHAVIOR_LEVEL_MONOTRAINPARTYBUILDEFFECTSETTING_SHADERFLOAT_METHOD_2_4F515A5348AB9F15_OFFSET UNITYSDK_OFFSET(0xDC590)

namespace Code::MonoBehavior::Level
{
	inline static constexpr unsigned int MonoTrainPartyBuildEffectSetting_ShaderFloat_TypeDefinitionIndex = 46283;

	struct alignas(8) MonoTrainPartyBuildEffectSetting_ShaderFloat
	{
		::System::String* name; // 0x10
		::System::Single value; // 0x18

		::System::Void Method_2_4F515A5348AB9F15(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CODE_MONOBEHAVIOR_LEVEL_MONOTRAINPARTYBUILDEFFECTSETTING_SHADERFLOAT_METHOD_2_4F515A5348AB9F15_OFFSET))(this, a1);
		}
	};
}
