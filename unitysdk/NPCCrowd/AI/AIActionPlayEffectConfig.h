#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/BaseActionConfig.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define NPCCROWD_AI_AIACTIONPLAYEFFECTCONFIG_GETBASEACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x824320)
#define NPCCROWD_AI_AIACTIONPLAYEFFECTCONFIG_ISMULTITHREAD_OFFSET UNITYSDK_OFFSET(0x824370)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionPlayEffectConfig_TypeDefinitionIndex = 81410;

	struct alignas(8) AIActionPlayEffectConfig
	{
		::NPCCrowd::AI::BaseActionConfig baseConfig; // 0x10
		::System::String* effectName; // 0x18
		::System::String* effectTag; // 0x20
		::System::Boolean setOwner; // 0x28
		::UnityEngine::Vector3 pos; // 0x2C
		::UnityEngine::Vector3 rot; // 0x38
		::System::Boolean attach; // 0x44
		::System::String* attachBone; // 0x48

		::NPCCrowd::AI::BaseActionConfig GetBaseActionConfig()
		{
			return ((::NPCCrowd::AI::BaseActionConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONPLAYEFFECTCONFIG_GETBASEACTIONCONFIG_OFFSET))(this);
		}

		::System::Boolean IsMultiThread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONPLAYEFFECTCONFIG_ISMULTITHREAD_OFFSET))(this);
		}
	};
}
