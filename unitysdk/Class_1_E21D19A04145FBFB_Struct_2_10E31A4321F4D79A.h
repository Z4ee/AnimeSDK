#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class IRogueTournBuildRefDataItem; }
namespace System { class String; }

inline static constexpr unsigned int Class_1_E21D19A04145FBFB_Struct_2_10E31A4321F4D79A_TypeDefinitionIndex = 64802;

struct alignas(8) Class_1_E21D19A04145FBFB_Struct_2_10E31A4321F4D79A
{
	::System::String* Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x18
	::RPG::Client::IRogueTournBuildRefDataItem* Field_2_2; // 0x20
	::System::Guid Field_2_3; // 0x28
};
