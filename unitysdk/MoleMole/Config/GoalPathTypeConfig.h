#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D3876C00D1C08DCB.h"
#include "unitysdk/Enum_3_F27E25827C684939.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_GOALPATHTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xE97D7B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int GoalPathTypeConfig_TypeDefinitionIndex = 66512;

	class GoalPathTypeConfig : public ::System::Object
	{
	public:
		::Enum_3_F27E25827C684939 Key; // 0x10
		::System::String* EffectPatternKey; // 0x18
		::Enum_3_D3876C00D1C08DCB UpdateMode; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GOALPATHTYPECONFIG__CTOR_OFFSET))(this);
		}
	};
}
