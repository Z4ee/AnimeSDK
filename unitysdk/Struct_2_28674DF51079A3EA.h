#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FixedArray8_1.h"
#include "unitysdk/Struct_2_F0CFA50094D8FF32.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/AnimationStream.h"

#define STRUCT_2_28674DF51079A3EA_METHOD_2_66AAEB7C48D81C4E_OFFSET UNITYSDK_OFFSET(0x7D75F0)
#define STRUCT_2_28674DF51079A3EA_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x3CE500)
#define STRUCT_2_28674DF51079A3EA__CTOR_OFFSET UNITYSDK_OFFSET(0x7D7300)

inline static constexpr unsigned int Struct_2_28674DF51079A3EA_TypeDefinitionIndex = 54292;

struct alignas(8) Struct_2_28674DF51079A3EA
{
	::Struct_2_F0CFA50094D8FF32 Field_2_1; // 0x10
	::Foundation::FixedArray8_1<::UnityEngine::Animations::AnimationStream> Field_2_0; // 0x60

	/*
	::System::Void _ctor(::Struct_2_F0CFA50094D8FF32 a1, ::Foundation::FixedArray7_1<::UnityEngine::Animations::AnimationStream> a2, ::UnityEngine::Animations::AnimationStream a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F0CFA50094D8FF32, ::Foundation::FixedArray7_1<::UnityEngine::Animations::AnimationStream>, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_28674DF51079A3EA__CTOR_OFFSET))(this, a1, a2, a3);
	}
	*/

	/*
	::Struct_2_9F66557673414516 Method_2_66AAEB7C48D81C4E(::System::Int32 a1)
	{
		return ((::Struct_2_9F66557673414516(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_28674DF51079A3EA_METHOD_2_66AAEB7C48D81C4E_OFFSET))(this, a1);
	}
	*/

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_28674DF51079A3EA_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}
};
