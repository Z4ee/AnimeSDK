#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Random; }

#define CLASS_1_3659AE0E8250857A_GET_GEN_OFFSET UNITYSDK_OFFSET(0x19D27550)
#define CLASS_1_3659AE0E8250857A_GET_SEED_OFFSET UNITYSDK_OFFSET(0x19D27570)
#define CLASS_1_3659AE0E8250857A_METHOD_1_5800B8C2CE59928F_OFFSET UNITYSDK_OFFSET(0x19D274B0)
#define CLASS_1_3659AE0E8250857A_SET_GEN_OFFSET UNITYSDK_OFFSET(0x19D27560)
#define CLASS_1_3659AE0E8250857A_SET_SEED_OFFSET UNITYSDK_OFFSET(0x19D27580)
#define CLASS_1_3659AE0E8250857A__CTOR_OFFSET UNITYSDK_OFFSET(0x19D27590)

inline static constexpr unsigned int Class_1_3659AE0E8250857A_TypeDefinitionIndex = 36317;

class Class_1_3659AE0E8250857A : public ::System::Object
{
public:
	::System::Random* _Gen_k__BackingField; // 0x10
	::System::Int32 _Seed_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3659AE0E8250857A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5800B8C2CE59928F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3659AE0E8250857A_METHOD_1_5800B8C2CE59928F_OFFSET))(this, a1);
	}

	::System::Random* get_Gen()
	{
		return ((::System::Random*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3659AE0E8250857A_GET_GEN_OFFSET))(this);
	}

	::System::Void set_Gen(::System::Random* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Random*))((::PBYTE)hIl2Cpp + CLASS_1_3659AE0E8250857A_SET_GEN_OFFSET))(this, a1);
	}

	::System::Int32 get_Seed()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3659AE0E8250857A_GET_SEED_OFFSET))(this);
	}

	::System::Void set_Seed(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3659AE0E8250857A_SET_SEED_OFFSET))(this, a1);
	}
};
