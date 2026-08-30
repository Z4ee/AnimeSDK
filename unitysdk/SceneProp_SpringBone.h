#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define SCENEPROP_SPRINGBONE_INIT_OFFSET UNITYSDK_OFFSET(0xE90A7F0)
#define SCENEPROP_SPRINGBONE_METHOD_5_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0xE90A840)
#define SCENEPROP_SPRINGBONE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE90AA10)
#define SCENEPROP_SPRINGBONE_TICK_OFFSET UNITYSDK_OFFSET(0xE90AC20)
#define SCENEPROP_SPRINGBONE_UPDATESPRING_OFFSET UNITYSDK_OFFSET(0xE90AC80)
#define SCENEPROP_SPRINGBONE__CTOR_OFFSET UNITYSDK_OFFSET(0xE90B640)

inline static constexpr unsigned int SceneProp_SpringBone_TypeDefinitionIndex = 47919;

class SceneProp_SpringBone : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Renderer* Renderers; // 0x18
	::System::Int32 MatIndex; // 0x20
	::UnityEngine::MaterialPropertyBlock* DNCLJJLAFKA; // 0x28
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
	::System::Single PKFKMPJECDJ; // 0x60
	::UnityEngine::Quaternion AEGGCPFGBOL; // 0x64
	::UnityEngine::Transform* EIEDPHOPPOJ; // 0x78
	::UnityEngine::Vector3 HANCCIKJIIF; // 0x80
	::UnityEngine::Vector3 POPNJMJJBKP; // 0x8C
	::UnityEngine::Vector3 BIKLGGEPKFC; // 0x98
	::UnityEngine::Transform* FFNEKOHNGCK; // 0xA8
	::UnityEngine::Vector3 NIBGNGICDOO; // 0xB0
	::UnityEngine::Vector3 IBHECCFMCLA; // 0xBC
	::UnityEngine::Transform* DEAEAPLKJPF; // 0xC8

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
