#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7EDAD39E38914BC8;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_1FE4CD675C5ACADB___C_METHOD_1_03C39BB8E09A79D2_OFFSET UNITYSDK_OFFSET(0x12B81510)
#define CLASS_3_1FE4CD675C5ACADB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B814C0)
#define CLASS_3_1FE4CD675C5ACADB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12B81500)

inline static constexpr unsigned int Class_3_1FE4CD675C5ACADB___c_TypeDefinitionIndex = 70221;

class Class_3_1FE4CD675C5ACADB___c : public ::System::Object
{
public:
	static ::Class_3_1FE4CD675C5ACADB___c** StaticGet___9()
	{
		return (::Class_3_1FE4CD675C5ACADB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1FE4CD675C5ACADB___c_TypeDefinitionIndex)->GetStaticField(0x3B050);
	}
	static ::System::Func_2<::Class_1_7EDAD39E38914BC8*, ::System::Boolean>** StaticGet___9__49_0()
	{
		return (::System::Func_2<::Class_1_7EDAD39E38914BC8*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1FE4CD675C5ACADB___c_TypeDefinitionIndex)->GetStaticField(0x3B058);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_1FE4CD675C5ACADB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1FE4CD675C5ACADB___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_03C39BB8E09A79D2(::Class_1_7EDAD39E38914BC8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7EDAD39E38914BC8*))((::PBYTE)hIl2Cpp + CLASS_3_1FE4CD675C5ACADB___C_METHOD_1_03C39BB8E09A79D2_OFFSET))(this, a1);
	}
};
