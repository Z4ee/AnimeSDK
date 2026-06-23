#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_6.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_12.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }

#define CLASS_2_9340269FE9472DBA__CTOR_OFFSET UNITYSDK_OFFSET(0x14EFE270)

inline static constexpr unsigned int Class_2_9340269FE9472DBA_TypeDefinitionIndex = 8931;

class Class_2_9340269FE9472DBA : public ::Class_1_5DA2E7556103D5A3_6
{
public:
	::System::String* Field_2_2; // 0x70
	::System::String* Field_2_0; // 0x78
	::System::String* Field_2_1; // 0x80
	::Il2CppArray<::System::String*>* Field_2_3; // 0x88

	::System::Void _ctor(::Struct_2_58DF5669875F2C66_12 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_12, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_9340269FE9472DBA__CTOR_OFFSET))(this, a1, a2);
	}
};
