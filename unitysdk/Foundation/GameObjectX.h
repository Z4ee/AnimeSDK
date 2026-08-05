#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define FOUNDATION_GAMEOBJECTX_ACTIVATEANDPARENT_OFFSET UNITYSDK_OFFSET(0x1EF7F080)
#define FOUNDATION_GAMEOBJECTX_ADDCOMPONENTSAFELY_OFFSET UNITYSDK_OFFSET(0x1EF80AE0)
#define FOUNDATION_GAMEOBJECTX_CLONE_OFFSET UNITYSDK_OFFSET(0x1EF804A0)
#define FOUNDATION_GAMEOBJECTX_GETCHILDBYABSPATH_OFFSET UNITYSDK_OFFSET(0x1EF7E680)
#define FOUNDATION_GAMEOBJECTX_GETCHILDBYRELATEDPATHLIST_OFFSET UNITYSDK_OFFSET(0x1EF7E150)
#define FOUNDATION_GAMEOBJECTX_GETCHILDBYRELATEDPATH_OFFSET UNITYSDK_OFFSET(0x1EF7DAC0)
#define FOUNDATION_GAMEOBJECTX_GETCOLLISIONMASK_OFFSET UNITYSDK_OFFSET(0x1EF7FF00)
#define FOUNDATION_GAMEOBJECTX_GETRELATEDREALPATHANDINDEX_OFFSET UNITYSDK_OFFSET(0x1EF7DFC0)
#define FOUNDATION_GAMEOBJECTX_HASCHARACTERCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1EF7F500)
#define FOUNDATION_GAMEOBJECTX_HASRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x1EF7F330)
#define FOUNDATION_GAMEOBJECTX_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1EF7EF10)
#define FOUNDATION_GAMEOBJECTX_ISNULLORINACTIVE_OFFSET UNITYSDK_OFFSET(0x1EF7EDA0)
#define FOUNDATION_GAMEOBJECTX_NEWGAMEOBJECTASCHILD_OFFSET UNITYSDK_OFFSET(0x1EF7FFD0)
#define FOUNDATION_GAMEOBJECTX_REMOVEALLCHILDOBJECT_OFFSET UNITYSDK_OFFSET(0x1EF80860)
#define FOUNDATION_GAMEOBJECTX_RESETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1EF80290)
#define FOUNDATION_GAMEOBJECTX_SETACTIVERECURSIVELYEXT_OFFSET UNITYSDK_OFFSET(0x1EF80750)
#define FOUNDATION_GAMEOBJECTX_SETACTIVESAFELY_OFFSET UNITYSDK_OFFSET(0x1EF805D0)
#define FOUNDATION_GAMEOBJECTX_SETCOLLISIONRECURSIVELY_OFFSET UNITYSDK_OFFSET(0x1EF7FA40)
#define FOUNDATION_GAMEOBJECTX_SETLAYERRECURSIVELY_OFFSET UNITYSDK_OFFSET(0x1EF7F6D0)
#define FOUNDATION_GAMEOBJECTX_TOSTRINGPARENTHIERARCHY_OFFSET UNITYSDK_OFFSET(0x1EF7CE00)
#define FOUNDATION_GAMEOBJECTX_TOSTRINGRELATEDPATH_OFFSET UNITYSDK_OFFSET(0x1EF7D1B0)

namespace Foundation
{
	inline static constexpr unsigned int GameObjectX_TypeDefinitionIndex = 8183;

	class GameObjectX : public ::System::Object
	{
	public:
		// static const ::System::String* SceneFLagStr; // 0x0
		// static const ::System::String* RepeatIndexFlag; // 0x0
		// static const ::System::Int32 maxDepth = 0x64; // 0x0

		static ::System::String* ToStringParentHierarchy(::UnityEngine::GameObject* go)
		{
			return ((::System::String*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FOUNDATION_GAMEOBJECTX_TOSTRINGPARENTHIERARCHY_OFFSET))(go);
		}

