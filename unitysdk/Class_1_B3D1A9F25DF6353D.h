#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_7C9A70DC3FC57CDC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B3D1A9F25DF6353D_METHOD_1_49DBA8F4C59158DB_OFFSET UNITYSDK_OFFSET(0x162ADFD0)
#define CLASS_1_B3D1A9F25DF6353D__CTOR_OFFSET UNITYSDK_OFFSET(0x162ADFC0)

inline static constexpr unsigned int Class_1_B3D1A9F25DF6353D_TypeDefinitionIndex = 67232;

class Class_1_B3D1A9F25DF6353D : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3D1A9F25DF6353D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_49DBA8F4C59158DB(::System::Boolean a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B3D1A9F25DF6353D_METHOD_1_49DBA8F4C59158DB_OFFSET))(this, a1, a2);
	}
};
