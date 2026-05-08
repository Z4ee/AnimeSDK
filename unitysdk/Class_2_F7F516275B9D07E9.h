#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EBCA2A4357C4C8BF_83.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_143.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F7F516275B9D07E9_METHOD_2_43535ED8A0DF5FF8_OFFSET UNITYSDK_OFFSET(0x130FD200)
#define CLASS_2_F7F516275B9D07E9__CTOR_OFFSET UNITYSDK_OFFSET(0x130FD160)

inline static constexpr unsigned int Class_2_F7F516275B9D07E9_TypeDefinitionIndex = 17271;

class Class_2_F7F516275B9D07E9 : public ::Class_1_EBCA2A4357C4C8BF_83
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_2_0; // 0x40

	::System::Void _ctor(::Struct_2_58DF5669875F2C66_143 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_143, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_F7F516275B9D07E9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_43535ED8A0DF5FF8()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7F516275B9D07E9_METHOD_2_43535ED8A0DF5FF8_OFFSET))(this);
	}
};
