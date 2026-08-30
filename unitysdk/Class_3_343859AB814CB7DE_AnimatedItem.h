#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_343859AB814CB7DE_Struct_2_D062B8B527D09B71.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_343859AB814CB7DE_AnimatedInstance;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GPUParticlesAsset; }
namespace UnityEngine { class GPUParticlesRenderer; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define CLASS_3_343859AB814CB7DE_ANIMATEDITEM_GET_ANIMATEDINSTANCEMATRIXLISTS_OFFSET UNITYSDK_OFFSET(0xB697350)
#define CLASS_3_343859AB814CB7DE_ANIMATEDITEM_GET_GPUPARTICLEINSTANCEDATALISTS_OFFSET UNITYSDK_OFFSET(0xB697490)
#define CLASS_3_343859AB814CB7DE_ANIMATEDITEM_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0xB695D70)
#define CLASS_3_343859AB814CB7DE_ANIMATEDITEM_GET_MESH_OFFSET UNITYSDK_OFFSET(0xB695E50)
#define CLASS_3_343859AB814CB7DE_ANIMATEDITEM_GET_SUBMESHCOUNT_OFFSET UNITYSDK_OFFSET(0xB695F30)
#define CLASS_3_343859AB814CB7DE_ANIMATEDITEM_GET__PARTICLESASSET_OFFSET UNITYSDK_OFFSET(0xB697360)
#define CLASS_3_343859AB814CB7DE_ANIMATEDITEM_METHOD_1_D70C8B847AF08ADE_OFFSET UNITYSDK_OFFSET(0xB695F90)
#define CLASS_3_343859AB814CB7DE_ANIMATEDITEM_SET_MATERIALS_OFFSET UNITYSDK_OFFSET(0xB697340)
#define CLASS_3_343859AB814CB7DE_ANIMATEDITEM_SET_MESH_OFFSET UNITYSDK_OFFSET(0xB697330)
#define CLASS_3_343859AB814CB7DE_ANIMATEDITEM_SET__PARTICLESASSET_OFFSET UNITYSDK_OFFSET(0xB6973E0)
#define CLASS_3_343859AB814CB7DE_ANIMATEDITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB696F50)

inline static constexpr unsigned int Class_3_343859AB814CB7DE_AnimatedItem_TypeDefinitionIndex = 70282;

class Class_3_343859AB814CB7DE_AnimatedItem : public ::System::Object
{
public:
	::UnityEngine::GameObject* GameObject; // 0x10
	::UnityEngine::Vector3 LossyScale; // 0x18
	::System::Boolean EnableInstancing; // 0x24
	::UnityEngine::Mesh* _Mesh; // 0x28
	::Il2CppArray<::UnityEngine::Material*>* _Materials; // 0x30
	::System::Collections::Generic::List_1<::Class_3_343859AB814CB7DE_AnimatedInstance*>* AnimatedInstances; // 0x38
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>* _AnimatedInstanceMatrixLists; // 0x40
	::System::Boolean EnableGPUParticles; // 0x48
	::UnityEngine::GPUParticlesRenderer* _GPUParticlesRenderer; // 0x50
	::UnityEngine::GPUParticlesAsset* _GPUParticlesAsset; // 0x58
	::UnityEngine::GPUParticlesAsset* _ParticlesAssetInstance; // 0x60
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_3_343859AB814CB7DE_Struct_2_D062B8B527D09B71>*>* _GPUParticleInstanceDataLists; // 0x68

	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_343859AB814CB7DE_ANIMATEDITEM__CTOR_OFFSET))(this, a1);
	}

	::UnityEngine::Mesh* get_Mesh()
	{
		return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_343859AB814CB7DE_ANIMATEDITEM_GET_MESH_OFFSET))(this);
	}

	::System::Void set_Mesh(::UnityEngine::Mesh* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + CLASS_3_343859AB814CB7DE_ANIMATEDITEM_SET_MESH_OFFSET))(this, a1);
	}

	::Il2CppArray<::UnityEngine::Material*>* get_Materials()
	{
		return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_343859AB814CB7DE_ANIMATEDITEM_GET_MATERIALS_OFFSET))(this);
	}

	::System::Void set_Materials(::Il2CppArray<::UnityEngine::Material*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + CLASS_3_343859AB814CB7DE_ANIMATEDITEM_SET_MATERIALS_OFFSET))(this, a1);
	}

	::System::Int32 get_SubMeshCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_343859AB814CB7DE_ANIMATEDITEM_GET_SUBMESHCOUNT_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>* get_AnimatedInstanceMatrixLists()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_343859AB814CB7DE_ANIMATEDITEM_GET_ANIMATEDINSTANCEMATRIXLISTS_OFFSET))(this);
	}

	::UnityEngine::GPUParticlesAsset* get__ParticlesAsset()
	{
		return ((::UnityEngine::GPUParticlesAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_343859AB814CB7DE_ANIMATEDITEM_GET__PARTICLESASSET_OFFSET))(this);
	}

	::System::Void set__ParticlesAsset(::UnityEngine::GPUParticlesAsset* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GPUParticlesAsset*))((::PBYTE)hIl2Cpp + CLASS_3_343859AB814CB7DE_ANIMATEDITEM_SET__PARTICLESASSET_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_3_343859AB814CB7DE_Struct_2_D062B8B527D09B71>*>* get_GPUParticleInstanceDataLists()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_3_343859AB814CB7DE_Struct_2_D062B8B527D09B71>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_343859AB814CB7DE_ANIMATEDITEM_GET_GPUPARTICLEINSTANCEDATALISTS_OFFSET))(this);
	}

	::System::Void Method_1_D70C8B847AF08ADE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_343859AB814CB7DE_ANIMATEDITEM_METHOD_1_D70C8B847AF08ADE_OFFSET))(this);
	}
};
