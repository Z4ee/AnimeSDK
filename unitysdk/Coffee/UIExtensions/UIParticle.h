#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Coffee/UIExtensions/UIParticle_AutoScalingMode.h"
#include "unitysdk/Coffee/UIExtensions/UIParticle_MeshSharing.h"
#include "unitysdk/Coffee/UIExtensions/UIParticle_PositionMode.h"
#include "unitysdk/UnityEngine/DrivenRectTransformTracker.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Coffee::UIExtensions { class AnimatableProperty; }
namespace Coffee::UIExtensions { class UIParticleRenderer; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class ParticleSystem; }

#define COFFEE_UIEXTENSIONS_UIPARTICLE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D7CB630)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D7CD380)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GETBAKECAMERA_OFFSET UNITYSDK_OFFSET(0x1D7CFF90)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GETRENDERER_OFFSET UNITYSDK_OFFSET(0x1D7CE8C0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_ABSOLUTEMODE_OFFSET UNITYSDK_OFFSET(0x1D7CA8E0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_AUTOSCALINGMODE_OFFSET UNITYSDK_OFFSET(0x1D7CAC60)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_AUTOSCALING_OFFSET UNITYSDK_OFFSET(0x1D7CAAB0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_CANRENDER_OFFSET UNITYSDK_OFFSET(0x1D7CAED0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_CANSIMULATE_OFFSET UNITYSDK_OFFSET(0x1D7CAE80)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_CANVASSCALE_OFFSET UNITYSDK_OFFSET(0x1D7CB5F0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_DISABLEOPT_OFFSET UNITYSDK_OFFSET(0x1D7CA550)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1D7CA5A0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_GROUPMAXID_OFFSET UNITYSDK_OFFSET(0x1D7CA810)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x1D7CB590)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_ISPRIMARY_OFFSET UNITYSDK_OFFSET(0x1D7CACE0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_MATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0x1D7CB580)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0x1D7CB500)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_MESHSHARING_OFFSET UNITYSDK_OFFSET(0x1D7CA580)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_PARENTSCALE_OFFSET UNITYSDK_OFFSET(0x1D7CB5B0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_PARTICLES_OFFSET UNITYSDK_OFFSET(0x1D7CB4F0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_POSITIONMODE_OFFSET UNITYSDK_OFFSET(0x1D7CA8C0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_RAYCASTTARGET_OFFSET UNITYSDK_OFFSET(0x1D7CA560)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_SCALE3DFORCALC_OFFSET UNITYSDK_OFFSET(0x1D7CB150)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_SCALE3D_OFFSET UNITYSDK_OFFSET(0x1D7CB110)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x1D7CAF30)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_USEMESHSHARING_OFFSET UNITYSDK_OFFSET(0x1D7CACD0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1D7CCA30)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D7CC680)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D7CBD80)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_PAUSE_OFFSET UNITYSDK_OFFSET(0x1D7CCDF0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_PLAY_OFFSET UNITYSDK_OFFSET(0x1D7CCB40)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_REFRESHPARTICLES_1_OFFSET UNITYSDK_OFFSET(0x1D7CDEE0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_REFRESHPARTICLES_2_OFFSET UNITYSDK_OFFSET(0x1D7CC120)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_REFRESHPARTICLES_OFFSET UNITYSDK_OFFSET(0x1D7CC630)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_RESETGROUPID_OFFSET UNITYSDK_OFFSET(0x1D7CA7B0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_RESUME_OFFSET UNITYSDK_OFFSET(0x1D7CCF50)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SETPARTICLESYSTEMINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x1D7CD690)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SETPARTICLESYSTEMINSTANCE_OFFSET UNITYSDK_OFFSET(0x1D7CD4E0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SETPARTICLESYSTEMPREFAB_OFFSET UNITYSDK_OFFSET(0x1D7CE290)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_ABSOLUTEMODE_OFFSET UNITYSDK_OFFSET(0x1D7CA8F0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_AUTOSCALINGMODE_OFFSET UNITYSDK_OFFSET(0x1D7CABB0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_AUTOSCALING_OFFSET UNITYSDK_OFFSET(0x1D7CAAC0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_CANVASSCALE_OFFSET UNITYSDK_OFFSET(0x1D7CB610)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1D7CA5B0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_GROUPMAXID_OFFSET UNITYSDK_OFFSET(0x1D7CA820)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x1D7CB5A0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_MESHSHARING_OFFSET UNITYSDK_OFFSET(0x1D7CA590)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_PARENTSCALE_OFFSET UNITYSDK_OFFSET(0x1D7CB5D0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_POSITIONMODE_OFFSET UNITYSDK_OFFSET(0x1D7CA8D0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_RAYCASTTARGET_OFFSET UNITYSDK_OFFSET(0x1D7CA570)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_SCALE3D_OFFSET UNITYSDK_OFFSET(0x1D7CB130)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x1D7CAF40)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_STARTEMISSION_OFFSET UNITYSDK_OFFSET(0x1D7CD100)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_STOPEMISSION_OFFSET UNITYSDK_OFFSET(0x1D7CD240)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_STOP_OFFSET UNITYSDK_OFFSET(0x1D7CCFA0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D7CCAB0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D7CCA70)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1D7D4220)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D7D41E0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_UPDATEPARTICLECOUNT_OFFSET UNITYSDK_OFFSET(0x1D7D3EC0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_UPDATERENDERERMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D7D4260)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_UPDATERENDERERS_OFFSET UNITYSDK_OFFSET(0x1D7CFB60)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_UPDATETRACKER_OFFSET UNITYSDK_OFFSET(0x1D7CAC70)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_UPDATETRANSFORMSCALE_OFFSET UNITYSDK_OFFSET(0x1D7CF7A0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7D4C70)
#define COFFEE_UIEXTENSIONS_UIPARTICLE__REFRESHPARTICLES_B__100_0_OFFSET UNITYSDK_OFFSET(0x1D7D4D80)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D7D4DF0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1D7D4E80)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D7D4F20)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D7D4F30)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___BASE_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1D7D4F40)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___BASE_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D7D4FF0)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticle_TypeDefinitionIndex = 34218;

	class UIParticle : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		::System::Boolean m_IsTrail; // 0xF8
		::System::Boolean m_IgnoreCanvasScaler; // 0xF9
		::System::Boolean m_AbsoluteMode; // 0xFA
		::UnityEngine::Vector3 m_Scale3D; // 0xFC
		::Il2CppArray<::Coffee::UIExtensions::AnimatableProperty*>* m_AnimatableProperties; // 0x108
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* m_Particles; // 0x110
		::Coffee::UIExtensions::UIParticle_MeshSharing m_MeshSharing; // 0x118
		::System::Int32 m_GroupId; // 0x11C
		::System::Int32 m_GroupMaxId; // 0x120
		::Coffee::UIExtensions::UIParticle_PositionMode m_PositionMode; // 0x124
		::System::Boolean m_AutoScaling; // 0x128
		::System::Boolean m_UseOldVersion; // 0x129
		::Coffee::UIExtensions::UIParticle_AutoScalingMode m_AutoScalingMode; // 0x12C
		::System::Boolean m_IncludeInActivePS; // 0x130
		::System::Boolean m_PreloadMainTexture; // 0x131
		::System::Boolean m_DisableOpt; // 0x132
		::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleRenderer*>* _renderers; // 0x138
		::System::Int32 _groupId; // 0x140
		::UnityEngine::Camera* _orthoCamera; // 0x148
		::UnityEngine::DrivenRectTransformTracker _tracker; // 0x150
		::System::Boolean _isPaused_k__BackingField; // 0x151
		::UnityEngine::Vector3 _parentScale_k__BackingField; // 0x154
		::UnityEngine::Vector3 _canvasScale_k__BackingField; // 0x160

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_DisableOpt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_DISABLEOPT_OFFSET))(this);
		}

		::System::Boolean get_raycastTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_RAYCASTTARGET_OFFSET))(this);
		}

		::System::Void set_raycastTarget(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SET_RAYCASTTARGET_OFFSET))(this, value);
		}

		::Coffee::UIExtensions::UIParticle_MeshSharing get_meshSharing()
		{
			return ((::Coffee::UIExtensions::UIParticle_MeshSharing(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_MESHSHARING_OFFSET))(this);
		}

		::System::Void set_meshSharing(::Coffee::UIExtensions::UIParticle_MeshSharing value)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticle_MeshSharing))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SET_MESHSHARING_OFFSET))(this, value);
		}

		::System::Int32 get_groupId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_groupId(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SET_GROUPID_OFFSET))(this, value);
		}

		::System::Int32 get_groupMaxId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_GROUPMAXID_OFFSET))(this);
		}

		::System::Void set_groupMaxId(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SET_GROUPMAXID_OFFSET))(this, value);
		}

		::Coffee::UIExtensions::UIParticle_PositionMode get_positionMode()
		{
			return ((::Coffee::UIExtensions::UIParticle_PositionMode(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_POSITIONMODE_OFFSET))(this);
		}

		::System::Void set_positionMode(::Coffee::UIExtensions::UIParticle_PositionMode value)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticle_PositionMode))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SET_POSITIONMODE_OFFSET))(this, value);
		}

		::System::Boolean get_absoluteMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_ABSOLUTEMODE_OFFSET))(this);
		}

		::System::Void set_absoluteMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SET_ABSOLUTEMODE_OFFSET))(this, value);
		}

		::System::Boolean get_autoScaling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_AUTOSCALING_OFFSET))(this);
		}

		::System::Void set_autoScaling(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SET_AUTOSCALING_OFFSET))(this, value);
		}

		::Coffee::UIExtensions::UIParticle_AutoScalingMode get_autoScalingMode()
		{
			return ((::Coffee::UIExtensions::UIParticle_AutoScalingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_AUTOSCALINGMODE_OFFSET))(this);
		}

		::System::Void set_autoScalingMode(::Coffee::UIExtensions::UIParticle_AutoScalingMode value)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticle_AutoScalingMode))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SET_AUTOSCALINGMODE_OFFSET))(this, value);
		}

		::System::Boolean get_useMeshSharing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_USEMESHSHARING_OFFSET))(this);
		}

		::System::Boolean get_isPrimary()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_ISPRIMARY_OFFSET))(this);
		}

		::System::Boolean get_canSimulate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_CANSIMULATE_OFFSET))(this);
		}

		::System::Boolean get_canRender()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_CANRENDER_OFFSET))(this);
		}

		::System::Single get_scale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_SCALE_OFFSET))(this);
		}

		::System::Void set_scale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SET_SCALE_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_scale3D()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_SCALE3D_OFFSET))(this);
		}

		::System::Void set_scale3D(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SET_SCALE3D_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_scale3DForCalc()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_SCALE3DFORCALC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* get_particles()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_PARTICLES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Material*>* get_materials()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_MATERIALS_OFFSET))(this);
		}

		::UnityEngine::Material* get_materialForRendering()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_MATERIALFORRENDERING_OFFSET))(this);
		}

		::System::Boolean get_isPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_ISPAUSED_OFFSET))(this);
		}

		::System::Void set_isPaused(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SET_ISPAUSED_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_parentScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_PARENTSCALE_OFFSET))(this);
		}

		::System::Void set_parentScale(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SET_PARENTSCALE_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_canvasScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_CANVASSCALE_OFFSET))(this);
		}

		::System::Void set_canvasScale(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SET_CANVASSCALE_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_PLAY_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_PAUSE_OFFSET))(this);
		}

		::System::Void Resume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_RESUME_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_STOP_OFFSET))(this);
		}

		::System::Void StartEmission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_STARTEMISSION_OFFSET))(this);
		}

		::System::Void StopEmission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_STOPEMISSION_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_CLEAR_OFFSET))(this);
		}

		::System::Void SetParticleSystemInstance(::UnityEngine::GameObject* instance)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SETPARTICLESYSTEMINSTANCE_OFFSET))(this, instance);
		}

		::System::Void SetParticleSystemInstance_1(::UnityEngine::GameObject* instance, ::System::Boolean destroyOldParticles)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SETPARTICLESYSTEMINSTANCE_1_OFFSET))(this, instance, destroyOldParticles);
		}

		::System::Void SetParticleSystemPrefab(::UnityEngine::GameObject* prefab)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SETPARTICLESYSTEMPREFAB_OFFSET))(this, prefab);
		}

		::System::Void RefreshParticles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_REFRESHPARTICLES_OFFSET))(this);
		}

		::System::Void RefreshParticles_1(::UnityEngine::GameObject* root)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_REFRESHPARTICLES_1_OFFSET))(this, root);
		}

		::System::Void RefreshParticles_2(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* particles)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_REFRESHPARTICLES_2_OFFSET))(this, particles);
		}

		::System::Void UpdateTransformScale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_UPDATETRANSFORMSCALE_OFFSET))(this);
		}

		::System::Void UpdateRenderers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_UPDATERENDERERS_OFFSET))(this);
		}

		::System::Void UpdateParticleCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_UPDATEPARTICLECOUNT_OFFSET))(this);
		}

		::System::Void ResetGroupId()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_RESETGROUPID_OFFSET))(this);
		}

		::System::Void UpdateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_UPDATEMATERIAL_OFFSET))(this);
		}

		::System::Void UpdateGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_UPDATEGEOMETRY_OFFSET))(this);
		}

		::System::Void UpdateRendererMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_UPDATERENDERERMATERIAL_OFFSET))(this);
		}

		::Coffee::UIExtensions::UIParticleRenderer* GetRenderer(::System::Int32 index)
		{
			return ((::Coffee::UIExtensions::UIParticleRenderer*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GETRENDERER_OFFSET))(this, index);
		}

		::UnityEngine::Camera* GetBakeCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GETBAKECAMERA_OFFSET))(this);
		}

		::System::Void UpdateTracker()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_UPDATETRACKER_OFFSET))(this);
		}

		::System::Boolean _RefreshParticles_b__100_0(::UnityEngine::ParticleSystem* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE__REFRESHPARTICLES_B__100_0_OFFSET))(this, x);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___BASE_AWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_UpdateGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___BASE_UPDATEGEOMETRY_OFFSET))(this);
		}

		::System::Void __base_UpdateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___BASE_UPDATEMATERIAL_OFFSET))(this);
		}
	};
}
