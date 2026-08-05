#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/BaseActionConfig.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPCCROWD_AI_AIACTIONRANDOMBUBBLECHATCONFIG_GETBASEACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x72A150)
#define NPCCROWD_AI_AIACTIONRANDOMBUBBLECHATCONFIG_ISMULTITHREAD_OFFSET UNITYSDK_OFFSET(0x72A1A0)
#define NPCCROWD_AI_AIACTIONRANDOMBUBBLECHATCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x11271320)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionRandomBubbleChatConfig_TypeDefinitionIndex = 51168;

	struct alignas(8) AIActionRandomBubbleChatConfig
	{
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_Speakers()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AIActionRandomBubbleChatConfig_TypeDefinitionIndex)->GetStaticField(0x374F0);
		}
		// static const ::System::String* SpeakerA; // 0x0
		// static const ::System::String* SpeakerB; // 0x0
		// static const ::System::String* SpeakerC; // 0x0
		::NPCCrowd::AI::BaseActionConfig baseConfig; // 0x10
		::Il2CppArray<::System::Int32>* performIDs; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRANDOMBUBBLECHATCONFIG__CCTOR_OFFSET))();
		}

		::NPCCrowd::AI::BaseActionConfig GetBaseActionConfig()
		{
			return ((::NPCCrowd::AI::BaseActionConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRANDOMBUBBLECHATCONFIG_GETBASEACTIONCONFIG_OFFSET))(this);
		}

		::System::Boolean IsMultiThread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRANDOMBUBBLECHATCONFIG_ISMULTITHREAD_OFFSET))(this);
		}
	};
}
