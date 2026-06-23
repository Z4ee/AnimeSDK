#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class Volume; }

#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1DDF4890)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_CONVERTLOGICPOSTOLAYOUTPOS_1_OFFSET UNITYSDK_OFFSET(0x1DDF50E0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_CONVERTLOGICPOSTOLAYOUTPOS_OFFSET UNITYSDK_OFFSET(0x1DDF5030)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETCELLITEM_OFFSET UNITYSDK_OFFSET(0x1DDF4D30)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETCELLROOT_OFFSET UNITYSDK_OFFSET(0x1DDF4DB0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETHOSTMARK_OFFSET UNITYSDK_OFFSET(0x1DDF4C60)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETMAPEFFBOMB_OFFSET UNITYSDK_OFFSET(0x1DDF4F90)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETMAPEFFEAT_OFFSET UNITYSDK_OFFSET(0x1DDF4EA0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETMAPEFFHITBACK_OFFSET UNITYSDK_OFFSET(0x1DDF4F40)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETMAPEFFITEMIDLE_OFFSET UNITYSDK_OFFSET(0x1DDF4EF0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETMAPEFFROOT_OFFSET UNITYSDK_OFFSET(0x1DDF4FE0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETSHADOWROOT_OFFSET UNITYSDK_OFFSET(0x1DDF4E50)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETSHADOW_OFFSET UNITYSDK_OFFSET(0x1DDF4D70)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETSNAKEBODY_OFFSET UNITYSDK_OFFSET(0x1DDF4CF0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETSNAKEHEAD_OFFSET UNITYSDK_OFFSET(0x1DDF4CB0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETSNAKEROOT_OFFSET UNITYSDK_OFFSET(0x1DDF4E00)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1DDF4830)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1DDF4840)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDF5190)

namespace MoleMole::Arcade::SnakeDemo
{
	inline static constexpr unsigned int SnakeMapLayout_TypeDefinitionIndex = 91045;

	class SnakeMapLayout : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MoleMole::Arcade::SnakeDemo::SnakeMapLayout** StaticGet_Field_5_0()
		{
			return (::MoleMole::Arcade::SnakeDemo::SnakeMapLayout**)Il2CppClass::FromTypeDefinitionIndex(SnakeMapLayout_TypeDefinitionIndex)->GetStaticField(0x4E5D0);
		}
		::UnityEngine::Camera* camera; // 0x18
		::UnityEngine::Rendering::Volume* volume; // 0x20
		::UnityEngine::Vector2 mapSize; // 0x28
		::System::Single gridSizeX; // 0x30
		::System::Single gridSizeY; // 0x34
		::UnityEngine::Vector2 Field_5_6; // 0x38
		::UnityEngine::Vector3 Field_5_7; // 0x40
		::UnityEngine::Transform* leftDownAnchor; // 0x50
		::UnityEngine::Transform* rightUpAnchor; // 0x58
		::UnityEngine::GameObject* templateShadow; // 0x60
		::UnityEngine::GameObject* templateSnake; // 0x68
		::UnityEngine::GameObject* templateSnakeHead; // 0x70
		::UnityEngine::GameObject* templateItem; // 0x78
		::UnityEngine::Transform* cellRoot; // 0x80
		::UnityEngine::Transform* snakeRoot; // 0x88
		::UnityEngine::Transform* shadowRoot; // 0x90
		::UnityEngine::Transform* hostMark; // 0x98
		::UnityEngine::GameObject* templateEatEff; // 0xA0
		::UnityEngine::GameObject* templateItemIdleEff; // 0xA8
		::UnityEngine::GameObject* templateHitBackEff; // 0xB0
		::UnityEngine::GameObject* templateBombEff; // 0xB8
		::UnityEngine::Transform* mapEffRoot; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT__CTOR_OFFSET))(this);
		}

		static ::MoleMole::Arcade::SnakeDemo::SnakeMapLayout* get_Instance()
		{
			return ((::MoleMole::Arcade::SnakeDemo::SnakeMapLayout*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GET_INSTANCE_OFFSET))();
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_ONDESTROY_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_AWAKE_OFFSET))(this);
		}

		::UnityEngine::Transform* GetHostMark()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETHOSTMARK_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetSnakeHead()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETSNAKEHEAD_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetSnakeBody()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETSNAKEBODY_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetCellItem()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETCELLITEM_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetShadow()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETSHADOW_OFFSET))(this);
		}

		::UnityEngine::Transform* GetCellRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETCELLROOT_OFFSET))(this);
		}

		::UnityEngine::Transform* GetSnakeRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETSNAKEROOT_OFFSET))(this);
		}

		::UnityEngine::Transform* GetShadowRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETSHADOWROOT_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetMapEffEat()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETMAPEFFEAT_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetMapEffItemIdle()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETMAPEFFITEMIDLE_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetMapEffHitBack()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETMAPEFFHITBACK_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetMapEffBomb()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETMAPEFFBOMB_OFFSET))(this);
		}

		::UnityEngine::Transform* GetMapEffRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETMAPEFFROOT_OFFSET))(this);
		}

		::UnityEngine::Vector3 ConvertLogicPosToLayoutPos(::Struct_2_E614D3B245F96744 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Struct_2_E614D3B245F96744))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_CONVERTLOGICPOSTOLAYOUTPOS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 ConvertLogicPosToLayoutPos_1(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_CONVERTLOGICPOSTOLAYOUTPOS_1_OFFSET))(this, a1);
		}
	};
}
