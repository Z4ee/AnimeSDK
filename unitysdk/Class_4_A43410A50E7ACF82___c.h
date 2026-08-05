#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_72BDD67FEA972F1C;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_4_A43410A50E7ACF82___C_METHOD_1_B237E7A09EA29A83_OFFSET UNITYSDK_OFFSET(0xBDA0310)
#define CLASS_4_A43410A50E7ACF82___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBDA02C0)
#define CLASS_4_A43410A50E7ACF82___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBDA0300)

inline static constexpr unsigned int Class_4_A43410A50E7ACF82___c_TypeDefinitionIndex = 75758;

class Class_4_A43410A50E7ACF82___c : public ::System::Object
{
public:
	static ::Class_4_A43410A50E7ACF82___c** StaticGet___9()
	{
		return (::Class_4_A43410A50E7ACF82___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_A43410A50E7ACF82___c_TypeDefinitionIndex)->GetStaticField(0x38550);
	}
	static ::System::Func_2<::Class_2_72BDD67FEA972F1C*, ::System::Boolean>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::Class_2_72BDD67FEA972F1C*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_A43410A50E7ACF82___c_TypeDefinitionIndex)->GetStaticField(0x38558);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_A43410A50E7ACF82___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A43410A50E7ACF82___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_B237E7A09EA29A83(::Class_2_72BDD67FEA972F1C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_72BDD67FEA972F1C*))((::PBYTE)hIl2Cpp + CLASS_4_A43410A50E7ACF82___C_METHOD_1_B237E7A09EA29A83_OFFSET))(this, a1);
	}
};
