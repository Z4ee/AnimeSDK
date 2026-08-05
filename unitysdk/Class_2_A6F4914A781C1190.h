#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_A6F4914A781C1190_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1F436B90)
#define CLASS_2_A6F4914A781C1190_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1F436BA0)

inline static constexpr unsigned int Class_2_A6F4914A781C1190_TypeDefinitionIndex = 19072;

class Class_2_A6F4914A781C1190 : public ::System::Attribute
{
public:
	::System::String* Field_2_0; // 0x10
	::System::Boolean Field_2_7; // 0x18

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6F4914A781C1190_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6F4914A781C1190_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
