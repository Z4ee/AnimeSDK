#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_197;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCENETAG_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1B4DA0E0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCENETAG_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1B4DA0A0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCENETAG_METHOD_1_9F141027EF20D345_OFFSET UNITYSDK_OFFSET(0x1B4DA360)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCENETAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4DA410)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_SceneTag_TypeDefinitionIndex = 56640;

	class ConfigSoundActionTriggerCondition_SceneTag : public ::System::Object
	{
	public:
		::System::String* tag; // 0x10
		::System::Boolean invert; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCENETAG__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCENETAG_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean Evaluate(::Class_0_16E4307DCC419505_197* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCENETAG_EVALUATE_OFFSET))(this, a1);
		}

		static ::System::Boolean Method_1_9F141027EF20D345(::System::Collections::Generic::HashSet_1<::System::String*>* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCENETAG_METHOD_1_9F141027EF20D345_OFFSET))(a1, a2, a3);
		}
	};
}
