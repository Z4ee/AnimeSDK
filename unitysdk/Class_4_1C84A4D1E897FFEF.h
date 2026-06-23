#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_1C84A4D1E897FFEF_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x17AFEFA0)
#define CLASS_4_1C84A4D1E897FFEF_METHOD_4_17040E9C6A729799_OFFSET UNITYSDK_OFFSET(0x17AFF0F0)
#define CLASS_4_1C84A4D1E897FFEF_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x17AFF590)
#define CLASS_4_1C84A4D1E897FFEF__CTOR_OFFSET UNITYSDK_OFFSET(0x17AFF460)

inline static constexpr unsigned int Class_4_1C84A4D1E897FFEF_TypeDefinitionIndex = 75709;

class Class_4_1C84A4D1E897FFEF : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_B51FB35349ACD175<::System::Single>* Field_4_2; // 0x28
	::Class_4_B51FB35349ACD175<::System::Single>* Field_4_1; // 0x30
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_0; // 0x38

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
