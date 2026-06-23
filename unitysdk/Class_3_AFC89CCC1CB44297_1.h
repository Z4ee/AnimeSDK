#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_AFC89CCC1CB44297_1_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x143E60C0)
#define CLASS_3_AFC89CCC1CB44297_1_METHOD_3_47125C76AFDB961E_OFFSET UNITYSDK_OFFSET(0x143E6200)
#define CLASS_3_AFC89CCC1CB44297_1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x143E6560)
#define CLASS_3_AFC89CCC1CB44297_1__CTOR_OFFSET UNITYSDK_OFFSET(0x143E6460)

inline static constexpr unsigned int Class_3_AFC89CCC1CB44297_1_TypeDefinitionIndex = 48870;

class Class_3_AFC89CCC1CB44297_1 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_3_1; // 0x18
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x20
	::Class_3_B537A0AA78803363* Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AFC89CCC1CB44297_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AFC89CCC1CB44297_1_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_47125C76AFDB961E(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_AFC89CCC1CB44297_1_METHOD_3_47125C76AFDB961E_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AFC89CCC1CB44297_1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
