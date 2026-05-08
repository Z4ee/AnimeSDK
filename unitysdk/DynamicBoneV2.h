#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DynamicBoneV2_FreezeAxis.h"
#include "unitysdk/DynamicBoneV2_UpdateMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class DynamicBoneColliderBase;
class DynamicBoneConfigV2;
class DynamicBoneV2_Particle;
class DynamicBoneV2_TransformConfig;
class DynamicBoneV2_UpdateConfig;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define DYNAMICBONEV2_AFTERSWITCHLOD_OFFSET UNITYSDK_OFFSET(0x1BE70EF0)
#define DYNAMICBONEV2_APPENDPARTICLESV2_OFFSET UNITYSDK_OFFSET(0x1BE74AF0)
#define DYNAMICBONEV2_APPENDPARTICLES_OFFSET UNITYSDK_OFFSET(0x1BE75380)
#define DYNAMICBONEV2_APPLYPARTICLESTOTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1BE74620)
#define DYNAMICBONEV2_BINDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1BE70EE0)
#define DYNAMICBONEV2_CACHEANIMPOSE_OFFSET UNITYSDK_OFFSET(0x1BE72060)
#define DYNAMICBONEV2_CHECKDISTANCE_OFFSET UNITYSDK_OFFSET(0x1BE71C50)
#define DYNAMICBONEV2_GETLABELTEXT_OFFSET UNITYSDK_OFFSET(0x1BE70A50)
#define DYNAMICBONEV2_GETPATH_OFFSET UNITYSDK_OFFSET(0x1BE70D30)
#define DYNAMICBONEV2_GETWEIGHT_OFFSET UNITYSDK_OFFSET(0x1BE71710)
#define DYNAMICBONEV2_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1BE71730)
#define DYNAMICBONEV2_GET_M_COLLIDERS_OFFSET UNITYSDK_OFFSET(0x1BE70CF0)
#define DYNAMICBONEV2_GET_M_DISTANCETOOBJECT_OFFSET UNITYSDK_OFFSET(0x1BE70CD0)
#define DYNAMICBONEV2_GET_M_DISTANTDISABLE_OFFSET UNITYSDK_OFFSET(0x1BE70C90)
#define DYNAMICBONEV2_GET_M_EXCLUSIONS_OFFSET UNITYSDK_OFFSET(0x1BE70D10)
#define DYNAMICBONEV2_GET_M_FREEZEAXIS_OFFSET UNITYSDK_OFFSET(0x1BE70C70)
#define DYNAMICBONEV2_GET_M_REFERENCEOBJECT_OFFSET UNITYSDK_OFFSET(0x1BE70CB0)
#define DYNAMICBONEV2_GET_M_ROOT_OFFSET UNITYSDK_OFFSET(0x1BE70A30)
#define DYNAMICBONEV2_GET_M_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1BE70C50)
#define DYNAMICBONEV2_GET_M_UPDATERATE_OFFSET UNITYSDK_OFFSET(0x1BE70C10)
#define DYNAMICBONEV2_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1BE71720)
#define DYNAMICBONEV2_INITTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1BE71220)
#define DYNAMICBONEV2_MANUALFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1BE71B30)
#define DYNAMICBONEV2_MANUALLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1BE72680)
#define DYNAMICBONEV2_MANUALONDISABLE_OFFSET UNITYSDK_OFFSET(0x1BE71820)
#define DYNAMICBONEV2_MANUALONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1BE72800)
#define DYNAMICBONEV2_MANUALONENABLE_OFFSET UNITYSDK_OFFSET(0x1BE717C0)
#define DYNAMICBONEV2_MANUALONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1BE72720)
#define DYNAMICBONEV2_MANUALSTART_OFFSET UNITYSDK_OFFSET(0x1BE71830)
#define DYNAMICBONEV2_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0x1BE72670)
#define DYNAMICBONEV2_MANUALWAITFORFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1BE71BB0)
#define DYNAMICBONEV2_MIRRORVECTOR_OFFSET UNITYSDK_OFFSET(0x1BE76C70)
#define DYNAMICBONEV2_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x1BE71B70)
#define DYNAMICBONEV2_REBINDTRANSFORMTOPARTICLES_OFFSET UNITYSDK_OFFSET(0x1BE70F00)
#define DYNAMICBONEV2_RECURSIONPROCESSPARTICLES_OFFSET UNITYSDK_OFFSET(0x1BE764A0)
#define DYNAMICBONEV2_RECURSIONSETUPPARTICLES_OFFSET UNITYSDK_OFFSET(0x1BE75270)
#define DYNAMICBONEV2_RESETPARTICLESPOSITION_OFFSET UNITYSDK_OFFSET(0x1BE71420)
#define DYNAMICBONEV2_SETTIMESCALE_OFFSET UNITYSDK_OFFSET(0x1BE711C0)
#define DYNAMICBONEV2_SETUPPARTICLES_1_OFFSET UNITYSDK_OFFSET(0x1BE75E00)
#define DYNAMICBONEV2_SETUPPARTICLES_OFFSET UNITYSDK_OFFSET(0x1BE71840)
#define DYNAMICBONEV2_SETWEIGHT_OFFSET UNITYSDK_OFFSET(0x1BE711D0)
#define DYNAMICBONEV2_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1BE71740)
#define DYNAMICBONEV2_SET_M_UPDATERATE_OFFSET UNITYSDK_OFFSET(0x1BE70C30)
#define DYNAMICBONEV2_SKIPUPDATEPARTICLES_OFFSET UNITYSDK_OFFSET(0x1BE73DF0)
#define DYNAMICBONEV2_UPDATEDYNAMICBONES_1_OFFSET UNITYSDK_OFFSET(0x1BE72320)
#define DYNAMICBONEV2_UPDATEDYNAMICBONES_OFFSET UNITYSDK_OFFSET(0x1BE72B90)
#define DYNAMICBONEV2_UPDATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1BE74C50)
#define DYNAMICBONEV2_UPDATEPARTICLES1_OFFSET UNITYSDK_OFFSET(0x1BE72BA0)
#define DYNAMICBONEV2_UPDATEPARTICLES2_OFFSET UNITYSDK_OFFSET(0x1BE72F60)
#define DYNAMICBONEV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE76CD0)
#define DYNAMICBONEV2__RECURSIONSETUPPARTICLES_B__70_0_OFFSET UNITYSDK_OFFSET(0x1BE76E10)

