#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_634284739E90CAFA;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_8D4C99F920C1E42C_1___C__APPLY_B__1_0_OFFSET UNITYSDK_OFFSET(0x8DC3190)
#define CLASS_1_8D4C99F920C1E42C_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8DC3140)
#define CLASS_1_8D4C99F920C1E42C_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8DC3180)

inline static constexpr unsigned int Class_1_8D4C99F920C1E42C_1___c_TypeDefinitionIndex = 63307;

class Class_1_8D4C99F920C1E42C_1___c : public ::System::Object
{
public:
	static ::Class_1_8D4C99F920C1E42C_1___c** StaticGet___9()
	{
		return (::Class_1_8D4C99F920C1E42C_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D4C99F920C1E42C_1___c_TypeDefinitionIndex)->GetStaticField(0x175E0);
	}
	static ::System::Func_2<::Class_1_634284739E90CAFA*, ::System::Single>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::Class_1_634284739E90CAFA*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D4C99F920C1E42C_1___c_TypeDefinitionIndex)->GetStaticField(0x175E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D4C99F920C1E42C_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D4C99F920C1E42C_1___C__CTOR_OFFSET))(this);
	}

	::System::Single _Apply_b__1_0(::Class_1_634284739E90CAFA* b)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_634284739E90CAFA*))((::PBYTE)hIl2Cpp + CLASS_1_8D4C99F920C1E42C_1___C__APPLY_B__1_0_OFFSET))(this, b);
	}
};
