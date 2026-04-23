#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_EDITOR_ENVIRONMENTSYSTEMV2EDITOR_ENVEDITORBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xB506530)

namespace RPG::Editor::EnvironmentSystemV2Editor
{
	inline static constexpr unsigned int EnvEditorBlock_TypeDefinitionIndex = 48067;

	class EnvEditorBlock : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_ENVIRONMENTSYSTEMV2EDITOR_ENVEDITORBLOCK__CTOR_OFFSET))(this);
		}
	};
}
