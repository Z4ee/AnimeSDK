#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ANIM_CTRLER_PARAMS_TYPE.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_SCENEPEFORMANIMATORPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x158C2240)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScenePeformAnimatorParam_TypeDefinitionIndex = 47876;

	class ScenePeformAnimatorParam : public ::System::Object
	{
	public:
		::System::String* ParamName; // 0x10
		::System::Boolean BoolVal; // 0x18
		::System::Int32 IntVal; // 0x1C
		::MoleMole::Config::ANIM_CTRLER_PARAMS_TYPE ParamType; // 0x20
		::System::Single FloatVal; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEPEFORMANIMATORPARAM__CTOR_OFFSET))(this);
		}
	};
}
