#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ANIM_CTRLER_PARAMS_TYPE.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_SCENEPEFORMANIMATORPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA8450)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScenePeformAnimatorParam_TypeDefinitionIndex = 69692;

	class ScenePeformAnimatorParam : public ::System::Object
	{
	public:
		::System::String* ParamName; // 0x10
		::System::Single FloatVal; // 0x18
		::System::Boolean BoolVal; // 0x1C
		::MoleMole::Config::ANIM_CTRLER_PARAMS_TYPE ParamType; // 0x20
		::System::Int32 IntVal; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEPEFORMANIMATORPARAM__CTOR_OFFSET))(this);
		}
	};
}
