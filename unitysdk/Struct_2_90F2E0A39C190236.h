#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_90F2E0A39C190236_Enum_3_B8C6436F820DD412.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config { class ConfigTurnBasePreviewEffect; }
namespace System { class String; }

#define STRUCT_2_90F2E0A39C190236__CTOR_OFFSET UNITYSDK_OFFSET(0x80A7F0)

inline static constexpr unsigned int Struct_2_90F2E0A39C190236_TypeDefinitionIndex = 83394;

struct alignas(8) Struct_2_90F2E0A39C190236
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::String* Field_2_2; // 0x18
	::Struct_2_90F2E0A39C190236_Enum_3_B8C6436F820DD412 Field_2_3; // 0x20
	::System::Single Field_2_4; // 0x24
	::System::Boolean Field_2_5; // 0x28
	::System::Single Field_2_6; // 0x2C
	::MoleMole::Config::ConfigTurnBasePreviewEffect* Field_2_7; // 0x30

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_90F2E0A39C190236__CTOR_OFFSET))(this, a1);
	}
};
