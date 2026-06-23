#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_256.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }

#define CLASS_1_5DA2E7556103D5A3_381__CTOR_OFFSET UNITYSDK_OFFSET(0x185BEF70)

inline static constexpr unsigned int Class_1_5DA2E7556103D5A3_381_TypeDefinitionIndex = 15967;

class Class_1_5DA2E7556103D5A3_381 : public ::System::Object
{
public:
	::System::String* Field_1_7; // 0x10
	::Class_0_16E4307DCC419505_7* Field_1_1; // 0x18
	::System::String* Field_1_12; // 0x20
	::Struct_2_58DF5669875F2C66_256 Field_1_0; // 0x28
	::System::Int32 Field_1_6; // 0x38
	::System::Boolean Field_1_2; // 0x3C
	::System::Byte Field_1_13; // 0x3D
	::System::Byte Field_1_4; // 0x3E
	::System::Byte Field_1_3; // 0x3F
	::System::Int32 Field_1_11; // 0x40
	::System::Int32 Field_1_10; // 0x44
	::System::Int32 Field_1_8; // 0x48
	::System::Int32 Field_1_9; // 0x4C
	::System::Int32 Field_1_14; // 0x50
	::System::Int32 Field_1_5; // 0x54

	::System::Void _ctor(::Struct_2_58DF5669875F2C66_256 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_256, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_5DA2E7556103D5A3_381__CTOR_OFFSET))(this, a1, a2);
	}
};
