#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_1_90889A2023AB884E;

#define CLASS_1_DC40F265DBC51CAA_METHOD_1_8339EF96C271882B_OFFSET UNITYSDK_OFFSET(0xAAE9A50)
#define CLASS_1_DC40F265DBC51CAA__CTOR_OFFSET UNITYSDK_OFFSET(0xAAE9AC0)

inline static constexpr unsigned int Class_1_DC40F265DBC51CAA_TypeDefinitionIndex = 58582;

class Class_1_DC40F265DBC51CAA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC40F265DBC51CAA__CTOR_OFFSET))(this);
	}

	::Class_1_90889A2023AB884E* Method_1_8339EF96C271882B(::Struct_2_AAD4F4215611A944& a1)
	{
		return ((::Class_1_90889A2023AB884E*(*)(::PVOID, ::Struct_2_AAD4F4215611A944&))((::PBYTE)hIl2Cpp + CLASS_1_DC40F265DBC51CAA_METHOD_1_8339EF96C271882B_OFFSET))(this, a1);
	}
};
