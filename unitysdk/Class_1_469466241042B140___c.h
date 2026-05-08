#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B0BA31736A3CCA24;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_469466241042B140___C_METHOD_1_03C39BB8E09A79D2_OFFSET UNITYSDK_OFFSET(0x14151E40)
#define CLASS_1_469466241042B140___C_METHOD_1_B0BEE3C610C65DF9_OFFSET UNITYSDK_OFFSET(0x14151E60)
#define CLASS_1_469466241042B140___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14151DF0)
#define CLASS_1_469466241042B140___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14151E30)

inline static constexpr unsigned int Class_1_469466241042B140___c_TypeDefinitionIndex = 39575;

class Class_1_469466241042B140___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_B0BA31736A3CCA24*, ::System::Boolean>** StaticGet___9__51_1()
	{
		return (::System::Func_2<::Class_1_B0BA31736A3CCA24*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_469466241042B140___c_TypeDefinitionIndex)->GetStaticField(0x30E40);
	}
	static ::Class_1_469466241042B140___c** StaticGet___9()
	{
		return (::Class_1_469466241042B140___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_469466241042B140___c_TypeDefinitionIndex)->GetStaticField(0x30E48);
	}
	static ::System::Func_2<::Class_1_B0BA31736A3CCA24*, ::System::Boolean>** StaticGet___9__51_0()
	{
		return (::System::Func_2<::Class_1_B0BA31736A3CCA24*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_469466241042B140___c_TypeDefinitionIndex)->GetStaticField(0x30E50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_03C39BB8E09A79D2(::Class_1_B0BA31736A3CCA24* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B0BA31736A3CCA24*))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140___C_METHOD_1_03C39BB8E09A79D2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B0BEE3C610C65DF9(::Class_1_B0BA31736A3CCA24* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B0BA31736A3CCA24*))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140___C_METHOD_1_B0BEE3C610C65DF9_OFFSET))(this, a1);
	}
};
