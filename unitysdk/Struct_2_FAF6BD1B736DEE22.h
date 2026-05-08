#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FixedArray1_1.h"
#include "unitysdk/Struct_2_F0CFA50094D8FF32.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/AnimationStream.h"

#define STRUCT_2_FAF6BD1B736DEE22_METHOD_2_2CFFD4394B1C54BD_OFFSET UNITYSDK_OFFSET(0x721DD0)
#define STRUCT_2_FAF6BD1B736DEE22_METHOD_2_572232777D650DEF_OFFSET UNITYSDK_OFFSET(0x721EF0)
#define STRUCT_2_FAF6BD1B736DEE22_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x37D570)
#define STRUCT_2_FAF6BD1B736DEE22__CTOR_OFFSET UNITYSDK_OFFSET(0x721D20)

inline static constexpr unsigned int Struct_2_FAF6BD1B736DEE22_TypeDefinitionIndex = 46312;

struct alignas(8) Struct_2_FAF6BD1B736DEE22
{
	::Struct_2_F0CFA50094D8FF32 Field_2_0; // 0x10
	::Foundation::FixedArray1_1<::UnityEngine::Animations::AnimationStream> Field_2_1; // 0x60

	::System::Void _ctor(::Struct_2_F0CFA50094D8FF32 a1, ::UnityEngine::Animations::AnimationStream a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F0CFA50094D8FF32, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_FAF6BD1B736DEE22__CTOR_OFFSET))(this, a1, a2);
	}

	/*
	::Struct_2_9F66557673414516 Method_2_2CFFD4394B1C54BD(::System::Int32 a1)
	{
		return ((::Struct_2_9F66557673414516(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_FAF6BD1B736DEE22_METHOD_2_2CFFD4394B1C54BD_OFFSET))(this, a1);
	}
	*/

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FAF6BD1B736DEE22_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	/*
	::Struct_2_2FC66E3156F6912B Method_2_572232777D650DEF(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::Struct_2_2FC66E3156F6912B(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_FAF6BD1B736DEE22_METHOD_2_572232777D650DEF_OFFSET))(this, a1);
	}
	*/
};
