#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_3DF34BDC901C620A_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BA7300)
#define CLASS_3_3DF34BDC901C620A_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16BA7340)
#define CLASS_3_3DF34BDC901C620A_1___C__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x16BA7350)

inline static constexpr unsigned int Class_3_3DF34BDC901C620A_1___c_TypeDefinitionIndex = 50284;

class Class_3_3DF34BDC901C620A_1___c : public ::System::Object
{
public:
	static ::Class_3_3DF34BDC901C620A_1___c** StaticGet___9()
	{
		return (::Class_3_3DF34BDC901C620A_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_3DF34BDC901C620A_1___c_TypeDefinitionIndex)->GetStaticField(0x38070);
	}
	static ::System::Func_2<::System::Int32, ::System::Single>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_3DF34BDC901C620A_1___c_TypeDefinitionIndex)->GetStaticField(0x38078);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_3DF34BDC901C620A_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3DF34BDC901C620A_1___C__CTOR_OFFSET))(this);
	}

	::System::Single _OnTaskBegin_b__1_0(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3DF34BDC901C620A_1___C__ONTASKBEGIN_B__1_0_OFFSET))(this, a1);
	}
};
