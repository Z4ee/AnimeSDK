#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define RPG_EDITOR_SKILLDECOASSETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA7C5990)

namespace RPG::Editor
{
	inline static constexpr unsigned int SkillDecoAssetConfig_TypeDefinitionIndex = 42065;

	class SkillDecoAssetConfig : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* Prefab; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLDECOASSETCONFIG__CTOR_OFFSET))(this);
		}
	};
}
