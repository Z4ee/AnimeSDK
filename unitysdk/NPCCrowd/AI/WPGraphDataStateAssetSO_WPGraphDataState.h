#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/WPGraphDataStateAssetSO_FGraphNPCBornData.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class WPGraphDataStateAssetSO_NodeStateOverrideData; }
namespace NPCCrowd::AI { class WPGraphDataStateAssetSO_PathStateOverrideData; }

#define NPCCROWD_AI_WPGRAPHDATASTATEASSETSO_WPGRAPHDATASTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x8C24D60)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int WPGraphDataStateAssetSO_WPGraphDataState_TypeDefinitionIndex = 50635;

	class WPGraphDataStateAssetSO_WPGraphDataState : public ::System::Object
	{
	public:
		::System::Int32 stateID; // 0x10
		::Il2CppArray<::NPCCrowd::AI::WPGraphDataStateAssetSO_NodeStateOverrideData*>* nodeDatas; // 0x18
		::Il2CppArray<::NPCCrowd::AI::WPGraphDataStateAssetSO_PathStateOverrideData*>* pathDatas; // 0x20
		::Il2CppArray<::NPCCrowd::AI::WPGraphDataStateAssetSO_FGraphNPCBornData>* bornDatas; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHDATASTATEASSETSO_WPGRAPHDATASTATE__CTOR_OFFSET))(this);
		}
	};
}
