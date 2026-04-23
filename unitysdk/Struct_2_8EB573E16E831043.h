#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_8EB573E16E831043_METHOD_2_0D3CEA11284B35A1_OFFSET UNITYSDK_OFFSET(0x161EA70)

inline static constexpr unsigned int Struct_2_8EB573E16E831043_TypeDefinitionIndex = 51825;

struct alignas(8) Struct_2_8EB573E16E831043
{
	::RPG::GameCore::FixPoint Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18
	::System::Boolean Field_2_2; // 0x19
	::System::Int32 Field_2_3; // 0x1C
	::System::Int32 Field_2_4; // 0x20
	::System::Int32 Field_2_5; // 0x24

	::System::Int32 Method_2_0D3CEA11284B35A1(::Struct_2_8EB573E16E831043 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_8EB573E16E831043))((::PBYTE)hIl2Cpp + STRUCT_2_8EB573E16E831043_METHOD_2_0D3CEA11284B35A1_OFFSET))(this, a1);
	}
};
