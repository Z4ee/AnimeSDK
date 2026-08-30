#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_EDITOR_EDITORDICECOMBATREFERENCES__CTOR_OFFSET UNITYSDK_OFFSET(0x168467E0)

namespace RPG::Editor
{
	inline static constexpr unsigned int EditorDiceCombatReferences_TypeDefinitionIndex = 52336;

	class EditorDiceCombatReferences : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_EDITORDICECOMBATREFERENCES__CTOR_OFFSET))(this);
		}
	};
}
