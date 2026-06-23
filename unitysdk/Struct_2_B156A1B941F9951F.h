#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FixedArray5_1.h"
#include "unitysdk/Struct_2_F0CFA50094D8FF32.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/AnimationStream.h"

#define STRUCT_2_B156A1B941F9951F_METHOD_2_572232777D650DEF_OFFSET UNITYSDK_OFFSET(0x828240)
#define STRUCT_2_B156A1B941F9951F_METHOD_2_66AAEB7C48D81C4E_OFFSET UNITYSDK_OFFSET(0x8280A0)
#define STRUCT_2_B156A1B941F9951F_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x2C1080)
#define STRUCT_2_B156A1B941F9951F__CTOR_OFFSET UNITYSDK_OFFSET(0x827E70)

inline static constexpr unsigned int Struct_2_B156A1B941F9951F_TypeDefinitionIndex = 54143;

struct alignas(8) Struct_2_B156A1B941F9951F
{
	::Struct_2_F0CFA50094D8FF32 Field_2_0; // 0x10
	::Foundation::FixedArray5_1<::UnityEngine::Animations::AnimationStream> Field_2_1; // 0x60

	/*
	::System::Void _ctor(::Struct_2_F0CFA50094D8FF32 a1, ::Foundation::FixedArray4_1<::UnityEngine::Animations::AnimationStream> a2, ::UnityEngine::Animations::AnimationStream a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F0CFA50094D8FF32, ::Foundation::FixedArray4_1<::UnityEngine::Animations::AnimationStream>, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_B156A1B941F9951F__CTOR_OFFSET))(this, a1, a2, a3);
	}
	*/

	/*
	::Struct_2_9F66557673414516 Method_2_66AAEB7C48D81C4E(::System::Int32 a1)
	{
		return ((::Struct_2_9F66557673414516(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_B156A1B941F9951F_METHOD_2_66AAEB7C48D81C4E_OFFSET))(this, a1);
	}
	*/

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B156A1B941F9951F_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	/*
	::Struct_2_3044AC8F6668B13C Method_2_572232777D650DEF(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::Struct_2_3044AC8F6668B13C(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_B156A1B941F9951F_METHOD_2_572232777D650DEF_OFFSET))(this, a1);
	}
	*/
};
