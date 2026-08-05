#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_26.h"
#include "unitysdk/Struct_2_5F20C77812135856.h"

namespace System { class String; }

#define CLASS_2_0EB4ECFF861FCF7D_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1A657DB0)
#define CLASS_2_0EB4ECFF861FCF7D_METHOD_2_37181097DF5BB423_OFFSET UNITYSDK_OFFSET(0x1A657DF0)
#define CLASS_2_0EB4ECFF861FCF7D__CTOR_OFFSET UNITYSDK_OFFSET(0x1A657F40)

inline static constexpr unsigned int Class_2_0EB4ECFF861FCF7D_TypeDefinitionIndex = 40460;

class Class_2_0EB4ECFF861FCF7D : public ::Class_1_43BD383C98B4C0C5_26
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EB4ECFF861FCF7D__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EB4ECFF861FCF7D_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::Struct_2_5F20C77812135856 Method_2_37181097DF5BB423(::Struct_2_5F20C77812135856 a1)
	{
		return ((::Struct_2_5F20C77812135856(*)(::PVOID, ::Struct_2_5F20C77812135856))((::PBYTE)hIl2Cpp + CLASS_2_0EB4ECFF861FCF7D_METHOD_2_37181097DF5BB423_OFFSET))(this, a1);
	}
};
