#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DynamicBone_FreezeAxis.h"
#include "unitysdk/DynamicBone_UpdateMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class DynamicBoneColliderBase;
class DynamicBoneConfig;
class DynamicBone_Particle;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define DYNAMICBONE_APPENDPARTICLES_OFFSET UNITYSDK_OFFSET(0x1F5E8060)
#define DYNAMICBONE_APPLYPARTICLESTOTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1F5E7B90)
#define DYNAMICBONE_CHECKDISTANCE_OFFSET UNITYSDK_OFFSET(0x1F5E5430)
#define DYNAMICBONE_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1F5E5330)
#define DYNAMICBONE_GETPATH_OFFSET UNITYSDK_OFFSET(0x1F5E4DB0)
#define DYNAMICBONE_GETWEIGHT_OFFSET UNITYSDK_OFFSET(0x1F5E62D0)
#define DYNAMICBONE_INITTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1F5E5B60)
#define DYNAMICBONE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1F5E53C0)
#define DYNAMICBONE_MIRRORVECTOR_OFFSET UNITYSDK_OFFSET(0x1F5E9060)
#define DYNAMICBONE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F5E4CB0)
#define DYNAMICBONE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F5E4AC0)
#define DYNAMICBONE_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x1F5E4D50)
#define DYNAMICBONE_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1F5E4D80)
#define DYNAMICBONE_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0x1F5E4D40)
#define DYNAMICBONE_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x1F5E4B50)
#define DYNAMICBONE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1F5E6060)
#define DYNAMICBONE_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x1F5E5360)
#define DYNAMICBONE_RESETPARTICLESPOSITION_OFFSET UNITYSDK_OFFSET(0x1F5E5D60)
#define DYNAMICBONE_SETUPPARTICLES_OFFSET UNITYSDK_OFFSET(0x1F5E4F70)
#define DYNAMICBONE_SETWEIGHT_OFFSET UNITYSDK_OFFSET(0x1F5E6270)
#define DYNAMICBONE_SKIPUPDATEPARTICLES_OFFSET UNITYSDK_OFFSET(0x1F5E73A0)
#define DYNAMICBONE_START_OFFSET UNITYSDK_OFFSET(0x1F5E4F60)
#define DYNAMICBONE_UPDATEDYNAMICBONES_OFFSET UNITYSDK_OFFSET(0x1F5E5830)
#define DYNAMICBONE_UPDATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1F5E8A00)
#define DYNAMICBONE_UPDATEPARTICLES1_OFFSET UNITYSDK_OFFSET(0x1F5E62E0)
#define DYNAMICBONE_UPDATEPARTICLES2_OFFSET UNITYSDK_OFFSET(0x1F5E6680)
#define DYNAMICBONE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F5E5390)
#define DYNAMICBONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5E90C0)

inline static constexpr unsigned int DynamicBone_TypeDefinitionIndex = 35278;

class DynamicBone : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Transform* m_Root; // 0x18
	::System::Single m_UpdateRate; // 0x20
	::DynamicBone_UpdateMode m_UpdateMode; // 0x24
	::DynamicBone_FreezeAxis m_FreezeAxis; // 0x28
	::System::Boolean m_DistantDisable; // 0x2C
	::UnityEngine::Transform* m_ReferenceObject; // 0x30
	::System::Single m_DistanceToObject; // 0x38
	::System::Collections::Generic::List_1<::DynamicBoneColliderBase*>* m_Colliders; // 0x40
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* m_Exclusions; // 0x48
	::DynamicBoneConfig* config; // 0x50
	::UnityEngine::Vector3 m_LocalGravity; // 0x58
	::UnityEngine::Vector3 m_ObjectMove; // 0x64
	::UnityEngine::Vector3 m_ObjectPrevPosition; // 0x70
	::System::Single m_BoneTotalLength; // 0x7C
	::System::Single m_ObjectScale; // 0x80
	::System::Single m_Time; // 0x84
	::System::Single m_Weight; // 0x88
	::System::Boolean m_DistantDisabled; // 0x8C
	::System::Collections::Generic::List_1<::DynamicBone_Particle*>* m_Particles; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnLightweightActive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
	}

	::System::Void OnLightweightDeactive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
	}

	static ::System::String* GetPath(::UnityEngine::Transform* transform)
	{
		return ((::System::String*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + DYNAMICBONE_GETPATH_OFFSET))(transform);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_START_OFFSET))(this);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_LATEUPDATE_OFFSET))(this);
	}

	::System::Void PreUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_PREUPDATE_OFFSET))(this);
	}

	::System::Void CheckDistance()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_CHECKDISTANCE_OFFSET))(this);
	}

	::System::Void OnRealEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_ONREALENABLE_OFFSET))(this);
	}

	::System::Void OnRealDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_ONREALDISABLE_OFFSET))(this);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_ONVALIDATE_OFFSET))(this);
	}

	::System::Void SetWeight(::System::Single w)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DYNAMICBONE_SETWEIGHT_OFFSET))(this, w);
	}

	::System::Single GetWeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_GETWEIGHT_OFFSET))(this);
	}

	::System::Void UpdateDynamicBones(::System::Single t)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DYNAMICBONE_UPDATEDYNAMICBONES_OFFSET))(this, t);
	}

	::System::Void SetupParticles()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_SETUPPARTICLES_OFFSET))(this);
	}

	::System::Void AppendParticles(::UnityEngine::Transform* b, ::System::Int32 parentIndex, ::System::Single boneLength)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + DYNAMICBONE_APPENDPARTICLES_OFFSET))(this, b, parentIndex, boneLength);
	}

	::System::Void UpdateParameters()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_UPDATEPARAMETERS_OFFSET))(this);
	}

	::System::Void InitTransforms()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_INITTRANSFORMS_OFFSET))(this);
	}

	::System::Void ResetParticlesPosition()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_RESETPARTICLESPOSITION_OFFSET))(this);
	}

	::System::Void UpdateParticles1(::System::Single timeVar)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DYNAMICBONE_UPDATEPARTICLES1_OFFSET))(this, timeVar);
	}

	::System::Void UpdateParticles2(::System::Single timeVar)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DYNAMICBONE_UPDATEPARTICLES2_OFFSET))(this, timeVar);
	}

	::System::Void SkipUpdateParticles()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_SKIPUPDATEPARTICLES_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 MirrorVector(::UnityEngine::Vector3 v, ::UnityEngine::Vector3 axis)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DYNAMICBONE_MIRRORVECTOR_OFFSET))(v, axis);
	}

	::System::Void ApplyParticlesToTransforms()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_APPLYPARTICLESTOTRANSFORMS_OFFSET))(this);
	}
};
