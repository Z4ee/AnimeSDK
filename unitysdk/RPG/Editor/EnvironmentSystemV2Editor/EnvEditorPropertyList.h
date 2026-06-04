#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Editor/EnvironmentSystemV2Editor/EnvEditorBlock.h"

namespace RPG::Editor::EnvironmentSystemV2Editor { class EnvEditorSingleProperty; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_EDITOR_ENVIRONMENTSYSTEMV2EDITOR_ENVEDITORPROPERTYLIST__CTOR_OFFSET UNITYSDK_OFFSET(0xCC6D040)

namespace RPG::Editor::EnvironmentSystemV2Editor
{
	inline static constexpr unsigned int EnvEditorPropertyList_TypeDefinitionIndex = 48693;

	class EnvEditorPropertyList : public ::RPG::Editor::EnvironmentSystemV2Editor::EnvEditorBlock
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Editor::EnvironmentSystemV2Editor::EnvEditorSingleProperty*>* Properties; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_ENVIRONMENTSYSTEMV2EDITOR_ENVEDITORPROPERTYLIST__CTOR_OFFSET))(this);
		}
	};
}
