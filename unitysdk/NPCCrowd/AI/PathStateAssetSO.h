#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace NPCCrowd::AI { class PathGraphFeaturePointConfig; }
namespace NPCCrowd::AI { class PathGraphFeaturePointPathConfig; }
namespace NPCCrowd::AI { class PathGraphFeaturePointV2Config; }
namespace NPCCrowd::AI { class PathGraphSpawnGroupConfig; }
namespace NPCCrowd::AI { class PathGraphStateConfig; }
namespace NPCCrowd::AI { class PathGraphStateGlobalConfig; }
namespace NPCCrowd::AI { class SpawnPointConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_PATHSTATEASSETSO_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xF3E4940)
#define NPCCROWD_AI_PATHSTATEASSETSO_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xF3E4900)
#define NPCCROWD_AI_PATHSTATEASSETSO_ONENABLE_OFFSET UNITYSDK_OFFSET(0xF3E48C0)
#define NPCCROWD_AI_PATHSTATEASSETSO__CTOR_OFFSET UNITYSDK_OFFSET(0xF3E4980)
#define NPCCROWD_AI_PATHSTATEASSETSO___BASE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xF3E4D80)
#define NPCCROWD_AI_PATHSTATEASSETSO___BASE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xF3E4D90)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathStateAssetSO_TypeDefinitionIndex = 42106;

	class PathStateAssetSO : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::NPCCrowd::AI::PathGraphStateGlobalConfig* globalConfig; // 0x58
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointConfig*>* featurePoints; // 0x60
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointV2Config*>* featurePointsV2; // 0x68
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointPathConfig*>* featurePointPaths; // 0x70
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphSpawnGroupConfig*>* spawnGroups; // 0x78
		::NPCCrowd::AI::SpawnPointConfig* spawnPoints; // 0x80
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphStateConfig*>* states; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHSTATEASSETSO__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHSTATEASSETSO_ONENABLE_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHSTATEASSETSO_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHSTATEASSETSO_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHSTATEASSETSO___BASE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHSTATEASSETSO___BASE_ONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}
