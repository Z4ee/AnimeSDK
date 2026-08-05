#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_383B462CFAB3CBD7_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1946AA20)
#define CLASS_3_383B462CFAB3CBD7_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1946AE50)
#define CLASS_3_383B462CFAB3CBD7_METHOD_3_F586BE1DDD37E8B5_OFFSET UNITYSDK_OFFSET(0x1946AAF0)
#define CLASS_3_383B462CFAB3CBD7__CTOR_OFFSET UNITYSDK_OFFSET(0x1946AD60)

inline static constexpr unsigned int Class_3_383B462CFAB3CBD7_TypeDefinitionIndex = 63449;

class Class_3_383B462CFAB3CBD7 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_1; // 0x18
	::Class_4_8D3E479B491881B3<::MoleMole::EntityHandle>* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_383B462CFAB3CBD7__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_383B462CFAB3CBD7_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_F586BE1DDD37E8B5(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_383B462CFAB3CBD7_METHOD_3_F586BE1DDD37E8B5_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_383B462CFAB3CBD7_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
