#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace NPCCrowd::AI { class WPGraphDataAssetSO; }

#define NPCCROWD_AI_PATHFINDERMONO_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD0BD120)
#define NPCCROWD_AI_PATHFINDERMONO_ONSCENEGUI_OFFSET UNITYSDK_OFFSET(0xD0BD160)
#define NPCCROWD_AI_PATHFINDERMONO_UPDATE_OFFSET UNITYSDK_OFFSET(0xD0BD0E0)
#define NPCCROWD_AI_PATHFINDERMONO__CTOR_OFFSET UNITYSDK_OFFSET(0xD0BD1A0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathFinderMono_TypeDefinitionIndex = 70010;

	class PathFinderMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		::NPCCrowd::AI::WPGraphDataAssetSO* GraphDataAssetSo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHFINDERMONO__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHFINDERMONO_UPDATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHFINDERMONO_ONENABLE_OFFSET))(this);
		}

		::System::Void OnSceneGUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHFINDERMONO_ONSCENEGUI_OFFSET))(this);
		}
	};
}
