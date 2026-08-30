#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_EDITOR_ENVIRONMENTSYSTEMV2EDITOR_ENVEDITORSUBVERSIONPROPERTYDEFAULTVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0xE4636B0)

namespace RPG::Editor::EnvironmentSystemV2Editor
{
	inline static constexpr unsigned int EnvEditorSubVersionPropertyDefaultValue_TypeDefinitionIndex = 52358;

	class EnvEditorSubVersionPropertyDefaultValue : public ::System::Object
	{
	public:
		::System::String* PropertyName; // 0x10
		::System::Int32 Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_ENVIRONMENTSYSTEMV2EDITOR_ENVEDITORSUBVERSIONPROPERTYDEFAULTVALUE__CTOR_OFFSET))(this);
		}
	};
}
