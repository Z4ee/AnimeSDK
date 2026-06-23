#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathLineType.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace NPCCrowd::AI { class Node; }
namespace NPCCrowd::AI { class Path; }
namespace NPCCrowd::AI { class WPGraphDataStateAssetSO; }
namespace NPCCrowd::AI { class WPPathSetting; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_WPGRAPHDATAASSETSO_GETNODE_OFFSET UNITYSDK_OFFSET(0xE8A8580)
#define NPCCROWD_AI_WPGRAPHDATAASSETSO_GETPATHBETWEEN_1_OFFSET UNITYSDK_OFFSET(0xE8A88B0)
#define NPCCROWD_AI_WPGRAPHDATAASSETSO_GETPATHBETWEEN_OFFSET UNITYSDK_OFFSET(0xE8A8740)
#define NPCCROWD_AI_WPGRAPHDATAASSETSO_GETPATH_OFFSET UNITYSDK_OFFSET(0xE8A8660)
#define NPCCROWD_AI_WPGRAPHDATAASSETSO_REGENERATEIDS_OFFSET UNITYSDK_OFFSET(0xE8A8930)
#define NPCCROWD_AI_WPGRAPHDATAASSETSO__CTOR_OFFSET UNITYSDK_OFFSET(0xE8A8340)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int WPGraphDataAssetSO_TypeDefinitionIndex = 60899;

	class WPGraphDataAssetSO : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Int32 graphID; // 0x18
		::System::Single nodeSize; // 0x1C
		::System::Single heightFromTheGround; // 0x20
		::System::Int32 groundLayer; // 0x24
		::System::String* groundTag; // 0x28
		::NPCCrowd::AI::PathLineType lineType; // 0x30
		::NPCCrowd::AI::WPPathSetting* graphPathSetting; // 0x38
		::System::Collections::Generic::List_1<::NPCCrowd::AI::Node*>* nodes; // 0x40
		::System::Collections::Generic::List_1<::NPCCrowd::AI::Path*>* paths; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt16, ::NPCCrowd::AI::Node*>* nodesSorted; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt16, ::NPCCrowd::AI::Path*>* pathsSorted; // 0x58
		::NPCCrowd::AI::WPGraphDataStateAssetSO* stateSo; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHDATAASSETSO__CTOR_OFFSET))(this);
		}

		::NPCCrowd::AI::Node* GetNode(::System::UInt16 ID)
		{
			return ((::NPCCrowd::AI::Node*(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHDATAASSETSO_GETNODE_OFFSET))(this, ID);
		}

		::NPCCrowd::AI::Path* GetPath(::System::UInt16 ID)
		{
			return ((::NPCCrowd::AI::Path*(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHDATAASSETSO_GETPATH_OFFSET))(this, ID);
		}

		::NPCCrowd::AI::Path* GetPathBetween(::System::UInt16 from, ::System::UInt16 to)
		{
			return ((::NPCCrowd::AI::Path*(*)(::PVOID, ::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHDATAASSETSO_GETPATHBETWEEN_OFFSET))(this, from, to);
		}

		::NPCCrowd::AI::Path* GetPathBetween_1(::NPCCrowd::AI::Node* from, ::NPCCrowd::AI::Node* to)
		{
			return ((::NPCCrowd::AI::Path*(*)(::PVOID, ::NPCCrowd::AI::Node*, ::NPCCrowd::AI::Node*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHDATAASSETSO_GETPATHBETWEEN_1_OFFSET))(this, from, to);
		}

		::System::Void ReGenerateIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHDATAASSETSO_REGENERATEIDS_OFFSET))(this);
		}
	};
}
