#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_CB9A9DC80DF9CCD6___C_METHOD_1_F36ECC94BB21B573_OFFSET UNITYSDK_OFFSET(0x12C59070)
#define CLASS_2_CB9A9DC80DF9CCD6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12C59020)
#define CLASS_2_CB9A9DC80DF9CCD6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12C59060)

inline static constexpr unsigned int Class_2_CB9A9DC80DF9CCD6___c_TypeDefinitionIndex = 63930;

class Class_2_CB9A9DC80DF9CCD6___c : public ::System::Object
{
public:
	static ::Class_2_CB9A9DC80DF9CCD6___c** StaticGet___9()
	{
		return (::Class_2_CB9A9DC80DF9CCD6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CB9A9DC80DF9CCD6___c_TypeDefinitionIndex)->GetStaticField(0x30140);
	}
	static ::System::Func_2<::System::Int32, ::System::UInt32>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CB9A9DC80DF9CCD6___c_TypeDefinitionIndex)->GetStaticField(0x30148);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CB9A9DC80DF9CCD6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB9A9DC80DF9CCD6___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_F36ECC94BB21B573(::System::Int32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CB9A9DC80DF9CCD6___C_METHOD_1_F36ECC94BB21B573_OFFSET))(this, a1);
	}
};
