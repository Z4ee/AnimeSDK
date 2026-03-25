#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_EDITOR_EDITORDICECOMBATREFERENCES__CTOR_OFFSET UNITYSDK_OFFSET(0xA7C33F0)

namespace RPG::Editor
{
	inline static constexpr unsigned int EditorDiceCombatReferences_TypeDefinitionIndex = 42074;

	class EditorDiceCombatReferences : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_EDITORDICECOMBATREFERENCES__CTOR_OFFSET))(this);
		}
	};
}
