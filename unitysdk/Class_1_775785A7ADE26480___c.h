#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FD98D46D70D29B5D;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_775785A7ADE26480___C_METHOD_1_8043D7822E94644D_OFFSET UNITYSDK_OFFSET(0x138C5FC0)
#define CLASS_1_775785A7ADE26480___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x138C5F70)
#define CLASS_1_775785A7ADE26480___C__CTOR_OFFSET UNITYSDK_OFFSET(0x138C5FB0)

inline static constexpr unsigned int Class_1_775785A7ADE26480___c_TypeDefinitionIndex = 46085;

class Class_1_775785A7ADE26480___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_FD98D46D70D29B5D*>** StaticGet___9__14_0()
	{
		return (::System::Comparison_1<::Class_1_FD98D46D70D29B5D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_775785A7ADE26480___c_TypeDefinitionIndex)->GetStaticField(0x37080);
	}
	static ::Class_1_775785A7ADE26480___c** StaticGet___9()
	{
		return (::Class_1_775785A7ADE26480___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_775785A7ADE26480___c_TypeDefinitionIndex)->GetStaticField(0x37088);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_775785A7ADE26480___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_775785A7ADE26480___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_8043D7822E94644D(::Class_1_FD98D46D70D29B5D* a1, ::Class_1_FD98D46D70D29B5D* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_FD98D46D70D29B5D*, ::Class_1_FD98D46D70D29B5D*))((::PBYTE)hIl2Cpp + CLASS_1_775785A7ADE26480___C_METHOD_1_8043D7822E94644D_OFFSET))(this, a1, a2);
	}
};
