#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Editor { class SkillAssetConfig; }
namespace RPG::Editor { class SkillGridConfig; }
namespace RPG::Editor { class SkillGroupConfig; }
namespace RPG::Editor { class SkillPointConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_EDITOR_SKILLTREEGRIDLAYOUT_ADDSKILLPOINT_OFFSET UNITYSDK_OFFSET(0xE4667E0)
#define RPG_EDITOR_SKILLTREEGRIDLAYOUT_RESET_OFFSET UNITYSDK_OFFSET(0xE4668D0)
#define RPG_EDITOR_SKILLTREEGRIDLAYOUT__CTOR_OFFSET UNITYSDK_OFFSET(0xE466A20)

namespace RPG::Editor
{
	inline static constexpr unsigned int SkillTreeGridLayout_TypeDefinitionIndex = 52333;

	class SkillTreeGridLayout : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Editor::SkillGridConfig* SkillGridConfig; // 0x18
		::RPG::Editor::SkillGroupConfig* SkillGroupConfig; // 0x20
		::RPG::Editor::SkillAssetConfig* SkillAssetConfig; // 0x28
		::System::Collections::Generic::List_1<::RPG::Editor::SkillPointConfig*>* SkillPointConfig; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLTREEGRIDLAYOUT__CTOR_OFFSET))(this);
		}

		::System::Void AddSkillPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLTREEGRIDLAYOUT_ADDSKILLPOINT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLTREEGRIDLAYOUT_RESET_OFFSET))(this);
		}
	};
}
