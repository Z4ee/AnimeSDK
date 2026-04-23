#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/TouchSpriteShape.h"
#include "unitysdk/InControl/TouchUnitType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace InControl { class Touch; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class SpriteRenderer; }
namespace UnityEngine { class Transform; }

#define INCONTROL_TOUCHSPRITE_CONTAINS_1_OFFSET UNITYSDK_OFFSET(0x17208B80)
#define INCONTROL_TOUCHSPRITE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1720F850)
#define INCONTROL_TOUCHSPRITE_CREATESPRITEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1720EFE0)
#define INCONTROL_TOUCHSPRITE_CREATESPRITERENDERER_OFFSET UNITYSDK_OFFSET(0x1720F0F0)
#define INCONTROL_TOUCHSPRITE_CREATE_OFFSET UNITYSDK_OFFSET(0x172078A0)
#define INCONTROL_TOUCHSPRITE_DELETE_OFFSET UNITYSDK_OFFSET(0x17207960)
#define INCONTROL_TOUCHSPRITE_DRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x17208440)
#define INCONTROL_TOUCHSPRITE_GET_BUSYCOLOR_OFFSET UNITYSDK_OFFSET(0x1720FBF0)
#define INCONTROL_TOUCHSPRITE_GET_BUSYSPRITE_OFFSET UNITYSDK_OFFSET(0x1720FA90)
#define INCONTROL_TOUCHSPRITE_GET_DIRTY_OFFSET UNITYSDK_OFFSET(0x1720EF70)
#define INCONTROL_TOUCHSPRITE_GET_IDLECOLOR_OFFSET UNITYSDK_OFFSET(0x1720FC50)
#define INCONTROL_TOUCHSPRITE_GET_IDLESPRITE_OFFSET UNITYSDK_OFFSET(0x1720FAF0)
#define INCONTROL_TOUCHSPRITE_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x17209770)
#define INCONTROL_TOUCHSPRITE_GET_READY_OFFSET UNITYSDK_OFFSET(0x1720EF90)
#define INCONTROL_TOUCHSPRITE_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1720FCB0)
#define INCONTROL_TOUCHSPRITE_GET_SIZEUNITTYPE_OFFSET UNITYSDK_OFFSET(0x1720FCD0)
#define INCONTROL_TOUCHSPRITE_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1720FCF0)
#define INCONTROL_TOUCHSPRITE_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1720FA80)
#define INCONTROL_TOUCHSPRITE_GET_WORLDSIZE_OFFSET UNITYSDK_OFFSET(0x1720FD50)
#define INCONTROL_TOUCHSPRITE_SCALESPRITEINPERCENT_OFFSET UNITYSDK_OFFSET(0x1720F400)
#define INCONTROL_TOUCHSPRITE_SCALESPRITEINPIXELS_OFFSET UNITYSDK_OFFSET(0x1720F1C0)
#define INCONTROL_TOUCHSPRITE_SET_BUSYCOLOR_OFFSET UNITYSDK_OFFSET(0x1720FC00)
#define INCONTROL_TOUCHSPRITE_SET_BUSYSPRITE_OFFSET UNITYSDK_OFFSET(0x1720FAA0)
#define INCONTROL_TOUCHSPRITE_SET_DIRTY_OFFSET UNITYSDK_OFFSET(0x1720EF80)
#define INCONTROL_TOUCHSPRITE_SET_IDLECOLOR_OFFSET UNITYSDK_OFFSET(0x1720FC60)
#define INCONTROL_TOUCHSPRITE_SET_IDLESPRITE_OFFSET UNITYSDK_OFFSET(0x1720FB00)
#define INCONTROL_TOUCHSPRITE_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x17209880)
#define INCONTROL_TOUCHSPRITE_SET_READY_OFFSET UNITYSDK_OFFSET(0x1720EFA0)
#define INCONTROL_TOUCHSPRITE_SET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1720FCC0)
#define INCONTROL_TOUCHSPRITE_SET_SIZEUNITTYPE_OFFSET UNITYSDK_OFFSET(0x1720FCE0)
#define INCONTROL_TOUCHSPRITE_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1720FD00)
#define INCONTROL_TOUCHSPRITE_SET_SPRITE_OFFSET UNITYSDK_OFFSET(0x1720FB50)
#define INCONTROL_TOUCHSPRITE_SET_STATE_OFFSET UNITYSDK_OFFSET(0x17209750)
#define INCONTROL_TOUCHSPRITE_UPDATE_1_OFFSET UNITYSDK_OFFSET(0x17207DD0)
#define INCONTROL_TOUCHSPRITE_UPDATE_OFFSET UNITYSDK_OFFSET(0x172086A0)
#define INCONTROL_TOUCHSPRITE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17209A30)
#define INCONTROL_TOUCHSPRITE__CTOR_OFFSET UNITYSDK_OFFSET(0x1720EFB0)

namespace InControl
{
	inline static constexpr unsigned int TouchSprite_TypeDefinitionIndex = 37197;