inline static constexpr unsigned int DynamicBoneV2_TypeDefinitionIndex = 33073;

class DynamicBoneV2 : public ::System::Object
{
public:
	::DynamicBoneV2_UpdateConfig* updateConfig; // 0x10
	::System::Single timescale; // 0x18
	::DynamicBoneV2_TransformConfig* transformConfig; // 0x20
	::DynamicBoneConfigV2* config; // 0x28
	::UnityEngine::Vector3 m_LocalGravity; // 0x30
	::UnityEngine::Vector3 m_ObjectMove; // 0x3C
	::UnityEngine::Vector3 m_ObjectPrevPosition; // 0x48
	::System::Single m_BoneTotalLength; // 0x54
	::System::Single m_ObjectScale; // 0x58
	::System::Single m_Time; // 0x5C
	::System::Single m_Weight; // 0x60
	::System::Boolean m_DistantDisabled; // 0x64
	::System::Collections::Generic::List_1<::DynamicBoneV2_Particle*>* m_Particles; // 0x68
	::System::Boolean drawGizmos; // 0x70
	::UnityEngine::Transform* _transform; // 0x78
	::System::Boolean _enabled; // 0x80
	::System::Int32 _tempIndex; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2__CTOR_OFFSET))(this);
	}

	::UnityEngine::Transform* get_m_Root()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_GET_M_ROOT_OFFSET))(this);
	}

	::System::String* GetLabelText()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_GETLABELTEXT_OFFSET))(this);
	}

	::System::Single get_m_UpdateRate()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_GET_M_UPDATERATE_OFFSET))(this);
	}

	::System::Void set_m_UpdateRate(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_SET_M_UPDATERATE_OFFSET))(this, value);
	}

	::DynamicBoneV2_UpdateMode get_m_UpdateMode()
	{
		return ((::DynamicBoneV2_UpdateMode(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_GET_M_UPDATEMODE_OFFSET))(this);
	}

	::DynamicBoneV2_FreezeAxis get_m_FreezeAxis()
	{
		return ((::DynamicBoneV2_FreezeAxis(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_GET_M_FREEZEAXIS_OFFSET))(this);
	}

	::System::Boolean get_m_DistantDisable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_GET_M_DISTANTDISABLE_OFFSET))(this);
	}

	::UnityEngine::Transform* get_m_ReferenceObject()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_GET_M_REFERENCEOBJECT_OFFSET))(this);
	}

	::System::Single get_m_DistanceToObject()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_GET_M_DISTANCETOOBJECT_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::DynamicBoneColliderBase*>* get_m_Colliders()
	{
		return ((::System::Collections::Generic::List_1<::DynamicBoneColliderBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_GET_M_COLLIDERS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* get_m_Exclusions()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_GET_M_EXCLUSIONS_OFFSET))(this);
	}

	static ::System::String* GetPath(::UnityEngine::Transform* transform)
	{
		return ((::System::String*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_GETPATH_OFFSET))(transform);
	}

	::System::Void BindTransform(::UnityEngine::Transform* transform, ::DynamicBoneV2_TransformConfig* transformConfig)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::DynamicBoneV2_TransformConfig*))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_BINDTRANSFORM_OFFSET))(this, transform, transformConfig);
	}

	::System::Void AfterSwitchLOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_AFTERSWITCHLOD_OFFSET))(this);
	}

	::System::Void SetTimeScale(::System::Single timeScale)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_SETTIMESCALE_OFFSET))(this, timeScale);
	}

	::System::Void SetWeight(::System::Single w)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_SETWEIGHT_OFFSET))(this, w);
	}

	::System::Single GetWeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_GETWEIGHT_OFFSET))(this);
	}

	::UnityEngine::Transform* get_transform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_GET_TRANSFORM_OFFSET))(this);
	}

	::System::Boolean get_enabled()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_GET_ENABLED_OFFSET))(this);
	}

	::System::Void set_enabled(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_SET_ENABLED_OFFSET))(this, value);
	}

	::System::Void ManualStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_MANUALSTART_OFFSET))(this);
	}

	::System::Void ManualFixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_MANUALFIXEDUPDATE_OFFSET))(this);
	}

	::System::Void ManualWaitForFixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_MANUALWAITFORFIXEDUPDATE_OFFSET))(this);
	}

	::System::Void ManualUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_MANUALUPDATE_OFFSET))(this);
	}

	::System::Void ManualLateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_MANUALLATEUPDATE_OFFSET))(this);
	}

	::System::Void ManualOnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_MANUALONENABLE_OFFSET))(this);
	}

	::System::Void ManualOnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_MANUALONDISABLE_OFFSET))(this);
	}

	::System::Void ManualOnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_MANUALONVALIDATE_OFFSET))(this);
	}

	::System::Void ManualOnDrawGizmosSelected()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_MANUALONDRAWGIZMOSSELECTED_OFFSET))(this);
	}

	::System::Void UpdateDynamicBones()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_UPDATEDYNAMICBONES_OFFSET))(this);
	}

	::System::Void PreUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_PREUPDATE_OFFSET))(this);
	}

	::System::Void CheckDistance()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_CHECKDISTANCE_OFFSET))(this);
	}

	::System::Void UpdateDynamicBones_1(::System::Single t)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_UPDATEDYNAMICBONES_1_OFFSET))(this, t);
	}

	::System::Void SetupParticles()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_SETUPPARTICLES_OFFSET))(this);
	}

	::System::Void RebindTransformToParticles()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_REBINDTRANSFORMTOPARTICLES_OFFSET))(this);
	}

	::System::Void AppendParticles(::UnityEngine::Transform* b, ::System::Int32 parentIndex, ::System::Single boneLength)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_APPENDPARTICLES_OFFSET))(this, b, parentIndex, boneLength);
	}

	::System::Void AppendParticlesV2(::UnityEngine::Transform* b, ::System::Int32 parentIndex, ::System::Single boneLength)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_APPENDPARTICLESV2_OFFSET))(this, b, parentIndex, boneLength);
	}

	::System::Void RecursionSetupParticles(::DynamicBoneV2_Particle* p, ::UnityEngine::Transform* b, ::System::Int32 parentIndex, ::System::Single boneLength)
	{
		return ((::System::Void(*)(::PVOID, ::DynamicBoneV2_Particle*, ::UnityEngine::Transform*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_RECURSIONSETUPPARTICLES_OFFSET))(this, p, b, parentIndex, boneLength);
	}

	::System::Single SetupParticles_1(::DynamicBoneV2_Particle* p, ::UnityEngine::Transform* b, ::System::Int32 parentIndex, ::System::Single boneLength)
	{
		return ((::System::Single(*)(::PVOID, ::DynamicBoneV2_Particle*, ::UnityEngine::Transform*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_SETUPPARTICLES_1_OFFSET))(this, p, b, parentIndex, boneLength);
	}

	::System::Void RecursionProcessParticles(::DynamicBoneV2_Particle* p, ::UnityEngine::Transform* b, ::System::Single boneLength, ::System::Action_3<::UnityEngine::Transform*, ::System::Int32, ::System::Single>* callback)
	{
		return ((::System::Void(*)(::PVOID, ::DynamicBoneV2_Particle*, ::UnityEngine::Transform*, ::System::Single, ::System::Action_3<::UnityEngine::Transform*, ::System::Int32, ::System::Single>*))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_RECURSIONPROCESSPARTICLES_OFFSET))(this, p, b, boneLength, callback);
	}

	::System::Void UpdateParameters()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_UPDATEPARAMETERS_OFFSET))(this);
	}

	::System::Void InitTransforms()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_INITTRANSFORMS_OFFSET))(this);
	}

	::System::Void ResetParticlesPosition()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_RESETPARTICLESPOSITION_OFFSET))(this);
	}

	::System::Void CacheAnimPose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_CACHEANIMPOSE_OFFSET))(this);
	}

	::System::Void UpdateParticles1(::System::Single timeVar)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_UPDATEPARTICLES1_OFFSET))(this, timeVar);
	}

	::System::Void UpdateParticles2(::System::Single timeVar)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_UPDATEPARTICLES2_OFFSET))(this, timeVar);
	}

	::System::Void SkipUpdateParticles()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_SKIPUPDATEPARTICLES_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 MirrorVector(::UnityEngine::Vector3 v, ::UnityEngine::Vector3 axis)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_MIRRORVECTOR_OFFSET))(v, axis);
	}

	::System::Void ApplyParticlesToTransforms()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_APPLYPARTICLESTOTRANSFORMS_OFFSET))(this);
	}

	::System::Void _RecursionSetupParticles_b__70_0(::UnityEngine::Transform* _b, ::System::Int32 _parentIndex, ::System::Single _boneLength)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + DYNAMICBONEV2__RECURSIONSETUPPARTICLES_B__70_0_OFFSET))(this, _b, _parentIndex, _boneLength);
	}
};
