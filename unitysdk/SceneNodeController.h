#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }

#define SCENENODECONTROLLER_ENABLELODGROUP_OFFSET UNITYSDK_OFFSET(0x1A0E4C50)
#define SCENENODECONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A0E4D30)
#define SCENENODECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A0E4F80)
#define SCENENODECONTROLLER_VISBLEPREFABCOUNT_OFFSET UNITYSDK_OFFSET(0x1A0E4E40)
#define SCENENODECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0E5320)
#define SCENENODECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0E5240)

inline static constexpr unsigned int SceneNodeController_TypeDefinitionIndex = 78749;

class SceneNodeController : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>** StaticGet_Lod1MeshList()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x4B4E0);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>** StaticGet_Lod0MeshList()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x4B4E8);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>** StaticGet_InvisbleMeshList()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x4B4F0);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>** StaticGet_VisbleMeshList()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x4B4F8);
	}
	static ::System::Int32* StaticGet_Lod0MeshRenderNumber()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x11D40);
	}
	static ::System::Boolean* StaticGet_EnableLodGroup()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x11D44);
	}
	static ::System::Boolean* StaticGet_EndbaleRefreshMeshRender()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x11D45);
	}
	static ::System::Boolean* StaticGet_EnableLodTest()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x11D46);
	}
	static ::System::Int32* StaticGet_MeshRenderNumber()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x11D48);
	}
	static ::System::Int32* StaticGet_InvisbleMeshRenderNumber()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x11D4C);
	}
	static ::System::Int32* StaticGet_Lod1MeshRenderNumber()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x11D50);
	}
	static ::System::Int32* StaticGet_VisbleMeshRenderNumber()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x11D54);
	}
	static ::System::Single* StaticGet_Disblelight()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x11D58);
	}
	::System::Collections::Generic::List_1<::UnityEngine::Light*>* lights; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENODECONTROLLER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SCENENODECONTROLLER__CCTOR_OFFSET))();
	}

	::System::Void EnableLODGroup()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENODECONTROLLER_ENABLELODGROUP_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENODECONTROLLER_ONENABLE_OFFSET))(this);
	}

	static ::System::Void VisblePrefabCount()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SCENENODECONTROLLER_VISBLEPREFABCOUNT_OFFSET))();
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENODECONTROLLER_UPDATE_OFFSET))(this);
	}
};
