#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_49A0528AE6CB5266;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_675DF7FCD18C0C05___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC2C3960)
#define CLASS_1_675DF7FCD18C0C05___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC2C39A0)
#define CLASS_1_675DF7FCD18C0C05___C___CTOR_B__29_0_OFFSET UNITYSDK_OFFSET(0xC2C39B0)

inline static constexpr unsigned int Class_1_675DF7FCD18C0C05___c_TypeDefinitionIndex = 79471;

class Class_1_675DF7FCD18C0C05___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_49A0528AE6CB5266*, ::System::Boolean>** StaticGet___9__29_0()
	{
		return (::System::Func_2<::Class_1_49A0528AE6CB5266*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_675DF7FCD18C0C05___c_TypeDefinitionIndex)->GetStaticField(0x6FD20);
	}
	static ::Class_1_675DF7FCD18C0C05___c** StaticGet___9()
	{
		return (::Class_1_675DF7FCD18C0C05___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_675DF7FCD18C0C05___c_TypeDefinitionIndex)->GetStaticField(0x6FD28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_675DF7FCD18C0C05___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_675DF7FCD18C0C05___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __ctor_b__29_0(::Class_1_49A0528AE6CB5266* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_49A0528AE6CB5266*))((::PBYTE)hIl2Cpp + CLASS_1_675DF7FCD18C0C05___C___CTOR_B__29_0_OFFSET))(this, a1);
	}
};
