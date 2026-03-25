#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class CharacterEmoConfig; }
namespace System { class String; }
namespace UnityEngine { class AnimationClip; }

#define STRUCT_2_E0754CA22D053A9B_METHOD_2_A2B391699C4CD306_OFFSET UNITYSDK_OFFSET(0x1492730)
#define STRUCT_2_E0754CA22D053A9B_METHOD_2_E433E4A436F99F92_OFFSET UNITYSDK_OFFSET(0x1492720)

inline static constexpr unsigned int Struct_2_E0754CA22D053A9B_TypeDefinitionIndex = 46097;

struct alignas(8) Struct_2_E0754CA22D053A9B
{
	::System::String* Field_2_0; // 0x10
	::UnityEngine::AnimationClip* Field_2_1; // 0x18
	::UnityEngine::AnimationClip* Field_2_2; // 0x20
	::UnityEngine::AnimationClip* Field_2_3; // 0x28
	::UnityEngine::AnimationClip* Field_2_4; // 0x30

	::System::Void Method_2_E433E4A436F99F92(::RPG::GameCore::CharacterEmoConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterEmoConfig*))((::PBYTE)hIl2Cpp + STRUCT_2_E0754CA22D053A9B_METHOD_2_E433E4A436F99F92_OFFSET))(this, a1);
	}

	::System::Void Method_2_A2B391699C4CD306(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_E0754CA22D053A9B_METHOD_2_A2B391699C4CD306_OFFSET))(this, a1);
	}
};
