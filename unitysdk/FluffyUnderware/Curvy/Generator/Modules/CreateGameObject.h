#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/Modules/ResourceExportingModule.h"

namespace FluffyUnderware::Curvy::Generator { class CGGameObjectResourceCollection; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleInputSlot; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D61A900)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_DELETEALLOUTPUTMANAGEDRESOURCES_OFFSET UNITYSDK_OFFSET(0x1D61A570)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_GET_APPLYLAYERONCHILDREN_OFFSET UNITYSDK_OFFSET(0x1D61A3C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_GET_GAMEOBJECTCOUNT_OFFSET UNITYSDK_OFFSET(0x1D61A470)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_GET_GAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x1D61A460)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_GET_LAYER_OFFSET UNITYSDK_OFFSET(0x1D61A360)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_GET_MAKESTATIC_OFFSET UNITYSDK_OFFSET(0x1D61A410)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D61A530)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_REFRESH_OFFSET UNITYSDK_OFFSET(0x1D61A910)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_RESETONENABLE_OFFSET UNITYSDK_OFFSET(0x1D61B880)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_RESET_OFFSET UNITYSDK_OFFSET(0x1D61A4A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_SAVERESOURCETOSCENE_OFFSET UNITYSDK_OFFSET(0x1D61B790)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_SET_APPLYLAYERONCHILDREN_OFFSET UNITYSDK_OFFSET(0x1D61A3D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_SET_LAYER_OFFSET UNITYSDK_OFFSET(0x1D61A370)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_SET_MAKESTATIC_OFFSET UNITYSDK_OFFSET(0x1D61A420)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D61B900)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int CreateGameObject_TypeDefinitionIndex = 38877;

	class CreateGameObject : public ::FluffyUnderware::Curvy::Generator::Modules::ResourceExportingModule
	{
	public:
		::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* InGameObjectArray; // 0xB8
		::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* InSpots; // 0xC0
		::FluffyUnderware::Curvy::Generator::CGGameObjectResourceCollection* m_Resources; // 0xC8
		::System::Boolean m_MakeStatic; // 0xD0
		::System::Int32 m_Layer; // 0xD4
		::System::Boolean applyLayerOnChildren; // 0xD8
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::System::String*>* usedPoolsDictionary; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Layer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_GET_LAYER_OFFSET))(this);
		}

		::System::Void set_Layer(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_SET_LAYER_OFFSET))(this, value);
		}

		::System::Boolean get_ApplyLayerOnChildren()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_GET_APPLYLAYERONCHILDREN_OFFSET))(this);
		}

		::System::Void set_ApplyLayerOnChildren(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_SET_APPLYLAYERONCHILDREN_OFFSET))(this, value);
		}

		::System::Boolean get_MakeStatic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_GET_MAKESTATIC_OFFSET))(this);
		}

		::System::Void set_MakeStatic(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_SET_MAKESTATIC_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::Generator::CGGameObjectResourceCollection* get_GameObjects()
		{
			return ((::FluffyUnderware::Curvy::Generator::CGGameObjectResourceCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_GET_GAMEOBJECTS_OFFSET))(this);
		}

		::System::Int32 get_GameObjectCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_GET_GAMEOBJECTCOUNT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_RESET_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean DeleteAllOutputManagedResources()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_DELETEALLOUTPUTMANAGEDRESOURCES_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_CLEAR_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_REFRESH_OFFSET))(this);
		}

		::UnityEngine::GameObject* SaveResourceToScene(::UnityEngine::Component* managedResource, ::UnityEngine::Transform* newParent)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_SAVERESOURCETOSCENE_OFFSET))(this, managedResource, newParent);
		}

		::System::Void ResetOnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_RESETONENABLE_OFFSET))(this);
		}
	};
}
