#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_CONVERTLOGICPOSTOGLOBALLAYOUTPOS_OFFSET UNITYSDK_OFFSET(0x191360C0)
#define MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_CONVERTLOGICPOSTOLAYOUTPOS_1_OFFSET UNITYSDK_OFFSET(0x19135F10)
#define MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_CONVERTLOGICPOSTOLAYOUTPOS_2_OFFSET UNITYSDK_OFFSET(0x19135FE0)
#define MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_CONVERTLOGICPOSTOLAYOUTPOS_OFFSET UNITYSDK_OFFSET(0x19135E30)
#define MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_GETGAMEROOT_OFFSET UNITYSDK_OFFSET(0x19136220)
#define MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_GET_LEFTDOWNGLOBALPOS_OFFSET UNITYSDK_OFFSET(0x19136300)
#define MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_GET_LEFTDOWNPOS_OFFSET UNITYSDK_OFFSET(0x19136260)
#define MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_GET_RIGHTUPGLOBALPOS_OFFSET UNITYSDK_OFFSET(0x19136350)
#define MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_GET_RIGHTUPPOS_OFFSET UNITYSDK_OFFSET(0x191362B0)
#define MOLEMOLE_MINIGAME_MINIGAMEMANIFEST__CTOR_OFFSET UNITYSDK_OFFSET(0x191363A0)

namespace MoleMole::MiniGame
{
	inline static constexpr unsigned int MiniGameManifest_TypeDefinitionIndex = 45019;

	class MiniGameManifest : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Camera* camera; // 0x18
		::UnityEngine::Transform* gameCanvas; // 0x20
		::UnityEngine::Transform* gameRoot; // 0x28
		::UnityEngine::Transform* leftDownAnchor; // 0x30
		::UnityEngine::Transform* rightUpAnchor; // 0x38
		::UnityEngine::Vector2 mapSize; // 0x40
		::System::Single gridSizeX; // 0x48
		::System::Single gridSizeY; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEMANIFEST__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 ConvertLogicPosToLayoutPos(::Struct_2_E614D3B245F96744 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Struct_2_E614D3B245F96744))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_CONVERTLOGICPOSTOLAYOUTPOS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 ConvertLogicPosToLayoutPos_1(::Struct_2_E614D3B245F96744_1 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Struct_2_E614D3B245F96744_1))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_CONVERTLOGICPOSTOLAYOUTPOS_1_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 ConvertLogicPosToLayoutPos_2(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_CONVERTLOGICPOSTOLAYOUTPOS_2_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 ConvertLogicPosToGlobalLayoutPos(::Struct_2_E614D3B245F96744_1 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Struct_2_E614D3B245F96744_1))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_CONVERTLOGICPOSTOGLOBALLAYOUTPOS_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* GetGameRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_GETGAMEROOT_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_LeftDownPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_GET_LEFTDOWNPOS_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_RightUpPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_GET_RIGHTUPPOS_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_LeftDownGlobalPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_GET_LEFTDOWNGLOBALPOS_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_RightUpGlobalPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_GET_RIGHTUPGLOBALPOS_OFFSET))(this);
		}
	};
}
