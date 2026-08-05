#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_CB9A9DC80DF9CCD6___C_METHOD_1_F36ECC94BB21B573_OFFSET UNITYSDK_OFFSET(0xF797460)
#define CLASS_2_CB9A9DC80DF9CCD6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF797410)
#define CLASS_2_CB9A9DC80DF9CCD6___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF797450)

inline static constexpr unsigned int Class_2_CB9A9DC80DF9CCD6___c_TypeDefinitionIndex = 73911;

class Class_2_CB9A9DC80DF9CCD6___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::System::UInt32>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CB9A9DC80DF9CCD6___c_TypeDefinitionIndex)->GetStaticField(0x30E70);
	}
	static ::Class_2_CB9A9DC80DF9CCD6___c** StaticGet___9()
	{
		return (::Class_2_CB9A9DC80DF9CCD6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CB9A9DC80DF9CCD6___c_TypeDefinitionIndex)->GetStaticField(0x30E78);
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
