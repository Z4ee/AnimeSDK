#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/AttractorCommonConfig.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace NPCCrowd::AI { class AttractorTemplate; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_ATTRACTORTEMPLATEASSETSO__CTOR_OFFSET UNITYSDK_OFFSET(0x8C23640)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorTemplateAssetSO_TypeDefinitionIndex = 75468;

	class AttractorTemplateAssetSO : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::NPCCrowd::AI::AttractorCommonConfig config; // 0x58
		::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorTemplate*>* attractorConfigs; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORTEMPLATEASSETSO__CTOR_OFFSET))(this);
		}
	};
}
