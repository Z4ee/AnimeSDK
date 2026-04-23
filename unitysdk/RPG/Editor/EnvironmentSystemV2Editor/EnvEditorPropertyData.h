#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_EDITOR_ENVIRONMENTSYSTEMV2EDITOR_ENVEDITORPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB506750)

namespace RPG::Editor::EnvironmentSystemV2Editor
{
	inline static constexpr unsigned int EnvEditorPropertyData_TypeDefinitionIndex = 48073;

	class EnvEditorPropertyData : public ::System::Object
	{
	public:
		::System::String* PropertyName; // 0x10
		::System::String* Tooltip; // 0x18
		::System::String* DisplayName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_ENVIRONMENTSYSTEMV2EDITOR_ENVEDITORPROPERTYDATA__CTOR_OFFSET))(this);
		}
	};
}
