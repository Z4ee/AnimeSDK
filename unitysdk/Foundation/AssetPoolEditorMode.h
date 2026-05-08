#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define FOUNDATION_ASSETPOOLEDITORMODE_ADDINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x19D9BFE0)
#define FOUNDATION_ASSETPOOLEDITORMODE_ADDINSTANCE_OFFSET UNITYSDK_OFFSET(0x19D9BF50)
#define FOUNDATION_ASSETPOOLEDITORMODE_APPLICATIONONLOWMEMORY_OFFSET UNITYSDK_OFFSET(0x19D9BF10)
#define FOUNDATION_ASSETPOOLEDITORMODE_GETINSTANCEASYNC_1_OFFSET UNITYSDK_OFFSET(0x19D9C290)
#define FOUNDATION_ASSETPOOLEDITORMODE_GETINSTANCEASYNC_OFFSET UNITYSDK_OFFSET(0x19D9C170)
#define FOUNDATION_ASSETPOOLEDITORMODE_GETINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x19D9C4E0)
#define FOUNDATION_ASSETPOOLEDITORMODE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x19D9C3F0)
#define FOUNDATION_ASSETPOOLEDITORMODE_INITINSTANTIATEDPREVIEWRECURSIVE_OFFSET UNITYSDK_OFFSET(0x19D9C720)
#define FOUNDATION_ASSETPOOLEDITORMODE_INTERNALDESTROY_OFFSET UNITYSDK_OFFSET(0x19D9C0E0)
#define FOUNDATION_ASSETPOOLEDITORMODE_RELEASE_OFFSET UNITYSDK_OFFSET(0x19D9C6E0)
#define FOUNDATION_ASSETPOOLEDITORMODE_UNLOAD_1_OFFSET UNITYSDK_OFFSET(0x19D9CB10)
#define FOUNDATION_ASSETPOOLEDITORMODE_UNLOAD_OFFSET UNITYSDK_OFFSET(0x19D9CAC0)
#define FOUNDATION_ASSETPOOLEDITORMODE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D9CB60)
#define FOUNDATION_ASSETPOOLEDITORMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19D9BF00)

namespace Foundation
{
	inline static constexpr unsigned int AssetPoolEditorMode_TypeDefinitionIndex = 7886;

	class AssetPoolEditorMode : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_PreviewCullingLayer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AssetPoolEditorMode_TypeDefinitionIndex)->GetStaticField(0x3860);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLEDITORMODE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLEDITORMODE__CCTOR_OFFSET))();
		}

		::System::Void ApplicationOnLowMemory()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLEDITORMODE_APPLICATIONONLOWMEMORY_OFFSET))(this);
		}

		::System::Void AddInstance(::System::String* path, ::UnityEngine::GameObject* target, ::System::Boolean keepActive, ::Foundation::AssetType assetType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Boolean, ::Foundation::AssetType))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLEDITORMODE_ADDINSTANCE_OFFSET))(this, path, target, keepActive, assetType);
		}

		::System::Void AddInstance_1(::Foundation::AssetPath path, ::UnityEngine::GameObject* target, ::System::Boolean keepActive, ::Foundation::AssetType assetType)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*, ::System::Boolean, ::Foundation::AssetType))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLEDITORMODE_ADDINSTANCE_1_OFFSET))(this, path, target, keepActive, assetType);
		}

		::System::Void GetInstanceAsync(::System::String* path, ::UnityEngine::Transform* parent, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* completed, ::System::Boolean activeState)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLEDITORMODE_GETINSTANCEASYNC_OFFSET))(this, path, parent, completed, activeState);
		}

		::System::Void GetInstanceAsync_1(::Foundation::AssetPath assetPath, ::UnityEngine::Transform* parent, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* completed, ::System::Boolean activeState)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::Transform*, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLEDITORMODE_GETINSTANCEASYNC_1_OFFSET))(this, assetPath, parent, completed, activeState);
		}

		::UnityEngine::GameObject* GetInstance(::System::String* path, ::UnityEngine::Transform* parent, ::System::Boolean activeState)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLEDITORMODE_GETINSTANCE_OFFSET))(this, path, parent, activeState);
		}

		::UnityEngine::GameObject* GetInstance_1(::Foundation::AssetPath assetPath, ::UnityEngine::Transform* parent, ::System::Boolean activeState)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLEDITORMODE_GETINSTANCE_1_OFFSET))(this, assetPath, parent, activeState);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLEDITORMODE_RELEASE_OFFSET))(this);
		}

		::System::Void InitInstantiatedPreviewRecursive(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLEDITORMODE_INITINSTANTIATEDPREVIEWRECURSIVE_OFFSET))(this, go);
		}

		::System::Void InternalDestroy(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLEDITORMODE_INTERNALDESTROY_OFFSET))(this, obj);
		}

		::System::Void Unload(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLEDITORMODE_UNLOAD_OFFSET))(this, path);
		}

		::System::Void Unload_1(::Foundation::AssetPath assetPath)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLEDITORMODE_UNLOAD_1_OFFSET))(this, assetPath);
		}
	};
}
