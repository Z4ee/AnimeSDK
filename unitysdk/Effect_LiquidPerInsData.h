#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_0FB6F5068D635FD7;
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define EFFECT_LIQUIDPERINSDATA_AWAKE_OFFSET UNITYSDK_OFFSET(0x10677CE0)
#define EFFECT_LIQUIDPERINSDATA_START_OFFSET UNITYSDK_OFFSET(0x10677DC0)
#define EFFECT_LIQUIDPERINSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x10677E10)

inline static constexpr unsigned int Effect_LiquidPerInsData_TypeDefinitionIndex = 47914;

class Effect_LiquidPerInsData : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Renderer* LiquidRenderer; // 0x18
	::System::Single SurfaceHeight; // 0x20
	::UnityEngine::Vector3 SurfaceNor; // 0x24
	::UnityEngine::Color SurfaceTintColor; // 0x30
	::UnityEngine::Color BodyTintColor; // 0x40
	::System::Single SurfaceFoamMaskScale; // 0x50
	::UnityEngine::MaterialPropertyBlock* MatBlock; // 0x58
	::System::Boolean IsInit; // 0x60
	::Class_2_0FB6F5068D635FD7* KADDKEGNCHE; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_LIQUIDPERINSDATA__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_LIQUIDPERINSDATA_AWAKE_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_LIQUIDPERINSDATA_START_OFFSET))(this);
	}
};
