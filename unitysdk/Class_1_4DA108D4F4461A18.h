#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_4DA108D4F4461A18_METHOD_1_92A43999FC3FD92F_OFFSET UNITYSDK_OFFSET(0x1B50E9E0)
#define CLASS_1_4DA108D4F4461A18__CTOR_OFFSET UNITYSDK_OFFSET(0x1B50EC70)

inline static constexpr unsigned int Class_1_4DA108D4F4461A18_TypeDefinitionIndex = 14548;

class Class_1_4DA108D4F4461A18 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30
	::System::String* Field_1_5; // 0x38
	::System::String* Field_1_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DA108D4F4461A18__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_92A43999FC3FD92F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_4DA108D4F4461A18*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_4DA108D4F4461A18*&))((::PBYTE)hIl2Cpp + CLASS_1_4DA108D4F4461A18_METHOD_1_92A43999FC3FD92F_OFFSET))(a1, a2);
	}
};
