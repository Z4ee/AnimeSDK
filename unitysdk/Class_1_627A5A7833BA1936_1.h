#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B8B85A043AA8FDCB.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_627A5A7833BA1936_1_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x11EA6E00)
#define CLASS_1_627A5A7833BA1936_1_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x11EA6E10)
#define CLASS_1_627A5A7833BA1936_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x11EA6D40)
#define CLASS_1_627A5A7833BA1936_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11EA6D30)

inline static constexpr unsigned int Class_1_627A5A7833BA1936_1_TypeDefinitionIndex = 48392;

class Class_1_627A5A7833BA1936_1 : public ::System::Object
{
public:
	static ::Class_1_627A5A7833BA1936_1** StaticGet_Field_1_6()
	{
		return (::Class_1_627A5A7833BA1936_1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_627A5A7833BA1936_1_TypeDefinitionIndex)->GetStaticField(0x38B80);
	}
	static ::Class_1_627A5A7833BA1936_1** StaticGet_Field_1_7()
	{
		return (::Class_1_627A5A7833BA1936_1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_627A5A7833BA1936_1_TypeDefinitionIndex)->GetStaticField(0x38B88);
	}
	static ::Class_1_627A5A7833BA1936_1** StaticGet_Field_1_0()
	{
		return (::Class_1_627A5A7833BA1936_1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_627A5A7833BA1936_1_TypeDefinitionIndex)->GetStaticField(0x38B90);
	}
	::Enum_3_B8B85A043AA8FDCB Field_1_5; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_627A5A7833BA1936_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_627A5A7833BA1936_1__CCTOR_OFFSET))();
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_B8B85A043AA8FDCB a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_B8B85A043AA8FDCB))((::PBYTE)hIl2Cpp + CLASS_1_627A5A7833BA1936_1_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Enum_3_B8B85A043AA8FDCB Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_B8B85A043AA8FDCB(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_627A5A7833BA1936_1_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}
};
