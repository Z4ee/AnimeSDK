#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FixedArray2_1.h"
#include "unitysdk/Struct_2_F0CFA50094D8FF32.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/AnimationStream.h"

#define STRUCT_2_2FC66E3156F6912B_METHOD_2_572232777D650DEF_OFFSET UNITYSDK_OFFSET(0x8338C0)
#define STRUCT_2_2FC66E3156F6912B_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x2BDA10)
#define STRUCT_2_2FC66E3156F6912B_METHOD_2_D910F4D36FEA1766_OFFSET UNITYSDK_OFFSET(0x833770)
#define STRUCT_2_2FC66E3156F6912B__CTOR_OFFSET UNITYSDK_OFFSET(0x833550)

inline static constexpr unsigned int Struct_2_2FC66E3156F6912B_TypeDefinitionIndex = 48825;

struct alignas(8) Struct_2_2FC66E3156F6912B
{
	::Struct_2_F0CFA50094D8FF32 Field_2_0; // 0x10
	::Foundation::FixedArray2_1<::UnityEngine::Animations::AnimationStream> Field_2_1; // 0x60

	/*
	::System::Void _ctor(::Struct_2_F0CFA50094D8FF32 a1, ::Foundation::FixedArray1_1<::UnityEngine::Animations::AnimationStream> a2, ::UnityEngine::Animations::AnimationStream a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F0CFA50094D8FF32, ::Foundation::FixedArray1_1<::UnityEngine::Animations::AnimationStream>, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_2FC66E3156F6912B__CTOR_OFFSET))(this, a1, a2, a3);
	}
	*/

	/*
	::Struct_2_9F66557673414516 Method_2_D910F4D36FEA1766(::System::Int32 a1)
	{
		return ((::Struct_2_9F66557673414516(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_2FC66E3156F6912B_METHOD_2_D910F4D36FEA1766_OFFSET))(this, a1);
	}
	*/

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2FC66E3156F6912B_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	/*
	::Struct_2_891DE7EA798ADDB4 Method_2_572232777D650DEF(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::Struct_2_891DE7EA798ADDB4(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_2FC66E3156F6912B_METHOD_2_572232777D650DEF_OFFSET))(this, a1);
	}
	*/
};
