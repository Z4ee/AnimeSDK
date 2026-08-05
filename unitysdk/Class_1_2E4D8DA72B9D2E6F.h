#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C0C09ABD309C60F2;
namespace System { class String; }

#define CLASS_1_2E4D8DA72B9D2E6F_METHOD_1_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x109DD6B0)
#define CLASS_1_2E4D8DA72B9D2E6F_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x109DD440)
#define CLASS_1_2E4D8DA72B9D2E6F_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x109DD550)
#define CLASS_1_2E4D8DA72B9D2E6F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x109DD610)
#define CLASS_1_2E4D8DA72B9D2E6F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x109DD430)
#define CLASS_1_2E4D8DA72B9D2E6F__CTOR_OFFSET UNITYSDK_OFFSET(0x109DD410)

inline static constexpr unsigned int Class_1_2E4D8DA72B9D2E6F_TypeDefinitionIndex = 48293;

class Class_1_2E4D8DA72B9D2E6F : public ::System::Object
{
public:
	::System::String* Field_1_14; // 0x10
	::Class_1_C0C09ABD309C60F2* Field_1_13; // 0x18
	::System::Single Field_1_6; // 0x20
	::Enum_3_F80BFD5B986D5503_2 Field_1_8; // 0x24
	::System::Int32 Field_1_2; // 0x28
	::UnityEngine::Vector3 Field_1_7; // 0x2C
	::System::UInt32 Field_1_15; // 0x38
	::System::UInt32 Field_1_0; // 0x3C
	::System::Boolean Field_1_4; // 0x40
	::System::Boolean Field_1_11; // 0x41
	::System::Boolean Field_1_5; // 0x42
	::System::Boolean Field_1_9; // 0x43
	::System::UInt32 Field_1_1; // 0x44
	::System::Int32 Field_1_10; // 0x48

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

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E4D8DA72B9D2E6F_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E4D8DA72B9D2E6F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E4D8DA72B9D2E6F_METHOD_1_24B05D2E15A5C3C8_OFFSET))(this);
	}
};
