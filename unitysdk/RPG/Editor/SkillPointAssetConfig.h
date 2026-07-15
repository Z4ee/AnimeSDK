#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class GameObject; }

#define RPG_EDITOR_SKILLPOINTASSETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x106C1C80)

namespace RPG::Editor
{
	inline static constexpr unsigned int SkillPointAssetConfig_TypeDefinitionIndex = 49665;

	class SkillPointAssetConfig : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* Prefab; // 0x10
		::UnityEngine::Vector2 InOffset; // 0x18
		::UnityEngine::Vector2 OutOffset; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLPOINTASSETCONFIG__CTOR_OFFSET))(this);
		}
	};
}
