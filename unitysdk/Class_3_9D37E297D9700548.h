#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_9D37E297D9700548_METHOD_3_24266A3422B394A8_OFFSET UNITYSDK_OFFSET(0x16661640)
#define CLASS_3_9D37E297D9700548_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x16661490)
#define CLASS_3_9D37E297D9700548_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16661B80)
#define CLASS_3_9D37E297D9700548__CTOR_OFFSET UNITYSDK_OFFSET(0x16661A40)

inline static constexpr unsigned int Class_3_9D37E297D9700548_TypeDefinitionIndex = 54612;

class Class_3_9D37E297D9700548 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x18
	::Class_4_8D3E479B491881B3<::UnityEngine::Vector3>* Field_3_7; // 0x20
	::Class_3_B537A0AA78803363* Field_3_5; // 0x28
	::Class_4_8D3E479B491881B3<::UnityEngine::Vector3>* Field_3_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D37E297D9700548__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D37E297D9700548_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_24266A3422B394A8(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_9D37E297D9700548_METHOD_3_24266A3422B394A8_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D37E297D9700548_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
