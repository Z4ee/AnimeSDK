#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class String; }

#define CLASS_2_688CC6D7B70184E7_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xB951BF0)
#define CLASS_2_688CC6D7B70184E7__CTOR_OFFSET UNITYSDK_OFFSET(0xB951CB0)

inline static constexpr unsigned int Class_2_688CC6D7B70184E7_TypeDefinitionIndex = 48820;

class Class_2_688CC6D7B70184E7 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::String* BJCBMNHOAGO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_688CC6D7B70184E7__CTOR_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_688CC6D7B70184E7_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}
};
