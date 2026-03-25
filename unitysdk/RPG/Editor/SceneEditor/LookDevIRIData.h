#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_EDITOR_SCENEEDITOR_LOOKDEVIRIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA7C3740)

namespace RPG::Editor::SceneEditor
{
	inline static constexpr unsigned int LookDevIRIData_TypeDefinitionIndex = 42106;

	class LookDevIRIData : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SCENEEDITOR_LOOKDEVIRIDATA__CTOR_OFFSET))(this);
		}
	};
}
