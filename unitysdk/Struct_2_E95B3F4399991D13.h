#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TeleportSelectionType.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config { class ConfigTeleportSelectionTrait; }
namespace System { class String; }

#define STRUCT_2_E95B3F4399991D13_METHOD_2_2A0B59DC0FFB23E8_OFFSET UNITYSDK_OFFSET(0x13B71900)

inline static constexpr unsigned int Struct_2_E95B3F4399991D13_TypeDefinitionIndex = 71336;

struct alignas(8) Struct_2_E95B3F4399991D13
{
	::MoleMole::Config::TeleportSelectionType Field_2_2; // 0x10
	::System::Single Field_2_1; // 0x14
	::System::Single Field_2_0; // 0x18
	::System::Single Field_2_7; // 0x1C
	::System::Boolean Field_2_6; // 0x20
	::System::String* Field_2_5; // 0x28
	::System::String* Field_2_4; // 0x30

	static ::Struct_2_E95B3F4399991D13 Method_2_2A0B59DC0FFB23E8(::MoleMole::Config::ConfigTeleportSelectionTrait* a1)
	{
		return ((::Struct_2_E95B3F4399991D13(*)(::MoleMole::Config::ConfigTeleportSelectionTrait*))((::PBYTE)hIl2Cpp + STRUCT_2_E95B3F4399991D13_METHOD_2_2A0B59DC0FFB23E8_OFFSET))(a1);
	}
};
