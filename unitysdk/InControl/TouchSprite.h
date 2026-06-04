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

#define INCONTROL_TOUCHSPRITE_CONTAINS_1_OFFSET UNITYSDK_OFFSET(0x1803E240)
#define INCONTROL_TOUCHSPRITE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x18045200)
#define INCONTROL_TOUCHSPRITE_CREATESPRITEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x18044990)
#define INCONTROL_TOUCHSPRITE_CREATESPRITERENDERER_OFFSET UNITYSDK_OFFSET(0x18044AA0)
#define INCONTROL_TOUCHSPRITE_CREATE_OFFSET UNITYSDK_OFFSET(0x1803CFB0)
#define INCONTROL_TOUCHSPRITE_DELETE_OFFSET UNITYSDK_OFFSET(0x1803D070)
#define INCONTROL_TOUCHSPRITE_DRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1803DB50)
#define INCONTROL_TOUCHSPRITE_GET_BUSYCOLOR_OFFSET UNITYSDK_OFFSET(0x18045590)
#define INCONTROL_TOUCHSPRITE_GET_BUSYSPRITE_OFFSET UNITYSDK_OFFSET(0x18045430)
#define INCONTROL_TOUCHSPRITE_GET_DIRTY_OFFSET UNITYSDK_OFFSET(0x18044920)
#define INCONTROL_TOUCHSPRITE_GET_IDLECOLOR_OFFSET UNITYSDK_OFFSET(0x180455F0)
#define INCONTROL_TOUCHSPRITE_GET_IDLESPRITE_OFFSET UNITYSDK_OFFSET(0x18045490)
#define INCONTROL_TOUCHSPRITE_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1803EDD0)
#define INCONTROL_TOUCHSPRITE_GET_READY_OFFSET UNITYSDK_OFFSET(0x18044940)
#define INCONTROL_TOUCHSPRITE_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x18045650)
#define INCONTROL_TOUCHSPRITE_GET_SIZEUNITTYPE_OFFSET UNITYSDK_OFFSET(0x18045670)
#define INCONTROL_TOUCHSPRITE_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x18045690)
#define INCONTROL_TOUCHSPRITE_GET_STATE_OFFSET UNITYSDK_OFFSET(0x18045420)
#define INCONTROL_TOUCHSPRITE_GET_WORLDSIZE_OFFSET UNITYSDK_OFFSET(0x180456F0)
#define INCONTROL_TOUCHSPRITE_SCALESPRITEINPERCENT_OFFSET UNITYSDK_OFFSET(0x18044DB0)
#define INCONTROL_TOUCHSPRITE_SCALESPRITEINPIXELS_OFFSET UNITYSDK_OFFSET(0x18044B70)
#define INCONTROL_TOUCHSPRITE_SET_BUSYCOLOR_OFFSET UNITYSDK_OFFSET(0x180455A0)
#define INCONTROL_TOUCHSPRITE_SET_BUSYSPRITE_OFFSET UNITYSDK_OFFSET(0x18045440)
#define INCONTROL_TOUCHSPRITE_SET_DIRTY_OFFSET UNITYSDK_OFFSET(0x18044930)
#define INCONTROL_TOUCHSPRITE_SET_IDLECOLOR_OFFSET UNITYSDK_OFFSET(0x18045600)
#define INCONTROL_TOUCHSPRITE_SET_IDLESPRITE_OFFSET UNITYSDK_OFFSET(0x180454A0)
#define INCONTROL_TOUCHSPRITE_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1803EEE0)
#define INCONTROL_TOUCHSPRITE_SET_READY_OFFSET UNITYSDK_OFFSET(0x18044950)
#define INCONTROL_TOUCHSPRITE_SET_SHAPE_OFFSET UNITYSDK_OFFSET(0x18045660)
#define INCONTROL_TOUCHSPRITE_SET_SIZEUNITTYPE_OFFSET UNITYSDK_OFFSET(0x18045680)
#define INCONTROL_TOUCHSPRITE_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x180456A0)
#define INCONTROL_TOUCHSPRITE_SET_SPRITE_OFFSET UNITYSDK_OFFSET(0x180454F0)
#define INCONTROL_TOUCHSPRITE_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1803EDC0)
#define INCONTROL_TOUCHSPRITE_UPDATE_1_OFFSET UNITYSDK_OFFSET(0x1803D4E0)
#define INCONTROL_TOUCHSPRITE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1803DDB0)
#define INCONTROL_TOUCHSPRITE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1803F090)
#define INCONTROL_TOUCHSPRITE__CTOR_OFFSET UNITYSDK_OFFSET(0x18044960)

