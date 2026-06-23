#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace NPCCrowd::AI { class WPGraphDataStateAssetSO_MyWPGraphDataStateComparer; }
namespace NPCCrowd::AI { class WPGraphDataStateAssetSO_WPGraphDataState; }

#define NPCCROWD_AI_WPGRAPHDATASTATEASSETSO_GETSTATEBYID_OFFSET UNITYSDK_OFFSET(0xE8A9250)
#define NPCCROWD_AI_WPGRAPHDATASTATEASSETSO_REFRESH_OFFSET UNITYSDK_OFFSET(0xE8A9110)
#define NPCCROWD_AI_WPGRAPHDATASTATEASSETSO__CTOR_OFFSET UNITYSDK_OFFSET(0xE8A9070)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int WPGraphDataStateAssetSO_TypeDefinitionIndex = 50631;

	class WPGraphDataStateAssetSO : public ::UnityEngine::ScriptableObject
	{
	public:
		::Il2CppArray<::NPCCrowd::AI::WPGraphDataStateAssetSO_WPGraphDataState*>* allStates; // 0x18
		::NPCCrowd::AI::WPGraphDataStateAssetSO_WPGraphDataState* tempComparedState; // 0x20
		::NPCCrowd::AI::WPGraphDataStateAssetSO_MyWPGraphDataStateComparer* comparer; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHDATASTATEASSETSO__CTOR_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHDATASTATEASSETSO_REFRESH_OFFSET))(this);
		}

		::NPCCrowd::AI::WPGraphDataStateAssetSO_WPGraphDataState* GetStateByID(::System::Int32 id)
		{
			return ((::NPCCrowd::AI::WPGraphDataStateAssetSO_WPGraphDataState*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHDATASTATEASSETSO_GETSTATEBYID_OFFSET))(this, id);
		}
	};
}