	class TouchSprite : public ::System::Object
	{
	public:
		static ::UnityEngine::Shader** StaticGet_spriteRendererShader()
		{
			return (::UnityEngine::Shader**)Il2CppClass::FromTypeDefinitionIndex(TouchSprite_TypeDefinitionIndex)->GetStaticField(0x11580);
		}
		static ::UnityEngine::Material** StaticGet_spriteRendererMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(TouchSprite_TypeDefinitionIndex)->GetStaticField(0x11588);
		}
		static ::System::Int32* StaticGet_spriteRendererPixelSnapId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TouchSprite_TypeDefinitionIndex)->GetStaticField(0x5470);
		}
		::UnityEngine::Sprite* idleSprite; // 0x10
		::UnityEngine::Sprite* busySprite; // 0x18
		::UnityEngine::Color idleColor; // 0x20
		::UnityEngine::Color busyColor; // 0x30
		::InControl::TouchSpriteShape shape; // 0x40
		::InControl::TouchUnitType sizeUnitType; // 0x44
		::UnityEngine::Vector2 size; // 0x48
		::System::Boolean lockAspectRatio; // 0x50
		::UnityEngine::Vector2 worldSize; // 0x54
		::UnityEngine::GameObject* spriteGameObject; // 0x60
		::UnityEngine::SpriteRenderer* spriteRenderer; // 0x68
		::System::Boolean state; // 0x70
		::System::Boolean _Dirty_k__BackingField; // 0x71
		::System::Boolean _Ready_k__BackingField; // 0x72

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Single size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE__CTOR_1_OFFSET))(this, size);
		}

		::System::Boolean get_Dirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_GET_DIRTY_OFFSET))(this);
		}

		::System::Void set_Dirty(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_SET_DIRTY_OFFSET))(this, value);
		}

		::System::Boolean get_Ready()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_GET_READY_OFFSET))(this);
		}

		::System::Void set_Ready(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_SET_READY_OFFSET))(this, value);
		}

		::System::Void Create(::System::String* gameObjectName, ::UnityEngine::Transform* parentTransform, ::System::Int32 sortingOrder)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_CREATE_OFFSET))(this, gameObjectName, parentTransform, sortingOrder);
		}

		::System::Void Delete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_DELETE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_UPDATE_OFFSET))(this);
		}

		::System::Void Update_1(::System::Boolean forceUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_UPDATE_1_OFFSET))(this, forceUpdate);
		}

		::UnityEngine::GameObject* CreateSpriteGameObject(::System::String* name, ::UnityEngine::Transform* parentTransform)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_CREATESPRITEGAMEOBJECT_OFFSET))(this, name, parentTransform);
		}

		::UnityEngine::SpriteRenderer* CreateSpriteRenderer(::UnityEngine::GameObject* spriteGameObject, ::UnityEngine::Sprite* sprite, ::System::Int32 sortingOrder)
		{
			return ((::UnityEngine::SpriteRenderer*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Sprite*, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_CREATESPRITERENDERER_OFFSET))(this, spriteGameObject, sprite, sortingOrder);
		}

		::System::Void ScaleSpriteInPixels(::UnityEngine::GameObject* spriteGameObject, ::UnityEngine::SpriteRenderer* spriteRenderer, ::UnityEngine::Vector2 size)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::SpriteRenderer*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_SCALESPRITEINPIXELS_OFFSET))(this, spriteGameObject, spriteRenderer, size);
		}

		::System::Void ScaleSpriteInPercent(::UnityEngine::GameObject* spriteGameObject, ::UnityEngine::SpriteRenderer* spriteRenderer, ::UnityEngine::Vector2 size)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::SpriteRenderer*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_SCALESPRITEINPERCENT_OFFSET))(this, spriteGameObject, spriteRenderer, size);
		}

		::System::Boolean Contains(::UnityEngine::Vector2 testWorldPoint)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_CONTAINS_OFFSET))(this, testWorldPoint);
		}

		::System::Boolean Contains_1(::InControl::Touch* touch)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::Touch*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_CONTAINS_1_OFFSET))(this, touch);
		}

		::System::Void DrawGizmos(::UnityEngine::Vector3 position, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_DRAWGIZMOS_OFFSET))(this, position, color);
		}

		::System::Boolean get_State()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_SET_STATE_OFFSET))(this, value);
		}

		::UnityEngine::Sprite* get_BusySprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_GET_BUSYSPRITE_OFFSET))(this);
		}

		::System::Void set_BusySprite(::UnityEngine::Sprite* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_SET_BUSYSPRITE_OFFSET))(this, value);
		}

		::UnityEngine::Sprite* get_IdleSprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_GET_IDLESPRITE_OFFSET))(this);
		}

		::System::Void set_IdleSprite(::UnityEngine::Sprite* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_SET_IDLESPRITE_OFFSET))(this, value);
		}

		::System::Void set_Sprite(::UnityEngine::Sprite* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_SET_SPRITE_OFFSET))(this, value);
		}

		::UnityEngine::Color get_BusyColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_GET_BUSYCOLOR_OFFSET))(this);
		}

		::System::Void set_BusyColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_SET_BUSYCOLOR_OFFSET))(this, value);
		}

		::UnityEngine::Color get_IdleColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_GET_IDLECOLOR_OFFSET))(this);
		}

		::System::Void set_IdleColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_SET_IDLECOLOR_OFFSET))(this, value);
		}

		::InControl::TouchSpriteShape get_Shape()
		{
			return ((::InControl::TouchSpriteShape(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_GET_SHAPE_OFFSET))(this);
		}

		::System::Void set_Shape(::InControl::TouchSpriteShape value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::TouchSpriteShape))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_SET_SHAPE_OFFSET))(this, value);
		}

		::InControl::TouchUnitType get_SizeUnitType()
		{
			return ((::InControl::TouchUnitType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_GET_SIZEUNITTYPE_OFFSET))(this);
		}

		::System::Void set_SizeUnitType(::InControl::TouchUnitType value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::TouchUnitType))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_SET_SIZEUNITTYPE_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_Size()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_Size(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_SET_SIZE_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_WorldSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_GET_WORLDSIZE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_SET_POSITION_OFFSET))(this, value);
		}
	};
}
