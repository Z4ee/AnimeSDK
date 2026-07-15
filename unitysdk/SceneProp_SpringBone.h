#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define SCENEPROP_SPRINGBONE_INIT_OFFSET UNITYSDK_OFFSET(0x19F68340)
#define SCENEPROP_SPRINGBONE_METHOD_5_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x19F68390)
#define SCENEPROP_SPRINGBONE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19F68560)
#define SCENEPROP_SPRINGBONE_TICK_OFFSET UNITYSDK_OFFSET(0x19F68770)
#define SCENEPROP_SPRINGBONE_UPDATESPRING_OFFSET UNITYSDK_OFFSET(0x19F687D0)
#define SCENEPROP_SPRINGBONE__CTOR_OFFSET UNITYSDK_OFFSET(0x19F69190)

inline static constexpr unsigned int SceneProp_SpringBone_TypeDefinitionIndex = 45668;

class SceneProp_SpringBone : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Renderer* Renderers; // 0x18
	::System::Int32 MatIndex; // 0x20
	::UnityEngine::MaterialPropertyBlock* Field_5_2; // 0x28
	::UnityEngine::Vector3 BoneAxis; // 0x30
	::System::Single StiffnessForce; // 0x3C
	::System::Single DampingForce; // 0x40
	::System::Single _DynamicRatio; // 0x44
	::System::Single MoveDirWeight; // 0x48
	::System::Single MaxMoveDirLength; // 0x4C
	::System::Single MoveDirSmoothTime; // 0x50
	::System::Boolean debug; // 0x54
	::System::Single Radius; // 0x58
	::System::Single MoveDirUILength; // 0x5C
	::System::Single Field_5_13; // 0x60
	::UnityEngine::Quaternion Field_5_14; // 0x64
	::UnityEngine::Transform* Field_5_15; // 0x78
	::UnityEngine::Vector3 Field_5_16; // 0x80
	::UnityEngine::Vector3 Field_5_17; // 0x8C
	::UnityEngine::Vector3 Field_5_18; // 0x98
	::UnityEngine::Transform* Field_5_19; // 0xA8
	::UnityEngine::Vector3 Field_5_20; // 0xB0
	::UnityEngine::Vector3 Field_5_21; // 0xBC
	::UnityEngine::Transform* Field_5_22; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEPROP_SPRINGBONE__CTOR_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEPROP_SPRINGBONE_INIT_OFFSET))(this);
	}

	::System::Void Method_5_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEPROP_SPRINGBONE_METHOD_5_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEPROP_SPRINGBONE_ONENABLE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SCENEPROP_SPRINGBONE_TICK_OFFSET))(this, a1);
	}

	::System::Void UpdateSpring(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SCENEPROP_SPRINGBONE_UPDATESPRING_OFFSET))(this, a1);
	}
};
