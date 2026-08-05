#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_181;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_604149159BD159AA___C_METHOD_1_62F4D849B2372B48_OFFSET UNITYSDK_OFFSET(0x15654DD0)
#define CLASS_2_604149159BD159AA___C_METHOD_1_84AE6C9F54D8E829_OFFSET UNITYSDK_OFFSET(0x15654DA0)
#define CLASS_2_604149159BD159AA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15654D50)
#define CLASS_2_604149159BD159AA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15654D90)

inline static constexpr unsigned int Class_2_604149159BD159AA___c_TypeDefinitionIndex = 64089;

class Class_2_604149159BD159AA___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_0_16E4307DCC419505_181*, ::System::Int64>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_181*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_604149159BD159AA___c_TypeDefinitionIndex)->GetStaticField(0x39100);
	}
	static ::Class_2_604149159BD159AA___c** StaticGet___9()
	{
		return (::Class_2_604149159BD159AA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_604149159BD159AA___c_TypeDefinitionIndex)->GetStaticField(0x39108);
	}
	static ::System::Func_2<::Class_0_16E4307DCC419505_181*, ::System::Boolean>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_181*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_604149159BD159AA___c_TypeDefinitionIndex)->GetStaticField(0x39110);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_604149159BD159AA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_604149159BD159AA___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_84AE6C9F54D8E829(::Class_0_16E4307DCC419505_181* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_181*))((::PBYTE)hIl2Cpp + CLASS_2_604149159BD159AA___C_METHOD_1_84AE6C9F54D8E829_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_62F4D849B2372B48(::Class_0_16E4307DCC419505_181* a1)
	{
		return ((::System::Int64(*)(::PVOID, ::Class_0_16E4307DCC419505_181*))((::PBYTE)hIl2Cpp + CLASS_2_604149159BD159AA___C_METHOD_1_62F4D849B2372B48_OFFSET))(this, a1);
	}
};
