#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_409;
namespace System { class String; }

#define CLASS_1_416282EBAAF3DF5F__CTOR_OFFSET UNITYSDK_OFFSET(0x1819B670)

inline static constexpr unsigned int Class_1_416282EBAAF3DF5F_TypeDefinitionIndex = 48677;

class Class_1_416282EBAAF3DF5F : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_409* Field_1_2; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_416282EBAAF3DF5F__CTOR_OFFSET))(this);
	}
};
