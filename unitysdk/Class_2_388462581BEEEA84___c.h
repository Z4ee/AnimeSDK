#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_33;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_388462581BEEEA84___C_METHOD_1_7CDF583A5722841B_OFFSET UNITYSDK_OFFSET(0x1E275690)
#define CLASS_2_388462581BEEEA84___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E275640)
#define CLASS_2_388462581BEEEA84___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E275680)

inline static constexpr unsigned int Class_2_388462581BEEEA84___c_TypeDefinitionIndex = 18651;

class Class_2_388462581BEEEA84___c : public ::System::Object
{
public:
	static ::Class_2_388462581BEEEA84___c** StaticGet___9()
	{
		return (::Class_2_388462581BEEEA84___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_388462581BEEEA84___c_TypeDefinitionIndex)->GetStaticField(0x7DD0);
	}
	static ::System::Func_2<::Class_0_16E4307DCC419505_33*, ::System::Boolean>** StaticGet___9__3_4()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_33*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_388462581BEEEA84___c_TypeDefinitionIndex)->GetStaticField(0x7DD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_388462581BEEEA84___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_388462581BEEEA84___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_7CDF583A5722841B(::Class_0_16E4307DCC419505_33* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_33*))((::PBYTE)hIl2Cpp + CLASS_2_388462581BEEEA84___C_METHOD_1_7CDF583A5722841B_OFFSET))(this, a1);
	}
};
