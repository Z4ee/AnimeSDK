#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_247;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_1346AD3089E2A991_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x79FAB0)
#define STRUCT_2_1346AD3089E2A991_TOSTRING_OFFSET UNITYSDK_OFFSET(0x79FAA0)

inline static constexpr unsigned int Struct_2_1346AD3089E2A991_TypeDefinitionIndex = 73831;

struct alignas(8) Struct_2_1346AD3089E2A991
{
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_247*>* Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x1C

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1346AD3089E2A991_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1346AD3089E2A991_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
