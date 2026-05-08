#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_147;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_IS3D_EVALUATE_OFFSET UNITYSDK_OFFSET(0x181D3A80)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_IS3D_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x181D3A40)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_IS3D_IS3DEMITTER_OFFSET UNITYSDK_OFFSET(0x181D3AE0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_IS3D__CTOR_OFFSET UNITYSDK_OFFSET(0x181D3D90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_Is3D_TypeDefinitionIndex = 60280;

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

		::System::Boolean Evaluate(::Class_0_16E4307DCC419505_147* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_147*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_IS3D_EVALUATE_OFFSET))(this, context);
		}

		static ::System::Boolean Is3DEmitter(::Class_0_16E4307DCC419505_147* context)
		{
			return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_147*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_IS3D_IS3DEMITTER_OFFSET))(context);
		}
	};
}
