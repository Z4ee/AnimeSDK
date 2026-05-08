#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_ATTACKPATTERNBINDANIMATORSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x186A8C60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AttackPatternBindAnimatorState_TypeDefinitionIndex = 82883;

	class AttackPatternBindAnimatorState : public ::System::Object
	{
	public:
		::System::String* animatorStateName; // 0x10
		::System::Int32 layerIndex; // 0x18
		::System::Int32 StartFrame; // 0x1C
		::System::Int32 EndFrame; // 0x20
		::System::Boolean MaxEndFrame; // 0x24
		::System::Boolean MaxStartFrame; // 0x25

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKPATTERNBINDANIMATORSTATE__CTOR_OFFSET))(this);
		}
	};
}
