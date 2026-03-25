#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class Material; }

#define EFFECT_UVANIMATION_START_OFFSET UNITYSDK_OFFSET(0xFB836A0)
#define EFFECT_UVANIMATION_UPDATE_OFFSET UNITYSDK_OFFSET(0xFB83770)
#define EFFECT_UVANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0xFB83900)

inline static constexpr unsigned int Effect_UVAnimation_TypeDefinitionIndex = 38322;

class Effect_UVAnimation : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Material* mat; // 0x18
	::UnityEngine::Vector2 Field_5_1; // 0x20
	::System::Single scrollX; // 0x28
	::System::Single scrollY; // 0x2C
	::System::String* TexName; // 0x30
	::System::Int32 TexId; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_UVANIMATION__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_UVANIMATION_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_UVANIMATION_UPDATE_OFFSET))(this);
	}
};
