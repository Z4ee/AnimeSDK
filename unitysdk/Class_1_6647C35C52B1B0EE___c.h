#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FD98D46D70D29B5D;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_6647C35C52B1B0EE___C_METHOD_1_8043D7822E94644D_OFFSET UNITYSDK_OFFSET(0x12E92520)
#define CLASS_1_6647C35C52B1B0EE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12E924D0)
#define CLASS_1_6647C35C52B1B0EE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12E92510)

inline static constexpr unsigned int Class_1_6647C35C52B1B0EE___c_TypeDefinitionIndex = 87469;

class Class_1_6647C35C52B1B0EE___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_FD98D46D70D29B5D*>** StaticGet___9__14_0()
	{
		return (::System::Comparison_1<::Class_1_FD98D46D70D29B5D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6647C35C52B1B0EE___c_TypeDefinitionIndex)->GetStaticField(0x51B00);
	}
	static ::Class_1_6647C35C52B1B0EE___c** StaticGet___9()
	{
		return (::Class_1_6647C35C52B1B0EE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6647C35C52B1B0EE___c_TypeDefinitionIndex)->GetStaticField(0x51B08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6647C35C52B1B0EE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6647C35C52B1B0EE___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_8043D7822E94644D(::Class_1_FD98D46D70D29B5D* a1, ::Class_1_FD98D46D70D29B5D* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_FD98D46D70D29B5D*, ::Class_1_FD98D46D70D29B5D*))((::PBYTE)hIl2Cpp + CLASS_1_6647C35C52B1B0EE___C_METHOD_1_8043D7822E94644D_OFFSET))(this, a1, a2);
	}
};
