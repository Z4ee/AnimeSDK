#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_AB9E543ABCD0A1D0_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1876F930)
#define CLASS_3_AB9E543ABCD0A1D0_METHOD_3_8CF3F35E5763DDA1_OFFSET UNITYSDK_OFFSET(0x1876FAE0)
#define CLASS_3_AB9E543ABCD0A1D0_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1876FFE0)
#define CLASS_3_AB9E543ABCD0A1D0__CTOR_OFFSET UNITYSDK_OFFSET(0x1876FEA0)

inline static constexpr unsigned int Class_3_AB9E543ABCD0A1D0_TypeDefinitionIndex = 78497;

class Class_3_AB9E543ABCD0A1D0 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x18
	::Class_3_DCB7F8B839F0C44B_4* Field_3_2; // 0x20
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_0; // 0x28
	::Class_3_B537A0AA78803363* Field_3_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB9E543ABCD0A1D0__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB9E543ABCD0A1D0_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_8CF3F35E5763DDA1(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_AB9E543ABCD0A1D0_METHOD_3_8CF3F35E5763DDA1_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB9E543ABCD0A1D0_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
