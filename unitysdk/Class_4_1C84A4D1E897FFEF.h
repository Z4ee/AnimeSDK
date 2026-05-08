#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_1C84A4D1E897FFEF_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1134FB70)
#define CLASS_4_1C84A4D1E897FFEF_METHOD_4_17040E9C6A729799_OFFSET UNITYSDK_OFFSET(0x1134FCC0)
#define CLASS_4_1C84A4D1E897FFEF_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x11350160)
#define CLASS_4_1C84A4D1E897FFEF__CTOR_OFFSET UNITYSDK_OFFSET(0x11350030)

inline static constexpr unsigned int Class_4_1C84A4D1E897FFEF_TypeDefinitionIndex = 47666;

class Class_4_1C84A4D1E897FFEF : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_0; // 0x28
	::Class_4_8D3E479B491881B3<::System::Single>* Field_4_1; // 0x30
	::Class_4_8D3E479B491881B3<::System::Single>* Field_4_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1C84A4D1E897FFEF__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1C84A4D1E897FFEF_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_17040E9C6A729799(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_1C84A4D1E897FFEF_METHOD_4_17040E9C6A729799_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1C84A4D1E897FFEF_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
