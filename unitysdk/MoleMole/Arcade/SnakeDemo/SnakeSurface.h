#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class SpriteRenderer; }

#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKESURFACE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1DDF5240)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKESURFACE_SETPLAYER_OFFSET UNITYSDK_OFFSET(0x1DDF51E0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKESURFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDF54E0)

namespace MoleMole::Arcade::SnakeDemo
{
	inline static constexpr unsigned int SnakeSurface_TypeDefinitionIndex = 90974;

	class SnakeSurface : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::SpriteRenderer* eye; // 0x18
		::UnityEngine::GameObject* playerMark; // 0x20
		::System::Single duration; // 0x28
		::UnityEngine::Vector3 strength; // 0x2C
		::System::Int32 vibrato; // 0x38
		::System::Single randomness; // 0x3C
		::System::Boolean fadeOut; // 0x40
		::UnityEngine::MeshRenderer* snakeMaskMeshRenderer; // 0x48
		::UnityEngine::MeshFilter* snakeMaskMeshFilter; // 0x50
		::UnityEngine::Material* SpeedUpMat; // 0x58
		::UnityEngine::Material* SpeedDownMat; // 0x60
		::UnityEngine::Material* EliteMat; // 0x68
		::UnityEngine::Material* EliteMatSuper; // 0x70
		::UnityEngine::Material* ChaosMat; // 0x78
		::UnityEngine::Material* InvisibleMat; // 0x80
		::UnityEngine::Material* BossMat; // 0x88
		::UnityEngine::Material* GoldenMat; // 0x90
		::UnityEngine::Material* FastSpeedMat; // 0x98
		::UnityEngine::Mesh* MeshMask; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKESURFACE__CTOR_OFFSET))(this);
		}

		::System::Void SetPlayer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKESURFACE_SETPLAYER_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKESURFACE_ONDESTROY_OFFSET))(this);
		}
	};
}
