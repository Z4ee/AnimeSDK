#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_134;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_604149159BD159AA___C_METHOD_1_62F4D849B2372B48_OFFSET UNITYSDK_OFFSET(0x12475720)
#define CLASS_2_604149159BD159AA___C_METHOD_1_84AE6C9F54D8E829_OFFSET UNITYSDK_OFFSET(0x12475750)
#define CLASS_2_604149159BD159AA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x124756D0)
#define CLASS_2_604149159BD159AA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12475710)

inline static constexpr unsigned int Class_2_604149159BD159AA___c_TypeDefinitionIndex = 59499;

class Class_2_604149159BD159AA___c : public ::System::Object
{
public:
	static ::Class_2_604149159BD159AA___c** StaticGet___9()
	{
		return (::Class_2_604149159BD159AA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_604149159BD159AA___c_TypeDefinitionIndex)->GetStaticField(0x2BB20);
	}
	static ::System::Func_2<::Class_0_16E4307DCC419505_134*, ::System::Int64>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_134*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_604149159BD159AA___c_TypeDefinitionIndex)->GetStaticField(0x2BB28);
	}
	static ::System::Func_2<::Class_0_16E4307DCC419505_134*, ::System::Boolean>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_134*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_604149159BD159AA___c_TypeDefinitionIndex)->GetStaticField(0x2BB30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_604149159BD159AA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_604149159BD159AA___C__CTOR_OFFSET))(this);
	}

	::System::Int64 Method_1_62F4D849B2372B48(::Class_0_16E4307DCC419505_134* a1)
	{
		return ((::System::Int64(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + CLASS_2_604149159BD159AA___C_METHOD_1_62F4D849B2372B48_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_84AE6C9F54D8E829(::Class_0_16E4307DCC419505_134* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + CLASS_2_604149159BD159AA___C_METHOD_1_84AE6C9F54D8E829_OFFSET))(this, a1);
	}
};
