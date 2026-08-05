#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_484426492B81518D_METHOD_3_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x13AE5880)
#define CLASS_3_484426492B81518D_METHOD_3_BFD9C6B0B8BAEFA7_OFFSET UNITYSDK_OFFSET(0x13AE5BA0)
#define CLASS_3_484426492B81518D_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13AE60A0)
#define CLASS_3_484426492B81518D__CTOR_OFFSET UNITYSDK_OFFSET(0x13AE5DE0)

inline static constexpr unsigned int Class_3_484426492B81518D_TypeDefinitionIndex = 85978;

class Class_3_484426492B81518D : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_8D3E479B491881B3<::UnityEngine::Vector3>* Field_3_4; // 0x18
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_7; // 0x20
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_6; // 0x28
	::Class_3_B537A0AA78803363* Field_3_9; // 0x30
	::Class_4_8D3E479B491881B3<::UnityEngine::Vector3>* Field_3_5; // 0x38
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x40
	::Class_3_B537A0AA78803363* Field_3_10; // 0x48
	::Class_3_B537A0AA78803363* Field_3_11; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_484426492B81518D__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_484426492B81518D_METHOD_3_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_3_BFD9C6B0B8BAEFA7(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_484426492B81518D_METHOD_3_BFD9C6B0B8BAEFA7_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_484426492B81518D_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
