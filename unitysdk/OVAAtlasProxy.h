#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class OVAAtlasProxy_AtlasConfig;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }

#define OVAATLASPROXY_DISABLEDEBUGMODE_OFFSET UNITYSDK_OFFSET(0x1D5E0B40)
#define OVAATLASPROXY_ENABLEDEBUGMODE_OFFSET UNITYSDK_OFFSET(0x1D5E0660)
#define OVAATLASPROXY_GENERATE3DMESH_OFFSET UNITYSDK_OFFSET(0x1D5E2E70)
#define OVAATLASPROXY_GENERATEMESH_OFFSET UNITYSDK_OFFSET(0x1D5E10B0)
#define OVAATLASPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D5E3260)
#define OVAATLASPROXY_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1D5E3530)
#define OVAATLASPROXY_REFRESHPROPERTY_OFFSET UNITYSDK_OFFSET(0x1D5E0D30)
#define OVAATLASPROXY_START_OFFSET UNITYSDK_OFFSET(0x1D5E3490)
#define OVAATLASPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D5E34E0)
#define OVAATLASPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5E3600)
#define OVAATLASPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E3580)

inline static constexpr unsigned int OVAAtlasProxy_TypeDefinitionIndex = 27963;

class OVAAtlasProxy : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Int32* StaticGet__BaseColor()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OVAAtlasProxy_TypeDefinitionIndex)->GetStaticField(0x7200);
	}
	static ::System::Int32* StaticGet__EmissionOn()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OVAAtlasProxy_TypeDefinitionIndex)->GetStaticField(0x7204);
	}
	static ::System::Int32* StaticGet__EmissionPercent()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OVAAtlasProxy_TypeDefinitionIndex)->GetStaticField(0x7208);
	}
	static ::System::Int32* StaticGet__FrameCount()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OVAAtlasProxy_TypeDefinitionIndex)->GetStaticField(0x720C);
	}
	static ::System::Int32* StaticGet__EmissionColor()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OVAAtlasProxy_TypeDefinitionIndex)->GetStaticField(0x7210);
	}
	static ::System::Int32* StaticGet__EmissionTex()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OVAAtlasProxy_TypeDefinitionIndex)->GetStaticField(0x7214);
	}
	static ::System::Int32* StaticGet__MainTex()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OVAAtlasProxy_TypeDefinitionIndex)->GetStaticField(0x7218);
	}
	static ::System::Int32* StaticGet__TextureSheetPrams()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OVAAtlasProxy_TypeDefinitionIndex)->GetStaticField(0x721C);
	}
	::System::Boolean IsEditorMode; // 0x18
	::System::Collections::Generic::List_1<::OVAAtlasProxy_AtlasConfig*>* m_AtlasConfigs; // 0x20
	::UnityEngine::Material* defaultMaterial; // 0x28
	::System::Single m_SpritScale; // 0x30
	::UnityEngine::Color m_EmissionColor; // 0x34
	::UnityEngine::Color m_BaseColor; // 0x44
	::System::Single m_EmissionPercent; // 0x54
	::UnityEngine::MaterialPropertyBlock* m_PropertyBlock; // 0x58
	::UnityEngine::MeshRenderer* m_MeshRenderer; // 0x60
	::Il2CppArray<::UnityEngine::GameObject*>* CG3DMeshes; // 0x68
	::UnityEngine::Vector3 rotation; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OVAATLASPROXY__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OVAATLASPROXY__CCTOR_OFFSET))();
	}

	::System::Void EnableDebugMode()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OVAATLASPROXY_ENABLEDEBUGMODE_OFFSET))(this);
	}

	::System::Void DisableDebugMode()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OVAATLASPROXY_DISABLEDEBUGMODE_OFFSET))(this);
	}

	::System::Void RefreshProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OVAATLASPROXY_REFRESHPROPERTY_OFFSET))(this);
	}

	::System::Void GenerateMesh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OVAATLASPROXY_GENERATEMESH_OFFSET))(this);
	}

	::System::Void Generate3DMesh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OVAATLASPROXY_GENERATE3DMESH_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OVAATLASPROXY_ONDISABLE_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OVAATLASPROXY_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OVAATLASPROXY_UPDATE_OFFSET))(this);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OVAATLASPROXY_ONVALIDATE_OFFSET))(this);
	}
};
