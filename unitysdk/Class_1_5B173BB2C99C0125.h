#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1B26407BD81502D9;
class Class_2_888C59F77423C576_1;
class Class_3_C72A494A14854863;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5B173BB2C99C0125_METHOD_1_DF6C06D0A10D60C7_OFFSET UNITYSDK_OFFSET(0x128E6550)
#define CLASS_1_5B173BB2C99C0125__CTOR_OFFSET UNITYSDK_OFFSET(0x128E64D0)

inline static constexpr unsigned int Class_1_5B173BB2C99C0125_TypeDefinitionIndex = 42218;

class Class_1_5B173BB2C99C0125 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_1B26407BD81502D9*>* Field_1_0; // 0x10
	::Class_2_888C59F77423C576_1* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B173BB2C99C0125__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DF6C06D0A10D60C7(::Class_3_C72A494A14854863* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C72A494A14854863*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B173BB2C99C0125_METHOD_1_DF6C06D0A10D60C7_OFFSET))(this, a1, a2);
	}
};
