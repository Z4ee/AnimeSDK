#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_7D37214C59F794F1_METHOD_1_13A4856CD0BBDB3F_OFFSET UNITYSDK_OFFSET(0x103CE5D0)
#define CLASS_1_7D37214C59F794F1__CTOR_OFFSET UNITYSDK_OFFSET(0x103CE780)

inline static constexpr unsigned int Class_1_7D37214C59F794F1_TypeDefinitionIndex = 13453;

class Class_1_7D37214C59F794F1 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D37214C59F794F1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_13A4856CD0BBDB3F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_7D37214C59F794F1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_7D37214C59F794F1*&))((::PBYTE)hIl2Cpp + CLASS_1_7D37214C59F794F1_METHOD_1_13A4856CD0BBDB3F_OFFSET))(a1, a2);
	}
};
