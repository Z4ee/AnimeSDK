#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }

#define RPG_EDITOR_SKILLPREVIEW_EDITORROOTMOTION_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x16849B10)
#define RPG_EDITOR_SKILLPREVIEW_EDITORROOTMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16849B70)

namespace RPG::Editor::SkillPreview
{
	inline static constexpr unsigned int EditorRootMotion_TypeDefinitionIndex = 52354;

	class EditorRootMotion : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action* OnMove; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLPREVIEW_EDITORROOTMOTION__CTOR_OFFSET))(this);
		}

		::System::Void OnAnimatorMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLPREVIEW_EDITORROOTMOTION_ONANIMATORMOVE_OFFSET))(this);
		}
	};
}
