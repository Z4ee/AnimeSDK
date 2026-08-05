#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_F3D1C245CC7121BC_2_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x14B6A930)
#define CLASS_3_F3D1C245CC7121BC_2_METHOD_3_61F1B0A667C4C017_OFFSET UNITYSDK_OFFSET(0x14B6AA00)
#define CLASS_3_F3D1C245CC7121BC_2_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14B6AD00)
#define CLASS_3_F3D1C245CC7121BC_2__CTOR_OFFSET UNITYSDK_OFFSET(0x14B6AC10)

inline static constexpr unsigned int Class_3_F3D1C245CC7121BC_2_TypeDefinitionIndex = 84902;

class Class_3_F3D1C245CC7121BC_2 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_8D3E479B491881B3<::System::Boolean>* Field_3_0; // 0x18
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F3D1C245CC7121BC_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F3D1C245CC7121BC_2_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_61F1B0A667C4C017(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_F3D1C245CC7121BC_2_METHOD_3_61F1B0A667C4C017_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F3D1C245CC7121BC_2_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
