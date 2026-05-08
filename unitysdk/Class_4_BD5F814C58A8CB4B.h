#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_BD5F814C58A8CB4B_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x13FAA8D0)
#define CLASS_4_BD5F814C58A8CB4B_METHOD_4_298E03B6F4208E39_OFFSET UNITYSDK_OFFSET(0x13FAA460)
#define CLASS_4_BD5F814C58A8CB4B_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x13FAA380)
#define CLASS_4_BD5F814C58A8CB4B__CTOR_OFFSET UNITYSDK_OFFSET(0x13FAA7E0)

inline static constexpr unsigned int Class_4_BD5F814C58A8CB4B_TypeDefinitionIndex = 78817;

class Class_4_BD5F814C58A8CB4B : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BD5F814C58A8CB4B__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BD5F814C58A8CB4B_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_298E03B6F4208E39(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_BD5F814C58A8CB4B_METHOD_4_298E03B6F4208E39_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BD5F814C58A8CB4B_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
