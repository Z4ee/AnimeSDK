#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_1ADED1EDA7578A33_METHOD_2_260E97EFE04A5125_OFFSET UNITYSDK_OFFSET(0x179E62A0)
#define STRUCT_2_1ADED1EDA7578A33_METHOD_2_9500614C417C9194_OFFSET UNITYSDK_OFFSET(0x395DFC0)
#define STRUCT_2_1ADED1EDA7578A33_METHOD_2_9DD1880C3B587D85_OFFSET UNITYSDK_OFFSET(0x179E6340)
#define STRUCT_2_1ADED1EDA7578A33_METHOD_2_C6E14CE377D03CE0_OFFSET UNITYSDK_OFFSET(0x395E040)

inline static constexpr unsigned int Struct_2_1ADED1EDA7578A33_TypeDefinitionIndex = 69975;

struct alignas(4) Struct_2_1ADED1EDA7578A33
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Single Field_2_2; // 0x18
	::System::Single Field_2_3; // 0x1C
	::System::Single Field_2_4; // 0x20
	::System::Single Field_2_5; // 0x24
	::System::Int32 Field_2_6; // 0x28
	::System::Boolean Field_2_7; // 0x2C

	::System::Boolean Method_2_9500614C417C9194(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_1ADED1EDA7578A33_METHOD_2_9500614C417C9194_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C6E14CE377D03CE0(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_1ADED1EDA7578A33_METHOD_2_C6E14CE377D03CE0_OFFSET))(this, a1);
	}

	/*
	static ::Struct_2_1ADED1EDA7578A33 Method_2_260E97EFE04A5125(::UnityEngine::AnimatorStateInfo a1)
	{
		return ((::Struct_2_1ADED1EDA7578A33(*)(::UnityEngine::AnimatorStateInfo))((::PBYTE)hIl2Cpp + STRUCT_2_1ADED1EDA7578A33_METHOD_2_260E97EFE04A5125_OFFSET))(a1);
	}
	*/

	/*
	static ::Struct_2_1ADED1EDA7578A33 Method_2_9DD1880C3B587D85(::Struct_2_651BBD6CCE0CE471 a1, ::System::Single a2, ::System::Boolean a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::Struct_2_1ADED1EDA7578A33(*)(::Struct_2_651BBD6CCE0CE471, ::System::Single, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_1ADED1EDA7578A33_METHOD_2_9DD1880C3B587D85_OFFSET))(a1, a2, a3, a4, a5);
	}
	*/
};
