#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_425;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_2E2C04EBA1DFB44A___C_METHOD_1_A45C1FFEC2A58B23_OFFSET UNITYSDK_OFFSET(0x13C30310)
#define CLASS_1_2E2C04EBA1DFB44A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C302C0)
#define CLASS_1_2E2C04EBA1DFB44A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13C30300)

inline static constexpr unsigned int Class_1_2E2C04EBA1DFB44A___c_TypeDefinitionIndex = 90505;

class Class_1_2E2C04EBA1DFB44A___c : public ::System::Object
{
public:
	static ::Class_1_2E2C04EBA1DFB44A___c** StaticGet___9()
	{
		return (::Class_1_2E2C04EBA1DFB44A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2E2C04EBA1DFB44A___c_TypeDefinitionIndex)->GetStaticField(0x4A020);
	}
	static ::System::Func_2<::Class_0_16E4307DCC419505_425*, ::System::Int32>** StaticGet___9__14_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_425*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2E2C04EBA1DFB44A___c_TypeDefinitionIndex)->GetStaticField(0x4A028);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E2C04EBA1DFB44A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E2C04EBA1DFB44A___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_A45C1FFEC2A58B23(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_2E2C04EBA1DFB44A___C_METHOD_1_A45C1FFEC2A58B23_OFFSET))(this, a1);
	}
};
