#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_197;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCOPEEMPTY_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1B558090)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCOPEEMPTY_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1B558050)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCOPEEMPTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5582B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_ScopeEmpty_TypeDefinitionIndex = 61988;

	class ConfigSoundActionTriggerCondition_ScopeEmpty : public ::System::Object
	{
	public:
		::System::String* scopeName; // 0x10
		::System::Boolean invert; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCOPEEMPTY__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCOPEEMPTY_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean Evaluate(::Class_0_16E4307DCC419505_197* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCOPEEMPTY_EVALUATE_OFFSET))(this, a1);
		}
	};
}
