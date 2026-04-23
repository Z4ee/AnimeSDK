#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Random; }

#define CLASS_1_A384266ECC3B378E_GET_GEN_OFFSET UNITYSDK_OFFSET(0x17DBBAB0)
#define CLASS_1_A384266ECC3B378E_GET_SEED_OFFSET UNITYSDK_OFFSET(0x17DBBAD0)
#define CLASS_1_A384266ECC3B378E_METHOD_1_5800B8C2CE59928F_OFFSET UNITYSDK_OFFSET(0x17DBBA10)
#define CLASS_1_A384266ECC3B378E_SET_GEN_OFFSET UNITYSDK_OFFSET(0x17DBBAC0)
#define CLASS_1_A384266ECC3B378E_SET_SEED_OFFSET UNITYSDK_OFFSET(0x17DBBAE0)
#define CLASS_1_A384266ECC3B378E__CTOR_OFFSET UNITYSDK_OFFSET(0x17DBBAF0)

inline static constexpr unsigned int Class_1_A384266ECC3B378E_TypeDefinitionIndex = 34503;

class Class_1_A384266ECC3B378E : public ::System::Object
{
public:
	::System::Random* _Gen_k__BackingField; // 0x10
	::System::Int32 _Seed_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A384266ECC3B378E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5800B8C2CE59928F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A384266ECC3B378E_METHOD_1_5800B8C2CE59928F_OFFSET))(this, a1);
	}

	::System::Random* get_Gen()
	{
		return ((::System::Random*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A384266ECC3B378E_GET_GEN_OFFSET))(this);
	}

	::System::Void set_Gen(::System::Random* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Random*))((::PBYTE)hIl2Cpp + CLASS_1_A384266ECC3B378E_SET_GEN_OFFSET))(this, value);
	}

	::System::Int32 get_Seed()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A384266ECC3B378E_GET_SEED_OFFSET))(this);
	}

	::System::Void set_Seed(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A384266ECC3B378E_SET_SEED_OFFSET))(this, value);
	}
};
