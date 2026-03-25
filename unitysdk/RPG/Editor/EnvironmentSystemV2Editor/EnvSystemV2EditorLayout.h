#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Editor::EnvironmentSystemV2Editor { class EnvEditorCategory; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_EDITOR_ENVIRONMENTSYSTEMV2EDITOR_ENVSYSTEMV2EDITORLAYOUT_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA7C3670)
#define RPG_EDITOR_ENVIRONMENTSYSTEMV2EDITOR_ENVSYSTEMV2EDITORLAYOUT__CTOR_OFFSET UNITYSDK_OFFSET(0xA7C3680)

namespace RPG::Editor::EnvironmentSystemV2Editor
{
	inline static constexpr unsigned int EnvSystemV2EditorLayout_TypeDefinitionIndex = 42105;

	class EnvSystemV2EditorLayout : public ::UnityEngine::ScriptableObject
	{
	public:
		// static const ::System::String* LayoutAssetPath; // 0x0
		::System::Boolean EnableEditorLayoutConfig; // 0x18
		::System::Collections::Generic::List_1<::RPG::Editor::EnvironmentSystemV2Editor::EnvEditorCategory*>* Categories; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* KeyPropertyNames; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_ENVIRONMENTSYSTEMV2EDITOR_ENVSYSTEMV2EDITORLAYOUT__CTOR_OFFSET))(this);
		}

		static ::RPG::Editor::EnvironmentSystemV2Editor::EnvSystemV2EditorLayout* get_Instance()
		{
			return ((::RPG::Editor::EnvironmentSystemV2Editor::EnvSystemV2EditorLayout*(*)())((::PBYTE)hIl2Cpp + RPG_EDITOR_ENVIRONMENTSYSTEMV2EDITOR_ENVSYSTEMV2EDITORLAYOUT_GET_INSTANCE_OFFSET))();
		}
	};
}
