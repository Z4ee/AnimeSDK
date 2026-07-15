#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelRotation.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int TimelineControlGameWorld_LevelGroup_TypeDefinitionIndex = 40347;

	struct alignas(8) TimelineControlGameWorld_LevelGroup
	{
		::System::String* UniqueName; // 0x10
		::UnityEngine::Transform* Transform; // 0x18
		::UnityEngine::Transform* Origin; // 0x20
		::RPG::Client::LittleGame::ETimelineControlGameLevelRotation Rotation; // 0x28
		::UnityEngine::Vector3Int Position; // 0x2C
	};
}
