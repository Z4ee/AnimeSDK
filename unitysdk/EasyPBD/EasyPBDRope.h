#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace EasyPBD { class EasyPBDRope_AttachmentData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define EASYPBD_EASYPBDROPE_ADDFORCE_OFFSET UNITYSDK_OFFSET(0x1C977CA0)
#define EASYPBD_EASYPBDROPE_ADDIMPULSETOPARTICLE_OFFSET UNITYSDK_OFFSET(0x1C977360)
#define EASYPBD_EASYPBDROPE_ADDIMPULSETOWHOLEROPE_OFFSET UNITYSDK_OFFSET(0x1C977680)
#define EASYPBD_EASYPBDROPE_ADDRANDOMFORCE_1_OFFSET UNITYSDK_OFFSET(0x1C977A70)
#define EASYPBD_EASYPBDROPE_ADDRANDOMFORCE_OFFSET UNITYSDK_OFFSET(0x1C977940)
#define EASYPBD_EASYPBDROPE_ADDROTATION_OFFSET UNITYSDK_OFFSET(0x1C977DD0)
#define EASYPBD_EASYPBDROPE_ADVANCEANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x1C974C00)
#define EASYPBD_EASYPBDROPE_APPLYANCHORPOSEDELTATOROPE_OFFSET UNITYSDK_OFFSET(0x1C9799D0)
#define EASYPBD_EASYPBDROPE_APPLYANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x1C974D50)
#define EASYPBD_EASYPBDROPE_APPLYSOFTMOTIONLIMITS_OFFSET UNITYSDK_OFFSET(0x1C972700)
#define EASYPBD_EASYPBDROPE_APPLYSWINGLIMIT_OFFSET UNITYSDK_OFFSET(0x1C975A90)
#define EASYPBD_EASYPBDROPE_ATTACHOBJECT_OFFSET UNITYSDK_OFFSET(0x1C976EC0)
#define EASYPBD_EASYPBDROPE_AUTOBINDATTACHMENTSFROMCURRENTTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1C9765E0)
#define EASYPBD_EASYPBDROPE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C972490)
#define EASYPBD_EASYPBDROPE_CACHELINERENDERER_OFFSET UNITYSDK_OFFSET(0x1C972530)
#define EASYPBD_EASYPBDROPE_CALCULATERESTLOCALDIRECTION_OFFSET UNITYSDK_OFFSET(0x1C97A8D0)
#define EASYPBD_EASYPBDROPE_CLAMPPARTICLEINDEX_OFFSET UNITYSDK_OFFSET(0x1C977300)
#define EASYPBD_EASYPBDROPE_CLAMPSTEPVELOCITY_OFFSET UNITYSDK_OFFSET(0x1C978740)
#define EASYPBD_EASYPBDROPE_CLEARATTACHMENTS_OFFSET UNITYSDK_OFFSET(0x1C9786D0)
#define EASYPBD_EASYPBDROPE_CLOSESTPOINTONSEGMENT_OFFSET UNITYSDK_OFFSET(0x1C979740)
#define EASYPBD_EASYPBDROPE_CONFIGURELINERENDERER_OFFSET UNITYSDK_OFFSET(0x1C9732A0)
#define EASYPBD_EASYPBDROPE_FACEROOTTOWARDS_OFFSET UNITYSDK_OFFSET(0x1C978460)
#define EASYPBD_EASYPBDROPE_FINDNEARESTRESTPARTICLEINDEX_OFFSET UNITYSDK_OFFSET(0x1C97A230)
#define EASYPBD_EASYPBDROPE_GETACCEPTEDANCHORINERTIALDELTA_OFFSET UNITYSDK_OFFSET(0x1C979FE0)
#define EASYPBD_EASYPBDROPE_GETANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x1C978A80)
#define EASYPBD_EASYPBDROPE_GETATTACHMENTBASEROTATION_OFFSET UNITYSDK_OFFSET(0x1C978E10)
#define EASYPBD_EASYPBDROPE_GETCLOSESTPOINTONROPE_OFFSET UNITYSDK_OFFSET(0x1C979500)
#define EASYPBD_EASYPBDROPE_GETIMPULSETIMESTEP_OFFSET UNITYSDK_OFFSET(0x1C977630)
#define EASYPBD_EASYPBDROPE_GETLIMITEDANCHORINERTIALDELTA_OFFSET UNITYSDK_OFFSET(0x1C97A100)
#define EASYPBD_EASYPBDROPE_GETRANDOMDIRECTIONSEED_OFFSET UNITYSDK_OFFSET(0x1C97A880)
#define EASYPBD_EASYPBDROPE_GETRANDOMFORCEDIRECTION_OFFSET UNITYSDK_OFFSET(0x1C977B10)
#define EASYPBD_EASYPBDROPE_GETRESTDIRECTION_OFFSET UNITYSDK_OFFSET(0x1C976450)
#define EASYPBD_EASYPBDROPE_GETRESTPARTICLEPOSITION_OFFSET UNITYSDK_OFFSET(0x1C97A330)
#define EASYPBD_EASYPBDROPE_GETROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C977FD0)
#define EASYPBD_EASYPBDROPE_GETROPETANGENT_OFFSET UNITYSDK_OFFSET(0x1C978BE0)
#define EASYPBD_EASYPBDROPE_GETTARGETANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x1C976060)
#define EASYPBD_EASYPBDROPE_GETTARGETANCHORROTATION_OFFSET UNITYSDK_OFFSET(0x1C976280)
#define EASYPBD_EASYPBDROPE_GETVERTICALONLYLOCALOFFSET_OFFSET UNITYSDK_OFFSET(0x1C9792A0)
#define EASYPBD_EASYPBDROPE_GET_PARTICLECOUNT_1_OFFSET UNITYSDK_OFFSET(0x1C972430)
#define EASYPBD_EASYPBDROPE_GET_PARTICLECOUNT_OFFSET UNITYSDK_OFFSET(0x1C972410)
#define EASYPBD_EASYPBDROPE_GET_SEGMENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C972420)
#define EASYPBD_EASYPBDROPE_HASVALIDSIMULATIONSTATE_OFFSET UNITYSDK_OFFSET(0x1C9749B0)
#define EASYPBD_EASYPBDROPE_INTEGRATE_OFFSET UNITYSDK_OFFSET(0x1C975660)
#define EASYPBD_EASYPBDROPE_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1C972E10)
#define EASYPBD_EASYPBDROPE_NORMALIZEANGLE_OFFSET UNITYSDK_OFFSET(0x1C97AD90)
#define EASYPBD_EASYPBDROPE_NORMALIZEEULER_OFFSET UNITYSDK_OFFSET(0x1C97A630)
#define EASYPBD_EASYPBDROPE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C972E90)
#define EASYPBD_EASYPBDROPE_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1C97AE70)
#define EASYPBD_EASYPBDROPE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C972CB0)
#define EASYPBD_EASYPBDROPE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1C972F10)
#define EASYPBD_EASYPBDROPE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1C973010)
#define EASYPBD_EASYPBDROPE_REBUILDINVERSEMASSES_OFFSET UNITYSDK_OFFSET(0x1C974ED0)
#define EASYPBD_EASYPBDROPE_REFRESHEDITORPREVIEW_OFFSET UNITYSDK_OFFSET(0x1C97AE30)
#define EASYPBD_EASYPBDROPE_REFRESHRESTDIRECTION_OFFSET UNITYSDK_OFFSET(0x1C974A30)
#define EASYPBD_EASYPBDROPE_RESETROOTROPES_OFFSET UNITYSDK_OFFSET(0x1C978150)
#define EASYPBD_EASYPBDROPE_RESETROPEFORSTATICPREVIEW_OFFSET UNITYSDK_OFFSET(0x1C975FA0)
#define EASYPBD_EASYPBDROPE_RESETROPE_1_OFFSET UNITYSDK_OFFSET(0x1C972890)
#define EASYPBD_EASYPBDROPE_RESETROPE_OFFSET UNITYSDK_OFFSET(0x1C974960)
#define EASYPBD_EASYPBDROPE_SAFENORMALIZE_OFFSET UNITYSDK_OFFSET(0x1C9798B0)
#define EASYPBD_EASYPBDROPE_SCHEDULEDFIXEDSTEP_OFFSET UNITYSDK_OFFSET(0x1C9736F0)
#define EASYPBD_EASYPBDROPE_SCHEDULEDLATESTEP_OFFSET UNITYSDK_OFFSET(0x1C9740F0)
#define EASYPBD_EASYPBDROPE_SETYAWROTATION_OFFSET UNITYSDK_OFFSET(0x1C9782F0)
#define EASYPBD_EASYPBDROPE_SHOULDAUTOBINDATTACHMENTSONINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C972830)
#define EASYPBD_EASYPBDROPE_SIMULATE_OFFSET UNITYSDK_OFFSET(0x1C973760)
#define EASYPBD_EASYPBDROPE_SOLVEDISTANCECONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1C9758F0)
#define EASYPBD_EASYPBDROPE_SOLVEDISTANCECONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1C978850)
#define EASYPBD_EASYPBDROPE_UPDATEANCHORMOVEMENTIMPULSECOOLDOWN_OFFSET UNITYSDK_OFFSET(0x1C974B80)
#define EASYPBD_EASYPBDROPE_UPDATEATTACHMENTS_OFFSET UNITYSDK_OFFSET(0x1C9739A0)
#define EASYPBD_EASYPBDROPE_UPDATELINERENDERER_OFFSET UNITYSDK_OFFSET(0x1C974140)
#define EASYPBD_EASYPBDROPE_WARNMISSINGLINERENDERER_OFFSET UNITYSDK_OFFSET(0x1C978B40)
#define EASYPBD_EASYPBDROPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C97B180)

