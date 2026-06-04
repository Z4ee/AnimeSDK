#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define RPG_EDITOR_SKILLDECOASSETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xCC6F8E0)

namespace RPG::Editor
{
	inline static constexpr unsigned int SkillDecoAssetConfig_TypeDefinitionIndex = 48656;

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
