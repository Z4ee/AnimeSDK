#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1B26407BD81502D9;
class Class_2_888C59F77423C576_2;
class Class_3_C72A494A14854863;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7FF6398BD94D0866_METHOD_1_91C59AF7A729C854_OFFSET UNITYSDK_OFFSET(0x12B7F2D0)
#define CLASS_1_7FF6398BD94D0866__CTOR_OFFSET UNITYSDK_OFFSET(0x12B7F250)

inline static constexpr unsigned int Class_1_7FF6398BD94D0866_TypeDefinitionIndex = 46899;

class Class_1_7FF6398BD94D0866 : public ::System::Object
{
public:
	::Class_2_888C59F77423C576_2* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_1B26407BD81502D9*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF6398BD94D0866__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_91C59AF7A729C854(::Class_3_C72A494A14854863* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C72A494A14854863*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7FF6398BD94D0866_METHOD_1_91C59AF7A729C854_OFFSET))(this, a1, a2);
	}
};
