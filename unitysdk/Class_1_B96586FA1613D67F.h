#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_D02DABCF41CDA271;

#define CLASS_1_B96586FA1613D67F_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x113E6830)
#define CLASS_1_B96586FA1613D67F_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x113E6840)
#define CLASS_1_B96586FA1613D67F__CTOR_OFFSET UNITYSDK_OFFSET(0x113E6820)

inline static constexpr unsigned int Class_1_B96586FA1613D67F_TypeDefinitionIndex = 46022;

class Class_1_B96586FA1613D67F : public ::System::Object
{
public:
	::Class_2_D02DABCF41CDA271* Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x18

	::System::Void _ctor(::Class_2_D02DABCF41CDA271* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D02DABCF41CDA271*))((::PBYTE)hIl2Cpp + CLASS_1_B96586FA1613D67F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B96586FA1613D67F_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B96586FA1613D67F_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
