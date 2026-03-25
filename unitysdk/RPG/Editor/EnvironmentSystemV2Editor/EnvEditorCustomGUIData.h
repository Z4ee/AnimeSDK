#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Reflection { class MethodInfo; }

#define RPG_EDITOR_ENVIRONMENTSYSTEMV2EDITOR_ENVEDITORCUSTOMGUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA7C34E0)

namespace RPG::Editor::EnvironmentSystemV2Editor
{
	inline static constexpr unsigned int EnvEditorCustomGUIData_TypeDefinitionIndex = 42101;

	class EnvEditorCustomGUIData : public ::System::Object
	{
	public:
		::System::String* CallbackName; // 0x10
		::System::Reflection::MethodInfo* CallbackInstance; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_ENVIRONMENTSYSTEMV2EDITOR_ENVEDITORCUSTOMGUIDATA__CTOR_OFFSET))(this);
		}
	};
}
