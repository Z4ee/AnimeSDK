#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define EFFECT_SETWEAPONOBJCENTER_START_OFFSET UNITYSDK_OFFSET(0xFB82DB0)
#define EFFECT_SETWEAPONOBJCENTER_UPDATE_OFFSET UNITYSDK_OFFSET(0xFB82E10)
#define EFFECT_SETWEAPONOBJCENTER__CTOR_OFFSET UNITYSDK_OFFSET(0xFB83620)

inline static constexpr unsigned int Effect_SetWeaponObjCenter_TypeDefinitionIndex = 38321;

class Effect_SetWeaponObjCenter : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Renderer* Rend; // 0x18
	::System::Int32 MaterialIndex; // 0x20
	::UnityEngine::Vector3 Offset; // 0x24
	::System::String* TargetStr0; // 0x30
	::System::Boolean IsSetOffsetRelativeToCenter; // 0x38
	::System::String* TargetStr1; // 0x40
	::System::Boolean isCatHead; // 0x48
	::UnityEngine::Vector4 RefractionTexTilingOffset_CatHead; // 0x4C
	::UnityEngine::Color RefractionTintColor_CatHead; // 0x5C
	::System::Single Angle_CatHead; // 0x6C
	::UnityEngine::Vector4 FinalOffset_CatHead; // 0x70
	::System::Boolean KeyProperties; // 0x80
	::UnityEngine::Color FresnelColorCatHead; // 0x84
	::UnityEngine::Vector4 FresnelBSICatHead; // 0x94
	::System::Single FresnelColorStrengthCatHead; // 0xA4
	::System::Single SpecularShininessCatHead; // 0xA8
	::System::Single SpecularIntensityCatHead; // 0xAC
	::UnityEngine::Vector4 Field_5_17; // 0xB0
	::UnityEngine::MaterialPropertyBlock* Field_5_18; // 0xC0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_SETWEAPONOBJCENTER__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_SETWEAPONOBJCENTER_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_SETWEAPONOBJCENTER_UPDATE_OFFSET))(this);
	}
};
