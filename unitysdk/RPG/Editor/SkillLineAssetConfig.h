#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Editor { class SkillLineAssetConfig_LineTypeState; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_EDITOR_SKILLLINEASSETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB508510)

namespace RPG::Editor
{
	inline static constexpr unsigned int SkillLineAssetConfig_TypeDefinitionIndex = 48035;

	class SkillLineAssetConfig : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* Prefab; // 0x10
		::System::Collections::Generic::List_1<::RPG::Editor::SkillLineAssetConfig_LineTypeState*>* LineTypeStates; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLLINEASSETCONFIG__CTOR_OFFSET))(this);
		}
	};
}
