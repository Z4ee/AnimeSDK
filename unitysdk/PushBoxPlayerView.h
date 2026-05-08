#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PushBoxPlayerView_PushBoxPlayerAppearance.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0C791B68CB2A5BF5;
class Class_1_E13183B148E560DC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class SpriteRenderer; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Events { class UnityAction; }

#define PUSHBOXPLAYERVIEW_AWAKE_OFFSET UNITYSDK_OFFSET(0x12AA5570)
#define PUSHBOXPLAYERVIEW_GETWORLDLOCALPOS_OFFSET UNITYSDK_OFFSET(0x12AA5BD0)
#define PUSHBOXPLAYERVIEW_GET_SELFGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x12AA5EB0)
#define PUSHBOXPLAYERVIEW_GET_SELFTRANSFORM_OFFSET UNITYSDK_OFFSET(0x12AA5D40)
#define PUSHBOXPLAYERVIEW_INIT_OFFSET UNITYSDK_OFFSET(0x12AA55D0)
#define PUSHBOXPLAYERVIEW_PLAYTEXTURE_OFFSET UNITYSDK_OFFSET(0x12AA5690)
#define PUSHBOXPLAYERVIEW_RESET_OFFSET UNITYSDK_OFFSET(0x12AA6020)
#define PUSHBOXPLAYERVIEW_SETAPPEARANCE_OFFSET UNITYSDK_OFFSET(0x12AA5840)
#define PUSHBOXPLAYERVIEW_SETWORLDLOCALPOS_OFFSET UNITYSDK_OFFSET(0x12AA5B40)
#define PUSHBOXPLAYERVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0x12AA5C70)
#define PUSHBOXPLAYERVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x12AA6060)

inline static constexpr unsigned int PushBoxPlayerView_TypeDefinitionIndex = 52952;

class PushBoxPlayerView : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::SpriteRenderer* spriteRenderer; // 0x18
	::System::String* IdleSheetKey; // 0x20
	::System::Collections::Generic::List_1<::PushBoxPlayerView_PushBoxPlayerAppearance>* Appearances; // 0x28
	::UnityEngine::Transform* selfTran; // 0x30
	::UnityEngine::GameObject* go; // 0x38
	::Class_1_E13183B148E560DC* spriteRenderAnim; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXPLAYERVIEW__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXPLAYERVIEW_AWAKE_OFFSET))(this);
	}

	::System::Void Init(::Class_1_0C791B68CB2A5BF5* spriteResourceProxy, ::UnityEngine::Vector2 tileSize)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0C791B68CB2A5BF5*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + PUSHBOXPLAYERVIEW_INIT_OFFSET))(this, spriteResourceProxy, tileSize);
	}

	::System::Void SetAppearance(::System::String* key, ::UnityEngine::Vector2 tileSize)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + PUSHBOXPLAYERVIEW_SETAPPEARANCE_OFFSET))(this, key, tileSize);
	}

	::System::Void PlayTexture(::System::String* textureKey, ::UnityEngine::Vector2 tileSize, ::UnityEngine::Events::UnityAction* finishCallBack)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector2, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + PUSHBOXPLAYERVIEW_PLAYTEXTURE_OFFSET))(this, textureKey, tileSize, finishCallBack);
	}

	::System::Void SetWorldLocalPos(::UnityEngine::Vector3 position)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PUSHBOXPLAYERVIEW_SETWORLDLOCALPOS_OFFSET))(this, position);
	}

	::UnityEngine::Vector3 GetWorldLocalPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXPLAYERVIEW_GETWORLDLOCALPOS_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXPLAYERVIEW_UPDATE_OFFSET))(this);
	}

	::UnityEngine::Transform* get_SelfTransform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXPLAYERVIEW_GET_SELFTRANSFORM_OFFSET))(this);
	}

	::UnityEngine::GameObject* get_SelfGameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXPLAYERVIEW_GET_SELFGAMEOBJECT_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXPLAYERVIEW_RESET_OFFSET))(this);
	}
};
