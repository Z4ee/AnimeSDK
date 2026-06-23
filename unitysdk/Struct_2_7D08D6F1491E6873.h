#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_232;
namespace Nap::NapECS { class EcsWorld; }
namespace UnityEngine { class AnimationCurve; }

#define STRUCT_2_7D08D6F1491E6873__CTOR_OFFSET UNITYSDK_OFFSET(0x7A27D0)

inline static constexpr unsigned int Struct_2_7D08D6F1491E6873_TypeDefinitionIndex = 41500;

struct alignas(8) Struct_2_7D08D6F1491E6873
{
	::System::Single Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::System::Single Field_2_2; // 0x18
	::System::Single Field_2_3; // 0x1C
	::UnityEngine::AnimationCurve* Field_2_4; // 0x20
	::Class_0_16E4307DCC419505_232* Field_2_5; // 0x28
	::Class_0_16E4307DCC419505_232* Field_2_6; // 0x30
	::System::Single Field_2_7; // 0x38
	::System::Single Field_2_8; // 0x3C
	::System::Single Field_2_9; // 0x40
	::System::Single Field_2_10; // 0x44
	::System::Single Field_2_11; // 0x48
	::System::Single Field_2_12; // 0x4C
	::Nap::NapECS::EcsWorld* Field_2_13; // 0x50
	::System::Single Field_2_14; // 0x58
	::System::Boolean Field_2_15; // 0x5C
	::System::Single Field_2_16; // 0x60
	::System::Single Field_2_17; // 0x64
	::System::Boolean Field_2_18; // 0x68

	::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::AnimationCurve* a5, ::Class_0_16E4307DCC419505_232* a6, ::Class_0_16E4307DCC419505_232* a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::System::Single a11, ::System::Single a12, ::System::Single a13, ::Nap::NapECS::EcsWorld* a14, ::System::Single a15, ::System::Boolean a16, ::System::Single a17, ::System::Single a18, ::System::Boolean a19)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::Class_0_16E4307DCC419505_232*, ::Class_0_16E4307DCC419505_232*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::Nap::NapECS::EcsWorld*, ::System::Single, ::System::Boolean, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_7D08D6F1491E6873__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
	}
};
