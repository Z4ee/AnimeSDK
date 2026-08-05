#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_8E579DA6C2A21C6E_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x15C02A90)
#define CLASS_3_8E579DA6C2A21C6E_METHOD_3_BB5DFAE4FCEC0C51_OFFSET UNITYSDK_OFFSET(0x15C02B60)
#define CLASS_3_8E579DA6C2A21C6E_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15C02CF0)
#define CLASS_3_8E579DA6C2A21C6E__CTOR_OFFSET UNITYSDK_OFFSET(0x15C02C00)

inline static constexpr unsigned int Class_3_8E579DA6C2A21C6E_TypeDefinitionIndex = 64065;

class Class_3_8E579DA6C2A21C6E : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_0; // 0x18
	::Class_4_8D3E479B491881B3<::System::Int32>* Field_3_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8E579DA6C2A21C6E__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8E579DA6C2A21C6E_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_BB5DFAE4FCEC0C51(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_8E579DA6C2A21C6E_METHOD_3_BB5DFAE4FCEC0C51_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8E579DA6C2A21C6E_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
