#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_570AC78C01FF8379_Class_1_D230CDD4634D4F20;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_570AC78C01FF8379___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x177DB6D0)
#define CLASS_2_570AC78C01FF8379___C__CTOR_OFFSET UNITYSDK_OFFSET(0x177DB700)
#define CLASS_2_570AC78C01FF8379___C__GET_FAILURECOUNT_B__20_0_OFFSET UNITYSDK_OFFSET(0x177DB730)
#define CLASS_2_570AC78C01FF8379___C__GET_FINISHCOUNT_B__22_0_OFFSET UNITYSDK_OFFSET(0x177DB750)
#define CLASS_2_570AC78C01FF8379___C__GET_SUCCESSCOUNT_B__18_0_OFFSET UNITYSDK_OFFSET(0x177DB710)

inline static constexpr unsigned int Class_2_570AC78C01FF8379___c_TypeDefinitionIndex = 59719;

class Class_2_570AC78C01FF8379___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_2_570AC78C01FF8379_Class_1_D230CDD4634D4F20*, ::System::Boolean>** StaticGet___9__22_0()
	{
		return (::System::Func_2<::Class_2_570AC78C01FF8379_Class_1_D230CDD4634D4F20*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_570AC78C01FF8379___c_TypeDefinitionIndex)->GetStaticField(0x53740);
	}
	static ::Class_2_570AC78C01FF8379___c** StaticGet___9()
	{
		return (::Class_2_570AC78C01FF8379___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_570AC78C01FF8379___c_TypeDefinitionIndex)->GetStaticField(0x53748);
	}
	static ::System::Func_2<::Class_2_570AC78C01FF8379_Class_1_D230CDD4634D4F20*, ::System::Boolean>** StaticGet___9__20_0()
	{
		return (::System::Func_2<::Class_2_570AC78C01FF8379_Class_1_D230CDD4634D4F20*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_570AC78C01FF8379___c_TypeDefinitionIndex)->GetStaticField(0x53750);
	}
	static ::System::Func_2<::Class_2_570AC78C01FF8379_Class_1_D230CDD4634D4F20*, ::System::Boolean>** StaticGet___9__18_0()
	{
		return (::System::Func_2<::Class_2_570AC78C01FF8379_Class_1_D230CDD4634D4F20*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_570AC78C01FF8379___c_TypeDefinitionIndex)->GetStaticField(0x53758);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_570AC78C01FF8379___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_570AC78C01FF8379___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _get_SuccessCount_b__18_0(::Class_2_570AC78C01FF8379_Class_1_D230CDD4634D4F20* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_570AC78C01FF8379_Class_1_D230CDD4634D4F20*))((::PBYTE)hIl2Cpp + CLASS_2_570AC78C01FF8379___C__GET_SUCCESSCOUNT_B__18_0_OFFSET))(this, a1);
	}

	::System::Boolean _get_FailureCount_b__20_0(::Class_2_570AC78C01FF8379_Class_1_D230CDD4634D4F20* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_570AC78C01FF8379_Class_1_D230CDD4634D4F20*))((::PBYTE)hIl2Cpp + CLASS_2_570AC78C01FF8379___C__GET_FAILURECOUNT_B__20_0_OFFSET))(this, a1);
	}

	::System::Boolean _get_FinishCount_b__22_0(::Class_2_570AC78C01FF8379_Class_1_D230CDD4634D4F20* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_570AC78C01FF8379_Class_1_D230CDD4634D4F20*))((::PBYTE)hIl2Cpp + CLASS_2_570AC78C01FF8379___C__GET_FINISHCOUNT_B__22_0_OFFSET))(this, a1);
	}
};