namespace EasyPBD
{
	inline static constexpr unsigned int EasyPBDRope_TypeDefinitionIndex = 27267;

	class EasyPBDRope : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Int32 FixedParticleCount = 0x10; // 0x0
		// static const ::System::Single FixedSegmentLength; // 0x0
		// static const ::System::Single SoftDamping; // 0x0
		// static const ::System::Single SoftMaxStepDisplacement; // 0x0
		// static const ::System::Single SoftRandomDirectionAngle; // 0x0
		// static const ::System::Single SoftMaxExternalForceVelocity; // 0x0
		// static const ::System::Single SoftMinRandomForceVelocity; // 0x0
		// static const ::System::Single SoftMaxRandomForceVelocity; // 0x0
		// static const ::System::Single SoftRandomForceVerticalRatio; // 0x0
		::UnityEngine::Transform* anchor; // 0x18
		::System::Int32 solverIterations; // 0x20
		::System::Single damping; // 0x24
		::UnityEngine::Vector3 gravity; // 0x28
		::System::Collections::Generic::List_1<::EasyPBD::EasyPBDRope_AttachmentData*>* attachments; // 0x38
		::System::Boolean autoBindAttachmentsOnStart; // 0x40
		::System::Boolean constrainAttachmentsToRope; // 0x41
		::System::Boolean runtimeProjectAttachmentsToRope; // 0x42
		::System::Boolean limitSwingDistance; // 0x43
		::System::Single maxSwingDistance; // 0x44
		::System::Single maxStepDisplacement; // 0x48
		::System::Boolean anchorMovementDrivesPhysics; // 0x4C
		::System::Boolean limitAnchorMovement; // 0x4D
		::System::Single maxAnchorStepDisplacement; // 0x50
		::System::Boolean gateAnchorMovementImpulse; // 0x54
		::System::Single anchorMovementImpulseCooldown; // 0x58
		::System::Boolean randomizeDirection; // 0x5C
		::System::Single randomDirectionAngle; // 0x60
		::System::Int32 randomDirectionSeed; // 0x64
		::System::Single maxExternalForceVelocity; // 0x68
		::System::Single minRandomForceVelocity; // 0x6C
		::System::Single maxRandomForceVelocity; // 0x70
		::System::Single randomForceVerticalRatio; // 0x74
		::System::Boolean simulateInEditMode; // 0x78
		::System::Single editModeTimeStep; // 0x7C
		::System::Int32 editModeMaxSubsteps; // 0x80
		::System::Single ropeWidth; // 0x84
		::UnityEngine::Material* ropeMaterial; // 0x88
		::System::Boolean drawGizmos; // 0x90
		::System::Boolean drawSegmentGizmos; // 0x91
		::UnityEngine::Color gizmoColor; // 0x94
		::Il2CppArray<::UnityEngine::Vector3>* positions; // 0xA8
		::Il2CppArray<::UnityEngine::Vector3>* previousPositions; // 0xB0
		::Il2CppArray<::UnityEngine::Vector3>* linePositions; // 0xB8
		::Il2CppArray<::System::Single>* invMasses; // 0xC0
		::Il2CppArray<::System::Single>* particleMasses; // 0xC8
		::UnityEngine::LineRenderer* lineRendererCache; // 0xD0
		::UnityEngine::Vector3 simulatedAnchorPosition; // 0xD8
		::UnityEngine::Quaternion simulatedAnchorRotation; // 0xE4
		::UnityEngine::Vector3 restLocalDirection; // 0xF4
		::System::Int32 appliedRandomDirectionSeed; // 0x100
		::System::Single appliedRandomDirectionAngle; // 0x104
		::System::Boolean appliedRandomizeDirection; // 0x108
		::System::Boolean simulatedAnchorInitialized; // 0x109
		::System::Boolean autoBindApplied; // 0x10A
		::System::Single anchorMovementImpulseCooldownTimer; // 0x10C
		::System::Boolean warnedMissingAnchor; // 0x110
		::System::Boolean warnedMissingLineRenderer; // 0x111

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_particleCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GET_PARTICLECOUNT_OFFSET))(this);
		}

		::System::Single get_segmentLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GET_SEGMENTLENGTH_OFFSET))(this);
		}

		::System::Int32 get_ParticleCount_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GET_PARTICLECOUNT_1_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_ONVALIDATE_OFFSET))(this);
		}

		::System::Void ApplySoftMotionLimits()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_APPLYSOFTMOTIONLIMITS_OFFSET))(this);
		}

		::System::Void ScheduledFixedStep(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_SCHEDULEDFIXEDSTEP_OFFSET))(this, deltaTime);
		}

		::System::Void ScheduledLateStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_SCHEDULEDLATESTEP_OFFSET))(this);
		}

		::System::Void Simulate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_SIMULATE_OFFSET))(this, deltaTime);
		}

		::System::Void ResetRope()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_RESETROPE_OFFSET))(this);
		}

		::System::Void ResetRopeForStaticPreview()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_RESETROPEFORSTATICPREVIEW_OFFSET))(this);
		}

		::System::Void ResetRope_1(::System::Boolean autoBindFromCurrentTransforms)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_RESETROPE_1_OFFSET))(this, autoBindFromCurrentTransforms);
		}

		::System::Void AttachObject(::UnityEngine::Transform* target, ::System::Int32 particleIndex, ::System::Single extraMass, ::UnityEngine::Vector3 localOffset, ::UnityEngine::Vector3 localEuler, ::UnityEngine::Vector3 impulseVelocity)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_ATTACHOBJECT_OFFSET))(this, target, particleIndex, extraMass, localOffset, localEuler, impulseVelocity);
		}

		::System::Void AddImpulseToParticle(::System::Int32 particleIndex, ::UnityEngine::Vector3 velocity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_ADDIMPULSETOPARTICLE_OFFSET))(this, particleIndex, velocity);
		}

		::System::Void AddImpulseToWholeRope(::UnityEngine::Vector3 velocity, ::System::Single falloff)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_ADDIMPULSETOWHOLEROPE_OFFSET))(this, velocity, falloff);
		}

		::System::Void AddRandomForce(::System::Int32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_ADDRANDOMFORCE_OFFSET))(this, level);
		}

		::System::Void AddRandomForce_1(::System::Single strength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_ADDRANDOMFORCE_1_OFFSET))(this, strength);
		}

		::System::Void AddForce(::UnityEngine::Vector3 direction, ::System::Single strength, ::System::Single falloff)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_ADDFORCE_OFFSET))(this, direction, strength, falloff);
		}

		::System::Void AddRotation(::System::Single yawDegrees)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_ADDROTATION_OFFSET))(this, yawDegrees);
		}

		::System::Void SetYawRotation(::System::Single yawDegrees)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_SETYAWROTATION_OFFSET))(this, yawDegrees);
		}

		::System::Void FaceRootTowards(::UnityEngine::Vector3 worldPosition, ::System::Single yawOffsetDegrees)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_FACEROOTTOWARDS_OFFSET))(this, worldPosition, yawOffsetDegrees);
		}

		::UnityEngine::Transform* GetRootTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GETROOTTRANSFORM_OFFSET))(this);
		}

		::System::Void ResetRootRopes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_RESETROOTROPES_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetRandomForceDirection()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GETRANDOMFORCEDIRECTION_OFFSET))(this);
		}

		::System::Single GetImpulseTimeStep()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GETIMPULSETIMESTEP_OFFSET))(this);
		}

		::System::Void ClearAttachments()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_CLEARATTACHMENTS_OFFSET))(this);
		}

		::System::Void Integrate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_INTEGRATE_OFFSET))(this, deltaTime);
		}

		::UnityEngine::Vector3 ClampStepVelocity(::UnityEngine::Vector3 velocity)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_CLAMPSTEPVELOCITY_OFFSET))(this, velocity);
		}

		::System::Void SolveDistanceConstraints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_SOLVEDISTANCECONSTRAINTS_OFFSET))(this);
		}

		::System::Void SolveDistanceConstraint(::System::Int32 indexA, ::System::Int32 indexB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_SOLVEDISTANCECONSTRAINT_OFFSET))(this, indexA, indexB);
		}

		::System::Void ApplySwingLimit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_APPLYSWINGLIMIT_OFFSET))(this);
		}

		::System::Void RebuildInverseMasses()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_REBUILDINVERSEMASSES_OFFSET))(this);
		}

		::System::Void UpdateLineRenderer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_UPDATELINERENDERER_OFFSET))(this);
		}

		::System::Void UpdateAttachments()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_UPDATEATTACHMENTS_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetClosestPointOnRope(::UnityEngine::Vector3 worldPosition)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GETCLOSESTPOINTONROPE_OFFSET))(this, worldPosition);
		}

		static ::UnityEngine::Vector3 ClosestPointOnSegment(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::UnityEngine::Vector3 point)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_CLOSESTPOINTONSEGMENT_OFFSET))(start, end, point);
		}

		static ::UnityEngine::Vector3 GetVerticalOnlyLocalOffset(::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 localOffset)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GETVERTICALONLYLOCALOFFSET_OFFSET))(rotation, localOffset);
		}

		::UnityEngine::Quaternion GetAttachmentBaseRotation(::UnityEngine::Vector3 tangent, ::System::Boolean alignToRopeTangent)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GETATTACHMENTBASEROTATION_OFFSET))(this, tangent, alignToRopeTangent);
		}

		::UnityEngine::Vector3 GetRopeTangent(::System::Int32 particleIndex)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GETROPETANGENT_OFFSET))(this, particleIndex);
		}

		::System::Void ApplyAnchorPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_APPLYANCHORPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetAnchorPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GETANCHORPOSITION_OFFSET))(this);
		}

		::System::Void AdvanceAnchorPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_ADVANCEANCHORPOSITION_OFFSET))(this);
		}

		::System::Void ApplyAnchorPoseDeltaToRope(::UnityEngine::Vector3 previousAnchorPosition, ::UnityEngine::Quaternion previousAnchorRotation, ::UnityEngine::Vector3 anchorDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_APPLYANCHORPOSEDELTATOROPE_OFFSET))(this, previousAnchorPosition, previousAnchorRotation, anchorDelta);
		}

		::System::Void UpdateAnchorMovementImpulseCooldown(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_UPDATEANCHORMOVEMENTIMPULSECOOLDOWN_OFFSET))(this, deltaTime);
		}

		::UnityEngine::Vector3 GetAcceptedAnchorInertialDelta(::UnityEngine::Vector3 anchorDelta)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GETACCEPTEDANCHORINERTIALDELTA_OFFSET))(this, anchorDelta);
		}

		::UnityEngine::Vector3 GetLimitedAnchorInertialDelta(::UnityEngine::Vector3 anchorDelta)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GETLIMITEDANCHORINERTIALDELTA_OFFSET))(this, anchorDelta);
		}

		::UnityEngine::Vector3 GetTargetAnchorPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GETTARGETANCHORPOSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion GetTargetAnchorRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GETTARGETANCHORROTATION_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetRestDirection()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GETRESTDIRECTION_OFFSET))(this);
		}

		::System::Boolean ShouldAutoBindAttachmentsOnInitialize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_SHOULDAUTOBINDATTACHMENTSONINITIALIZE_OFFSET))(this);
		}

		::System::Void AutoBindAttachmentsFromCurrentTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_AUTOBINDATTACHMENTSFROMCURRENTTRANSFORMS_OFFSET))(this);
		}

		::System::Int32 FindNearestRestParticleIndex(::UnityEngine::Vector3 worldPosition)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_FINDNEARESTRESTPARTICLEINDEX_OFFSET))(this, worldPosition);
		}

		::UnityEngine::Vector3 GetRestParticlePosition(::System::Int32 particleIndex)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GETRESTPARTICLEPOSITION_OFFSET))(this, particleIndex);
		}

		::System::Void RefreshRestDirection(::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_REFRESHRESTDIRECTION_OFFSET))(this, force);
		}

		::UnityEngine::Vector3 CalculateRestLocalDirection(::System::Int32 seed)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_CALCULATERESTLOCALDIRECTION_OFFSET))(this, seed);
		}

		::System::Int32 GetRandomDirectionSeed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GETRANDOMDIRECTIONSEED_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 NormalizeEuler(::UnityEngine::Vector3 euler)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_NORMALIZEEULER_OFFSET))(euler);
		}

		static ::System::Single NormalizeAngle(::System::Single angle)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_NORMALIZEANGLE_OFFSET))(angle);
		}

		::System::Int32 ClampParticleIndex(::System::Int32 particleIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_CLAMPPARTICLEINDEX_OFFSET))(this, particleIndex);
		}

		::System::Boolean IsInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_ISINITIALIZED_OFFSET))(this);
		}

		::System::Boolean HasValidSimulationState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_HASVALIDSIMULATIONSTATE_OFFSET))(this);
		}

		::System::Void CacheLineRenderer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_CACHELINERENDERER_OFFSET))(this);
		}

		::System::Void ConfigureLineRenderer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_CONFIGURELINERENDERER_OFFSET))(this);
		}

		::System::Void WarnMissingLineRenderer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_WARNMISSINGLINERENDERER_OFFSET))(this);
		}

		::System::Void RefreshEditorPreview()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_REFRESHEDITORPREVIEW_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_ONDRAWGIZMOS_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 SafeNormalize(::UnityEngine::Vector3 value, ::UnityEngine::Vector3 fallback)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_SAFENORMALIZE_OFFSET))(value, fallback);
		}
	};
}
