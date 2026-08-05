#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_945ACFB1FEBC7A2C_3_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x141DA590)
#define CLASS_1_945ACFB1FEBC7A2C_3__CTOR_OFFSET UNITYSDK_OFFSET(0x141DA580)

inline static constexpr unsigned int Class_1_945ACFB1FEBC7A2C_3_TypeDefinitionIndex = 50944;

class Class_1_945ACFB1FEBC7A2C_3 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_945ACFB1FEBC7A2C_3_TypeDefinitionIndex)->GetStaticField(0x48100);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_3__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_3_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}
};
