#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_386;
namespace System { class String; }

#define CLASS_1_416282EBAAF3DF5F__CTOR_OFFSET UNITYSDK_OFFSET(0x13920310)

inline static constexpr unsigned int Class_1_416282EBAAF3DF5F_TypeDefinitionIndex = 59779;

class Class_1_416282EBAAF3DF5F : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_386* Field_1_2; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_416282EBAAF3DF5F__CTOR_OFFSET))(this);
	}
};
