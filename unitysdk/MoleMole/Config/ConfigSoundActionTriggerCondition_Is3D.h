#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_197;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_IS3D_EVALUATE_OFFSET UNITYSDK_OFFSET(0x19FF0430)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_IS3D_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x19FF03F0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_IS3D_IS3DEMITTER_OFFSET UNITYSDK_OFFSET(0x19FF0490)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_IS3D__CTOR_OFFSET UNITYSDK_OFFSET(0x19FF0740)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_Is3D_TypeDefinitionIndex = 62285;

	class ConfigSoundActionTriggerCondition_Is3D : public ::System::Object
	{
	public:
		::System::Boolean invert; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_IS3D__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_IS3D_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean Evaluate(::Class_0_16E4307DCC419505_197* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_IS3D_EVALUATE_OFFSET))(this, context);
		}

		static ::System::Boolean Is3DEmitter(::Class_0_16E4307DCC419505_197* context)
		{
			return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_IS3D_IS3DEMITTER_OFFSET))(context);
		}
	};
}
