#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B8B34A7928C09909.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_627A5A7833BA1936_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x127F9840)
#define CLASS_1_627A5A7833BA1936_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x127F9830)
#define CLASS_1_627A5A7833BA1936__CCTOR_OFFSET UNITYSDK_OFFSET(0x127F9770)
#define CLASS_1_627A5A7833BA1936__CTOR_OFFSET UNITYSDK_OFFSET(0x127F9760)

inline static constexpr unsigned int Class_1_627A5A7833BA1936_TypeDefinitionIndex = 79768;

class Class_1_627A5A7833BA1936 : public ::System::Object
{
public:
	static ::Class_1_627A5A7833BA1936** StaticGet_Field_1_1()
	{
		return (::Class_1_627A5A7833BA1936**)Il2CppClass::FromTypeDefinitionIndex(Class_1_627A5A7833BA1936_TypeDefinitionIndex)->GetStaticField(0x2F930);
	}
	static ::Class_1_627A5A7833BA1936** StaticGet_Field_1_2()
	{
		return (::Class_1_627A5A7833BA1936**)Il2CppClass::FromTypeDefinitionIndex(Class_1_627A5A7833BA1936_TypeDefinitionIndex)->GetStaticField(0x2F938);
	}
	static ::Class_1_627A5A7833BA1936** StaticGet_Field_1_0()
	{
		return (::Class_1_627A5A7833BA1936**)Il2CppClass::FromTypeDefinitionIndex(Class_1_627A5A7833BA1936_TypeDefinitionIndex)->GetStaticField(0x2F940);
	}
	::Enum_3_B8B34A7928C09909 Field_1_3; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_627A5A7833BA1936__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_627A5A7833BA1936__CCTOR_OFFSET))();
	}

	::Enum_3_B8B34A7928C09909 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_B8B34A7928C09909(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_627A5A7833BA1936_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_B8B34A7928C09909 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_B8B34A7928C09909))((::PBYTE)hIl2Cpp + CLASS_1_627A5A7833BA1936_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}
};
