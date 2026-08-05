#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }

#define SCENENODECONTROLLER_ENABLELODGROUP_OFFSET UNITYSDK_OFFSET(0x1C3E7490)
#define SCENENODECONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C3E7570)
#define SCENENODECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C3E77C0)
#define SCENENODECONTROLLER_VISBLEPREFABCOUNT_OFFSET UNITYSDK_OFFSET(0x1C3E7680)
#define SCENENODECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3E7B60)
#define SCENENODECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3E7A80)

inline static constexpr unsigned int SceneNodeController_TypeDefinitionIndex = 91466;

class SceneNodeController : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>** StaticGet_InvisbleMeshList()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x51D10);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>** StaticGet_VisbleMeshList()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x51D18);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>** StaticGet_Lod0MeshList()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x51D20);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>** StaticGet_Lod1MeshList()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x51D28);
	}
	static ::System::Int32* StaticGet_Lod1MeshRenderNumber()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x12F10);
	}
	static ::System::Boolean* StaticGet_EndbaleRefreshMeshRender()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x12F14);
	}
	static ::System::Boolean* StaticGet_EnableLodGroup()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x12F15);
	}
	static ::System::Boolean* StaticGet_EnableLodTest()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x12F16);
	}
	static ::System::Single* StaticGet_Disblelight()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x12F18);
	}
	static ::System::Int32* StaticGet_VisbleMeshRenderNumber()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x12F1C);
	}
	static ::System::Int32* StaticGet_MeshRenderNumber()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x12F20);
	}
	static ::System::Int32* StaticGet_InvisbleMeshRenderNumber()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x12F24);
	}
	static ::System::Int32* StaticGet_Lod0MeshRenderNumber()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x12F28);
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
