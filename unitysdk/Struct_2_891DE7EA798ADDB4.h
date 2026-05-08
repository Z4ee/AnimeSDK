#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FixedArray3_1.h"
#include "unitysdk/Struct_2_F0CFA50094D8FF32.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/AnimationStream.h"

#define STRUCT_2_891DE7EA798ADDB4_METHOD_2_572232777D650DEF_OFFSET UNITYSDK_OFFSET(0x6E3880)
#define STRUCT_2_891DE7EA798ADDB4_METHOD_2_8A550D21C32A35D1_OFFSET UNITYSDK_OFFSET(0x6E3730)
#define STRUCT_2_891DE7EA798ADDB4_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x2EF0A0)
#define STRUCT_2_891DE7EA798ADDB4__CTOR_OFFSET UNITYSDK_OFFSET(0x6E3540)

inline static constexpr unsigned int Struct_2_891DE7EA798ADDB4_TypeDefinitionIndex = 41371;

struct alignas(8) Struct_2_891DE7EA798ADDB4
{
	::Struct_2_F0CFA50094D8FF32 Field_2_0; // 0x10
	::Foundation::FixedArray3_1<::UnityEngine::Animations::AnimationStream> Field_2_1; // 0x60

	/*
	::System::Void _ctor(::Struct_2_F0CFA50094D8FF32 a1, ::Foundation::FixedArray2_1<::UnityEngine::Animations::AnimationStream> a2, ::UnityEngine::Animations::AnimationStream a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F0CFA50094D8FF32, ::Foundation::FixedArray2_1<::UnityEngine::Animations::AnimationStream>, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_891DE7EA798ADDB4__CTOR_OFFSET))(this, a1, a2, a3);
	}
	*/

	/*
	::Struct_2_9F66557673414516 Method_2_8A550D21C32A35D1(::System::Int32 a1)
	{
		return ((::Struct_2_9F66557673414516(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_891DE7EA798ADDB4_METHOD_2_8A550D21C32A35D1_OFFSET))(this, a1);
	}
	*/

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_891DE7EA798ADDB4_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	/*
	::Struct_2_9D8D4EA8E3D44652 Method_2_572232777D650DEF(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::Struct_2_9D8D4EA8E3D44652(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_891DE7EA798ADDB4_METHOD_2_572232777D650DEF_OFFSET))(this, a1);
	}
	*/
};
