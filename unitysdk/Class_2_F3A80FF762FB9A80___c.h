#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2670985A37556FEA;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_F3A80FF762FB9A80___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x138C8050)
#define CLASS_2_F3A80FF762FB9A80___C__COMPILE_B__4_0_OFFSET UNITYSDK_OFFSET(0x138C80A0)
#define CLASS_2_F3A80FF762FB9A80___C__CTOR_OFFSET UNITYSDK_OFFSET(0x138C8090)

inline static constexpr unsigned int Class_2_F3A80FF762FB9A80___c_TypeDefinitionIndex = 61052;

class Class_2_F3A80FF762FB9A80___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_2670985A37556FEA*, ::System::Boolean>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::Class_1_2670985A37556FEA*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F3A80FF762FB9A80___c_TypeDefinitionIndex)->GetStaticField(0x62FD0);
	}
	static ::Class_2_F3A80FF762FB9A80___c** StaticGet___9()
	{
		return (::Class_2_F3A80FF762FB9A80___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F3A80FF762FB9A80___c_TypeDefinitionIndex)->GetStaticField(0x62FD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F3A80FF762FB9A80___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3A80FF762FB9A80___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _Compile_b__4_0(::Class_1_2670985A37556FEA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2670985A37556FEA*))((::PBYTE)hIl2Cpp + CLASS_2_F3A80FF762FB9A80___C__COMPILE_B__4_0_OFFSET))(this, a1);
	}
};
