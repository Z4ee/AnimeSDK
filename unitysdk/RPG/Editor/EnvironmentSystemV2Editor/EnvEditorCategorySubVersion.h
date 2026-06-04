#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Editor::EnvironmentSystemV2Editor { class EnvEditorBlock; }
namespace RPG::Editor::EnvironmentSystemV2Editor { class EnvEditorSubVersionPropertyDefaultValue; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_EDITOR_ENVIRONMENTSYSTEMV2EDITOR_ENVEDITORCATEGORYSUBVERSION__CTOR_OFFSET UNITYSDK_OFFSET(0xCC6CE80)

namespace RPG::Editor::EnvironmentSystemV2Editor
{
	inline static constexpr unsigned int EnvEditorCategorySubVersion_TypeDefinitionIndex = 48688;

	class EnvEditorCategorySubVersion : public ::System::Object
	{
	public:
		::System::String* SubVersionName; // 0x10
		::System::Collections::Generic::List_1<::RPG::Editor::EnvironmentSystemV2Editor::EnvEditorBlock*>* Blocks; // 0x18
		::System::Collections::Generic::List_1<::RPG::Editor::EnvironmentSystemV2Editor::EnvEditorSubVersionPropertyDefaultValue*>* PropertyDefaultValues; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_ENVIRONMENTSYSTEMV2EDITOR_ENVEDITORCATEGORYSUBVERSION__CTOR_OFFSET))(this);
		}
	};
}