		static ::System::String* ToStringRelatedPath(::UnityEngine::GameObject* obj, ::System::Boolean mutilScene, ::System::Boolean repeatIndex)
		{
			return ((::System::String*(*)(::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_GAMEOBJECTX_TOSTRINGRELATEDPATH_OFFSET))(obj, mutilScene, repeatIndex);
		}

		static ::UnityEngine::GameObject* GetChildByRelatedPath(::UnityEngine::GameObject* obj, ::System::String* relativePath, ::System::Boolean isContainSelf, ::System::Boolean skipCheckRoot)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_GAMEOBJECTX_GETCHILDBYRELATEDPATH_OFFSET))(obj, relativePath, isContainSelf, skipCheckRoot);
		}

		static ::System::ValueTuple_2<::System::String*, ::System::Int32> GetRelatedRealPathAndIndex(::System::String* pathComponent)
		{
			return ((::System::ValueTuple_2<::System::String*, ::System::Int32>(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_GAMEOBJECTX_GETRELATEDREALPATHANDINDEX_OFFSET))(pathComponent);
		}

		static ::UnityEngine::GameObject* GetChildByRelatedPathList(::UnityEngine::GameObject* obj, ::System::Collections::Generic::List_1<::System::String*>* pathComponents, ::System::Boolean isContainSelf)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_GAMEOBJECTX_GETCHILDBYRELATEDPATHLIST_OFFSET))(obj, pathComponents, isContainSelf);
		}

		static ::UnityEngine::GameObject* GetChildByAbsPath(::System::String* absolutePath)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_GAMEOBJECTX_GETCHILDBYABSPATH_OFFSET))(absolutePath);
		}

		static ::System::Boolean IsNullOrInactive(::UnityEngine::GameObject* go)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FOUNDATION_GAMEOBJECTX_ISNULLORINACTIVE_OFFSET))(go);
		}

		static ::System::Boolean IsActive(::UnityEngine::GameObject* go)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FOUNDATION_GAMEOBJECTX_ISACTIVE_OFFSET))(go);
		}

		static ::System::Void ActivateAndParent(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FOUNDATION_GAMEOBJECTX_ACTIVATEANDPARENT_OFFSET))(go);
		}

		static ::System::Boolean HasRigidbody(::UnityEngine::GameObject* go)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FOUNDATION_GAMEOBJECTX_HASRIGIDBODY_OFFSET))(go);
		}

		static ::System::Boolean HasCharacterController(::UnityEngine::GameObject* go)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FOUNDATION_GAMEOBJECTX_HASCHARACTERCONTROLLER_OFFSET))(go);
		}

		static ::System::Void SetLayerRecursively(::UnityEngine::GameObject* go, ::System::Int32 layer)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_GAMEOBJECTX_SETLAYERRECURSIVELY_OFFSET))(go, layer);
		}

		static ::System::Void SetCollisionRecursively(::UnityEngine::GameObject* go, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_GAMEOBJECTX_SETCOLLISIONRECURSIVELY_OFFSET))(go, enabled);
		}

		static ::System::Int32 GetCollisionMask(::UnityEngine::GameObject* go, ::System::Int32 layer)
		{
			return ((::System::Int32(*)(::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_GAMEOBJECTX_GETCOLLISIONMASK_OFFSET))(go, layer);
		}

		static ::UnityEngine::GameObject* NewGameObjectAsChild(::UnityEngine::GameObject* go, ::System::String* name)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_GAMEOBJECTX_NEWGAMEOBJECTASCHILD_OFFSET))(go, name);
		}

		static ::System::Void ResetTransform(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FOUNDATION_GAMEOBJECTX_RESETTRANSFORM_OFFSET))(go);
		}

		static ::UnityEngine::GameObject* Clone(::UnityEngine::GameObject* obj)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FOUNDATION_GAMEOBJECTX_CLONE_OFFSET))(obj);
		}

		static ::System::Void SetActiveSafely(::UnityEngine::GameObject* obj, ::System::Boolean active)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_GAMEOBJECTX_SETACTIVESAFELY_OFFSET))(obj, active);
		}

		static ::System::Void SetActiveRecursivelyExt(::UnityEngine::GameObject* target, ::System::Boolean bActive)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_GAMEOBJECTX_SETACTIVERECURSIVELYEXT_OFFSET))(target, bActive);
		}

		static ::System::Void RemoveAllChildObject(::UnityEngine::GameObject* parent, ::System::Boolean bImmediate)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_GAMEOBJECTX_REMOVEALLCHILDOBJECT_OFFSET))(parent, bImmediate);
		}

		static ::UnityEngine::Component* AddComponentSafely(::UnityEngine::GameObject* pGameObject, ::System::Type* type)
		{
			return ((::UnityEngine::Component*(*)(::UnityEngine::GameObject*, ::System::Type*))((::PBYTE)hIl2Cpp + FOUNDATION_GAMEOBJECTX_ADDCOMPONENTSAFELY_OFFSET))(pGameObject, type);
		}
	};
}
