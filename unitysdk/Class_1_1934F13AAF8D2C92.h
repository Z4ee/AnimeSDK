#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_1934F13AAF8D2C92_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1C2A1760)
#define CLASS_1_1934F13AAF8D2C92_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C2A12E0)
#define CLASS_1_1934F13AAF8D2C92__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2A1750)

inline static constexpr unsigned int Class_1_1934F13AAF8D2C92_TypeDefinitionIndex = 88520;

class Class_1_1934F13AAF8D2C92 : public ::System::Object
{
public:
	::System::UInt32 Field_1_4; // 0x10
	::System::UInt32 Field_1_1; // 0x14
	::System::UInt32 Field_1_3; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::System::UInt32 Field_1_5; // 0x20
	::System::UInt32 Field_1_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1934F13AAF8D2C92__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1934F13AAF8D2C92_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1934F13AAF8D2C92_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
