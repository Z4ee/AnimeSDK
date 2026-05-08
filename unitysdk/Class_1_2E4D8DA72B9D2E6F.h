#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C0C09ABD309C60F2;
namespace System { class String; }

#define CLASS_1_2E4D8DA72B9D2E6F_METHOD_1_25EC451C0EA68F53_OFFSET UNITYSDK_OFFSET(0xDE94F90)
#define CLASS_1_2E4D8DA72B9D2E6F_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0xDE94E80)
#define CLASS_1_2E4D8DA72B9D2E6F_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xDE95140)
#define CLASS_1_2E4D8DA72B9D2E6F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDE950B0)
#define CLASS_1_2E4D8DA72B9D2E6F__CTOR_1_OFFSET UNITYSDK_OFFSET(0xDE94E70)
#define CLASS_1_2E4D8DA72B9D2E6F__CTOR_OFFSET UNITYSDK_OFFSET(0xDE94E50)

inline static constexpr unsigned int Class_1_2E4D8DA72B9D2E6F_TypeDefinitionIndex = 65654;

class Class_1_2E4D8DA72B9D2E6F : public ::System::Object
{
public:
	::System::String* Field_1_12; // 0x10
	::Class_1_C0C09ABD309C60F2* Field_1_13; // 0x18
	::System::Single Field_1_4; // 0x20
	::Enum_3_F80BFD5B986D5503 Field_1_10; // 0x24
	::System::UInt32 Field_1_11; // 0x28
	::System::Int32 Field_1_0; // 0x2C
	::System::Int32 Field_1_8; // 0x30
	::System::Boolean Field_1_5; // 0x34
	::System::Boolean Field_1_7; // 0x35
	::System::Boolean Field_1_6; // 0x36
	::System::Boolean Field_1_9; // 0x37
	::System::UInt32 Field_1_2; // 0x38
	::System::UInt32 Field_1_1; // 0x3C
	::UnityEngine::Vector3 Field_1_3; // 0x40

	::System::Void _ctor(::System::Int32 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2E4D8DA72B9D2E6F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E4D8DA72B9D2E6F__CTOR_1_OFFSET))(this);
	}

	::Class_1_2E4D8DA72B9D2E6F* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_2E4D8DA72B9D2E6F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E4D8DA72B9D2E6F_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Void Method_1_25EC451C0EA68F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E4D8DA72B9D2E6F_METHOD_1_25EC451C0EA68F53_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E4D8DA72B9D2E6F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E4D8DA72B9D2E6F_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
