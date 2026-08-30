#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_EDITOR_SCENEEDITOR_LOOKDEVIRIPREVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x16846B60)

namespace RPG::Editor::SceneEditor
{
	inline static constexpr unsigned int LookDevIRIPreview_TypeDefinitionIndex = 52370;

	class LookDevIRIPreview : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SCENEEDITOR_LOOKDEVIRIPREVIEW__CTOR_OFFSET))(this);
		}
	};
}
