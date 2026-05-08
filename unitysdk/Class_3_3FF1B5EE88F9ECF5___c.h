#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_4_B39E1AA89D98DED2;
class Class_4_BB83D219B093AD9E;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_3FF1B5EE88F9ECF5___C_METHOD_1_3FDF4D8D4A89A0F1_OFFSET UNITYSDK_OFFSET(0x153784B0)
#define CLASS_3_3FF1B5EE88F9ECF5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15378460)
#define CLASS_3_3FF1B5EE88F9ECF5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x153784A0)

inline static constexpr unsigned int Class_3_3FF1B5EE88F9ECF5___c_TypeDefinitionIndex = 46505;

class Class_3_3FF1B5EE88F9ECF5___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_4_BB83D219B093AD9E*, ::Class_4_B39E1AA89D98DED2*>** StaticGet___9__2_0()
	{
		return (::System::Action_2<::Class_4_BB83D219B093AD9E*, ::Class_4_B39E1AA89D98DED2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_3FF1B5EE88F9ECF5___c_TypeDefinitionIndex)->GetStaticField(0x2B8D0);
	}
	static ::Class_3_3FF1B5EE88F9ECF5___c** StaticGet___9()
	{
		return (::Class_3_3FF1B5EE88F9ECF5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_3FF1B5EE88F9ECF5___c_TypeDefinitionIndex)->GetStaticField(0x2B8D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_3FF1B5EE88F9ECF5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FF1B5EE88F9ECF5___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3FDF4D8D4A89A0F1(::Class_4_BB83D219B093AD9E* a1, ::Class_4_B39E1AA89D98DED2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_BB83D219B093AD9E*, ::Class_4_B39E1AA89D98DED2*))((::PBYTE)hIl2Cpp + CLASS_3_3FF1B5EE88F9ECF5___C_METHOD_1_3FDF4D8D4A89A0F1_OFFSET))(this, a1, a2);
	}
};
