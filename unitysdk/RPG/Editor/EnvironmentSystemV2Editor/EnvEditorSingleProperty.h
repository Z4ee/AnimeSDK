#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Editor/EnvironmentSystemV2Editor/EnvEditorBlock.h"

namespace RPG::Editor::EnvironmentSystemV2Editor { class EnvEditorPropertyData; }

#define RPG_EDITOR_ENVIRONMENTSYSTEMV2EDITOR_ENVEDITORSINGLEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xA7C3650)

namespace RPG::Editor::EnvironmentSystemV2Editor
{
	inline static constexpr unsigned int EnvEditorSingleProperty_TypeDefinitionIndex = 42103;

	class EnvEditorSingleProperty : public ::RPG::Editor::EnvironmentSystemV2Editor::EnvEditorBlock
	{
	public:
		::RPG::Editor::EnvironmentSystemV2Editor::EnvEditorPropertyData* Property; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_ENVIRONMENTSYSTEMV2EDITOR_ENVEDITORSINGLEPROPERTY__CTOR_OFFSET))(this);
		}
	};
}
