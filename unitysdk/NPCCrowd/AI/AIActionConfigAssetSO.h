#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace NPCCrowd::AI { class IAIActionConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPCCROWD_AI_AIACTIONCONFIGASSETSO__CTOR_OFFSET UNITYSDK_OFFSET(0x10B38740)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionConfigAssetSO_TypeDefinitionIndex = 51485;

	class AIActionConfigAssetSO : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::IAIActionConfig*>* AIActionConfigsForJob; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONCONFIGASSETSO__CTOR_OFFSET))(this);
		}
	};
}
