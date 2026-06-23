#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2179242C7F6B0780;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_1FE4CD675C5ACADB___C_METHOD_1_03C39BB8E09A79D2_OFFSET UNITYSDK_OFFSET(0x1520C990)
#define CLASS_3_1FE4CD675C5ACADB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1520C940)
#define CLASS_3_1FE4CD675C5ACADB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1520C980)

inline static constexpr unsigned int Class_3_1FE4CD675C5ACADB___c_TypeDefinitionIndex = 47413;

class Class_3_1FE4CD675C5ACADB___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_2179242C7F6B0780*, ::System::Boolean>** StaticGet___9__49_0()
	{
		return (::System::Func_2<::Class_1_2179242C7F6B0780*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1FE4CD675C5ACADB___c_TypeDefinitionIndex)->GetStaticField(0x492C0);
	}
	static ::Class_3_1FE4CD675C5ACADB___c** StaticGet___9()
	{
		return (::Class_3_1FE4CD675C5ACADB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1FE4CD675C5ACADB___c_TypeDefinitionIndex)->GetStaticField(0x492C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_1FE4CD675C5ACADB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1FE4CD675C5ACADB___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_03C39BB8E09A79D2(::Class_1_2179242C7F6B0780* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2179242C7F6B0780*))((::PBYTE)hIl2Cpp + CLASS_3_1FE4CD675C5ACADB___C_METHOD_1_03C39BB8E09A79D2_OFFSET))(this, a1);
	}
};