namespace InControl
{
	inline static constexpr unsigned int TouchSprite_TypeDefinitionIndex = 37929;

	class TouchSprite : public ::System::Object
	{
	public:
		static ::UnityEngine::Material** StaticGet_spriteRendererMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(TouchSprite_TypeDefinitionIndex)->GetStaticField(0x15B50);
		}
		static ::UnityEngine::Shader** StaticGet_spriteRendererShader()
		{
			return (::UnityEngine::Shader**)Il2CppClass::FromTypeDefinitionIndex(TouchSprite_TypeDefinitionIndex)->GetStaticField(0x15B58);
		}
		static ::System::Int32* StaticGet_spriteRendererPixelSnapId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TouchSprite_TypeDefinitionIndex)->GetStaticField(0x7E40);
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

		::System::Void _ctor_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Boolean get_Dirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_GET_DIRTY_OFFSET))(this);
		}

		::System::Void set_Dirty(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_SET_DIRTY_OFFSET))(this, a1);
		}

		::System::Boolean get_Ready()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_GET_READY_OFFSET))(this);
		}

		::System::Void set_Ready(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_SET_READY_OFFSET))(this, a1);
		}

		::System::Void Create(::System::String* a1, ::UnityEngine::Transform* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_CREATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Delete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_DELETE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_UPDATE_OFFSET))(this);
		}

		::System::Void Update_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_UPDATE_1_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* CreateSpriteGameObject(::System::String* a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_CREATESPRITEGAMEOBJECT_OFFSET))(this, a1, a2);
		}

		::UnityEngine::SpriteRenderer* CreateSpriteRenderer(::UnityEngine::GameObject* a1, ::UnityEngine::Sprite* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::SpriteRenderer*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Sprite*, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_CREATESPRITERENDERER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ScaleSpriteInPixels(::UnityEngine::GameObject* a1, ::UnityEngine::SpriteRenderer* a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::SpriteRenderer*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_SCALESPRITEINPIXELS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ScaleSpriteInPercent(::UnityEngine::GameObject* a1, ::UnityEngine::SpriteRenderer* a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::SpriteRenderer*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_SCALESPRITEINPERCENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Contains(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_CONTAINS_OFFSET))(this, a1);
		}

		::System::Boolean Contains_1(::InControl::Touch* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::Touch*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_CONTAINS_1_OFFSET))(this, a1);
		}

		::System::Void DrawGizmos(::UnityEngine::Vector3 a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_DRAWGIZMOS_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_State()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_SET_STATE_OFFSET))(this, a1);
		}

		::UnityEngine::Sprite* get_BusySprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_GET_BUSYSPRITE_OFFSET))(this);
		}

		::System::Void set_BusySprite(::UnityEngine::Sprite* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_SET_BUSYSPRITE_OFFSET))(this, a1);
		}

		::UnityEngine::Sprite* get_IdleSprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_GET_IDLESPRITE_OFFSET))(this);
		}

		::System::Void set_IdleSprite(::UnityEngine::Sprite* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_SET_IDLESPRITE_OFFSET))(this, a1);
		}

		::System::Void set_Sprite(::UnityEngine::Sprite* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_SET_SPRITE_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_BusyColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_GET_BUSYCOLOR_OFFSET))(this);
		}

		::System::Void set_BusyColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_SET_BUSYCOLOR_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_IdleColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_GET_IDLECOLOR_OFFSET))(this);
		}

		::System::Void set_IdleColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_SET_IDLECOLOR_OFFSET))(this, a1);
		}

		::InControl::TouchSpriteShape get_Shape()
		{
			return ((::InControl::TouchSpriteShape(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_GET_SHAPE_OFFSET))(this);
		}

		::System::Void set_Shape(::InControl::TouchSpriteShape a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::TouchSpriteShape))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_SET_SHAPE_OFFSET))(this, a1);
		}

		::InControl::TouchUnitType get_SizeUnitType()
		{
			return ((::InControl::TouchUnitType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_GET_SIZEUNITTYPE_OFFSET))(this);
		}

		::System::Void set_SizeUnitType(::InControl::TouchUnitType a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::TouchUnitType))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_SET_SIZEUNITTYPE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_Size()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_Size(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_SET_SIZE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_WorldSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_GET_WORLDSIZE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSPRITE_SET_POSITION_OFFSET))(this, a1);
		}
	};
}
