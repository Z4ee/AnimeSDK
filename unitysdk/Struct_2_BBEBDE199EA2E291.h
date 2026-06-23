#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationCurve; }

#define STRUCT_2_BBEBDE199EA2E291_METHOD_2_CFA202D5D1478404_OFFSET UNITYSDK_OFFSET(0x803DA0)

inline static constexpr unsigned int Struct_2_BBEBDE199EA2E291_TypeDefinitionIndex = 50287;

struct alignas(8) Struct_2_BBEBDE199EA2E291
{
	::System::Single Field_2_0; // 0x10
	::UnityEngine::AnimationCurve* Field_2_1; // 0x18
	::System::Boolean Field_2_2; // 0x20
	::UnityEngine::AnimationCurve* Field_2_3; // 0x28
	::System::Single Field_2_4; // 0x30

	/*
	::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom Method_2_CFA202D5D1478404()
	{
		return ((::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BBEBDE199EA2E291_METHOD_2_CFA202D5D1478404_OFFSET))(this);
	}
	*/
};
