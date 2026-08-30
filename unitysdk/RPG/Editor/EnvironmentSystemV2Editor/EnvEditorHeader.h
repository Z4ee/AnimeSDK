#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Editor/EnvironmentSystemV2Editor/EnvEditorBlock.h"

namespace RPG::Editor::EnvironmentSystemV2Editor { class EnvEditorSingleProperty; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_EDITOR_ENVIRONMENTSYSTEMV2EDITOR_ENVEDITORHEADER_GET_FOLDERON_OFFSET UNITYSDK_OFFSET(0x16846980)
#define RPG_EDITOR_ENVIRONMENTSYSTEMV2EDITOR_ENVEDITORHEADER_GET_PREFKEY_OFFSET UNITYSDK_OFFSET(0x168469A0)
#define RPG_EDITOR_ENVIRONMENTSYSTEMV2EDITOR_ENVEDITORHEADER_SET_FOLDERON_OFFSET UNITYSDK_OFFSET(0x16846990)
#define RPG_EDITOR_ENVIRONMENTSYSTEMV2EDITOR_ENVEDITORHEADER__CTOR_OFFSET UNITYSDK_OFFSET(0x16846A10)

namespace RPG::Editor::EnvironmentSystemV2Editor
{
	inline static constexpr unsigned int EnvEditorHeader_TypeDefinitionIndex = 52361;

	class EnvEditorHeader : public ::RPG::Editor::EnvironmentSystemV2Editor::EnvEditorBlock
	{
	public:
		::System::String* HeaderText; // 0x10
		::System::Collections::Generic::List_1<::RPG::Editor::EnvironmentSystemV2Editor::EnvEditorSingleProperty*>* Properties; // 0x18
		::System::Boolean _FolderOn_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_ENVIRONMENTSYSTEMV2EDITOR_ENVEDITORHEADER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_FolderOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_ENVIRONMENTSYSTEMV2EDITOR_ENVEDITORHEADER_GET_FOLDERON_OFFSET))(this);
		}

		::System::Void set_FolderOn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_EDITOR_ENVIRONMENTSYSTEMV2EDITOR_ENVEDITORHEADER_SET_FOLDERON_OFFSET))(this, a1);
		}

		::System::String* get_PrefKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_ENVIRONMENTSYSTEMV2EDITOR_ENVEDITORHEADER_GET_PREFKEY_OFFSET))(this);
		}
	};
}
