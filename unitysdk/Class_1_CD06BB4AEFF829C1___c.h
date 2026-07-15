#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_621BFCA8F4CDD0A1;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_CD06BB4AEFF829C1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16DA5030)
#define CLASS_1_CD06BB4AEFF829C1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16DA5070)
#define CLASS_1_CD06BB4AEFF829C1___C__ISTOOUNIFORM_B__16_0_OFFSET UNITYSDK_OFFSET(0x16DA50A0)
#define CLASS_1_CD06BB4AEFF829C1___C__TRYGENERATE_B__13_0_OFFSET UNITYSDK_OFFSET(0x16DA5080)

inline static constexpr unsigned int Class_1_CD06BB4AEFF829C1___c_TypeDefinitionIndex = 73947;

class Class_1_CD06BB4AEFF829C1___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Single, ::System::Single>** StaticGet___9__16_0()
	{
		return (::System::Func_2<::System::Single, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CD06BB4AEFF829C1___c_TypeDefinitionIndex)->GetStaticField(0x46980);
	}
	static ::System::Func_2<::Class_1_621BFCA8F4CDD0A1*, ::System::Single>** StaticGet___9__13_0()
	{
		return (::System::Func_2<::Class_1_621BFCA8F4CDD0A1*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CD06BB4AEFF829C1___c_TypeDefinitionIndex)->GetStaticField(0x46988);
	}
	static ::Class_1_CD06BB4AEFF829C1___c** StaticGet___9()
	{
		return (::Class_1_CD06BB4AEFF829C1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CD06BB4AEFF829C1___c_TypeDefinitionIndex)->GetStaticField(0x46990);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CD06BB4AEFF829C1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD06BB4AEFF829C1___C__CTOR_OFFSET))(this);
	}

	::System::Single _TryGenerate_b__13_0(::Class_1_621BFCA8F4CDD0A1* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_621BFCA8F4CDD0A1*))((::PBYTE)hIl2Cpp + CLASS_1_CD06BB4AEFF829C1___C__TRYGENERATE_B__13_0_OFFSET))(this, a1);
	}

	::System::Single _IsTooUniform_b__16_0(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CD06BB4AEFF829C1___C__ISTOOUNIFORM_B__16_0_OFFSET))(this, a1);
	}
};
