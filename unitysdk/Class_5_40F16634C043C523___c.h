#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_330;
namespace System { template <typename T> class Func_1; }

#define CLASS_5_40F16634C043C523___C_METHOD_1_3E3C55BC34CB43AC_OFFSET UNITYSDK_OFFSET(0x17863FB0)
#define CLASS_5_40F16634C043C523___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17863F60)
#define CLASS_5_40F16634C043C523___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17863FA0)

inline static constexpr unsigned int Class_5_40F16634C043C523___c_TypeDefinitionIndex = 44677;

class Class_5_40F16634C043C523___c : public ::System::Object
{
public:
	static ::System::Func_1<::Il2CppArray<::Class_0_16E4307DCC419505_330*>*>** StaticGet___9__19_0()
	{
		return (::System::Func_1<::Il2CppArray<::Class_0_16E4307DCC419505_330*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_40F16634C043C523___c_TypeDefinitionIndex)->GetStaticField(0x38950);
	}
	static ::Class_5_40F16634C043C523___c** StaticGet___9()
	{
		return (::Class_5_40F16634C043C523___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_40F16634C043C523___c_TypeDefinitionIndex)->GetStaticField(0x38958);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_40F16634C043C523___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_40F16634C043C523___C__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::Class_0_16E4307DCC419505_330*>* Method_1_3E3C55BC34CB43AC()
	{
		return ((::Il2CppArray<::Class_0_16E4307DCC419505_330*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_40F16634C043C523___C_METHOD_1_3E3C55BC34CB43AC_OFFSET))(this);
	}
};
