#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_E416FB5D9CA1FC39_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x133CD910)
#define CLASS_3_E416FB5D9CA1FC39_METHOD_3_3B3E2D3B3DF161CC_OFFSET UNITYSDK_OFFSET(0x133CDA50)
#define CLASS_3_E416FB5D9CA1FC39_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x133CDE90)
#define CLASS_3_E416FB5D9CA1FC39__CTOR_OFFSET UNITYSDK_OFFSET(0x133CDD70)

inline static constexpr unsigned int Class_3_E416FB5D9CA1FC39_TypeDefinitionIndex = 41208;

class Class_3_E416FB5D9CA1FC39 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_2; // 0x18
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x20
	::Class_4_8D3E479B491881B3<::System::Single>* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E416FB5D9CA1FC39__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E416FB5D9CA1FC39_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_3B3E2D3B3DF161CC(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_E416FB5D9CA1FC39_METHOD_3_3B3E2D3B3DF161CC_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E416FB5D9CA1FC39_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
