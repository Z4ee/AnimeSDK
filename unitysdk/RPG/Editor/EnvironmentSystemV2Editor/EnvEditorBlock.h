#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_EDITOR_ENVIRONMENTSYSTEMV2EDITOR_ENVEDITORBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xE463460)

namespace RPG::Editor::EnvironmentSystemV2Editor
{
	inline static constexpr unsigned int EnvEditorBlock_TypeDefinitionIndex = 52356;

	class EnvEditorBlock : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_ENVIRONMENTSYSTEMV2EDITOR_ENVEDITORBLOCK__CTOR_OFFSET))(this);
		}
	};
}
