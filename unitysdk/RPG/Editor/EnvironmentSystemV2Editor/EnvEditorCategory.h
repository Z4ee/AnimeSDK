#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Editor::EnvironmentSystemV2Editor { class EnvEditorBlock; }
namespace RPG::Editor::EnvironmentSystemV2Editor { class EnvEditorCategorySubVersion; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_EDITOR_ENVIRONMENTSYSTEMV2EDITOR_ENVEDITORCATEGORY__CTOR_OFFSET UNITYSDK_OFFSET(0x106BF8D0)

namespace RPG::Editor::EnvironmentSystemV2Editor
{
	inline static constexpr unsigned int EnvEditorCategory_TypeDefinitionIndex = 49699;

	class EnvEditorCategory : public ::System::Object
	{
	public:
		::System::String* CategoryName; // 0x10
		::System::Collections::Generic::List_1<::RPG::Editor::EnvironmentSystemV2Editor::EnvEditorBlock*>* Blocks; // 0x18
		::System::Collections::Generic::List_1<::RPG::Editor::EnvironmentSystemV2Editor::EnvEditorCategorySubVersion*>* SubVersions; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_ENVIRONMENTSYSTEMV2EDITOR_ENVEDITORCATEGORY__CTOR_OFFSET))(this);
		}
	};
}
