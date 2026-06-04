#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Code/MonoBehavior/Level/MonoTrainPartyBuildEffectSetting_ShaderColor.h"
#include "unitysdk/Code/MonoBehavior/Level/MonoTrainPartyBuildEffectSetting_ShaderFloat.h"
#include "unitysdk/Code/MonoBehavior/Level/MonoTrainPartyBuildEffectSetting_ShaderVector.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define CODE_MONOBEHAVIOR_LEVEL_MONOTRAINPARTYBUILDEFFECTSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0xC7439A0)

namespace Code::MonoBehavior::Level
{
	inline static constexpr unsigned int MonoTrainPartyBuildEffectSetting_TypeDefinitionIndex = 46872;

	class MonoTrainPartyBuildEffectSetting : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean allowTriggerEffect; // 0x18
		::Il2CppArray<::Code::MonoBehavior::Level::MonoTrainPartyBuildEffectSetting_ShaderFloat>* overrideShaderFloats; // 0x20
		::Il2CppArray<::Code::MonoBehavior::Level::MonoTrainPartyBuildEffectSetting_ShaderVector>* overrideShaderVectors; // 0x28
		::Il2CppArray<::Code::MonoBehavior::Level::MonoTrainPartyBuildEffectSetting_ShaderColor>* overrideShaderColors; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_MONOBEHAVIOR_LEVEL_MONOTRAINPARTYBUILDEFFECTSETTING__CTOR_OFFSET))(this);
		}
	};
}
