#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/AttractorCommonConfig.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace NPCCrowd::AI { class AttractorClusterConfig; }
namespace NPCCrowd::AI { class AttractorInstance; }
namespace NPCCrowd::AI { class AttractorLinkConfig; }
namespace NPCCrowd::AI { class AttractorTemplate; }
namespace NPCCrowd::AI { class AttractorTestInstance; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_ATTRACTORCONFIGASSETSO__CTOR_OFFSET UNITYSDK_OFFSET(0xCE455D0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorConfigAssetSO_TypeDefinitionIndex = 53700;

	class AttractorConfigAssetSO : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::NPCCrowd::AI::AttractorCommonConfig config; // 0x58
		::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorTemplate*>* attractorConfigs; // 0x68
		::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorInstance*>* attractorInstances; // 0x70
		::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorTestInstance*>* attractorTestInstances; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorLinkConfig*>*>* attractorLinks; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorClusterConfig*>*>* attractorClusters; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORCONFIGASSETSO__CTOR_OFFSET))(this);
		}
	};
}
