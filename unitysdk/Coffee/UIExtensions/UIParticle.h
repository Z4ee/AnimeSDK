#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Coffee/UIExtensions/UIParticle_AutoScalingMode.h"
#include "unitysdk/Coffee/UIExtensions/UIParticle_MeshSharing.h"
#include "unitysdk/Coffee/UIExtensions/UIParticle_PositionMode.h"
#include "unitysdk/UnityEngine/AdditionalCanvasShaderChannels.h"
#include "unitysdk/UnityEngine/DrivenRectTransformTracker.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Coffee::UIExtensions { class AnimatableProperty; }
namespace Coffee::UIExtensions { class UIParticleRenderer; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class ParticleSystem; }

#define COFFEE_UIEXTENSIONS_UIPARTICLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x12BB3CE0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GETBAKECAMERA_OFFSET UNITYSDK_OFFSET(0x12BB5440)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GETMATERIALSFORRENDERING_OFFSET UNITYSDK_OFFSET(0x12BB2570)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GETMATERIALS_OFFSET UNITYSDK_OFFSET(0x12BB3E10)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GETRENDERER_OFFSET UNITYSDK_OFFSET(0x12BB4800)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_ABSOLUTEMODE_OFFSET UNITYSDK_OFFSET(0x12BB2AC0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_ADDITIONALCANVASSHADERCHANNELS_OFFSET UNITYSDK_OFFSET(0x12BB2360)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_AUTOSCALINGMODE_OFFSET UNITYSDK_OFFSET(0x12BB2BF0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_AUTOSCALING_OFFSET UNITYSDK_OFFSET(0x12BB2AF0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_CANRENDER_OFFSET UNITYSDK_OFFSET(0x12BB2CA0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_CANSIMULATE_OFFSET UNITYSDK_OFFSET(0x12BB2C90)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_CANVASSCALE_OFFSET UNITYSDK_OFFSET(0x12BB2EC0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_CUSTOMVIEWSIZE_OFFSET UNITYSDK_OFFSET(0x12BB2C20)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x12BB2A90)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x12BB2E60)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_ISPRIMARY_OFFSET UNITYSDK_OFFSET(0x12BB2C80)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_MESHSHARING_OFFSET UNITYSDK_OFFSET(0x12BB2A70)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_PARENTSCALE_OFFSET UNITYSDK_OFFSET(0x12BB2E80)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_PARTICLES_OFFSET UNITYSDK_OFFSET(0x12BB2E50)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_POSITIONMODE_OFFSET UNITYSDK_OFFSET(0x12BB2AA0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_RAYCASTTARGET_OFFSET UNITYSDK_OFFSET(0x12BB2A50)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_SCALE3DFORCALC_OFFSET UNITYSDK_OFFSET(0x12BB2D30)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_SCALE3D_OFFSET UNITYSDK_OFFSET(0x12BB2CF0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x12BB2CC0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_TIMESCALEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x12BB2C50)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_USECUSTOMVIEW_OFFSET UNITYSDK_OFFSET(0x12BB2C00)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_USEMESHSHARING_OFFSET UNITYSDK_OFFSET(0x12BB2C70)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x12BB3690)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12BB3400)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12BB2F00)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x12BB26D0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_PAUSEONTIME_OFFSET UNITYSDK_OFFSET(0x12BB2380)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_PAUSE_OFFSET UNITYSDK_OFFSET(0x12BB3830)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_PLAY_OFFSET UNITYSDK_OFFSET(0x12BB3700)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_REFRESHPARTICLES_1_OFFSET UNITYSDK_OFFSET(0x12BB41C0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_REFRESHPARTICLES_2_OFFSET UNITYSDK_OFFSET(0x12BB3150)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_REFRESHPARTICLES_OFFSET UNITYSDK_OFFSET(0x12BB33E0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_RESETGROUPID_OFFSET UNITYSDK_OFFSET(0x12BB30B0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_RESUME_OFFSET UNITYSDK_OFFSET(0x12BB3960)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SETPARTICLESYSTEMINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x12BB3F00)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SETPARTICLESYSTEMINSTANCE_OFFSET UNITYSDK_OFFSET(0x12BB3EF0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SETPARTICLESYSTEMPREFAB_OFFSET UNITYSDK_OFFSET(0x12BB44D0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_ABSOLUTEMODE_OFFSET UNITYSDK_OFFSET(0x12BB2AD0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_AUTOSCALINGMODE_OFFSET UNITYSDK_OFFSET(0x12BB2B80)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_AUTOSCALING_OFFSET UNITYSDK_OFFSET(0x12BB2B00)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_CANVASSCALE_OFFSET UNITYSDK_OFFSET(0x12BB2EE0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_CUSTOMVIEWSIZE_OFFSET UNITYSDK_OFFSET(0x12BB2C30)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x12BB2E70)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_MESHSHARING_OFFSET UNITYSDK_OFFSET(0x12BB2A80)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_PARENTSCALE_OFFSET UNITYSDK_OFFSET(0x12BB2EA0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_POSITIONMODE_OFFSET UNITYSDK_OFFSET(0x12BB2AB0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_RAYCASTTARGET_OFFSET UNITYSDK_OFFSET(0x12BB2A60)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_SCALE3D_OFFSET UNITYSDK_OFFSET(0x12BB2D10)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x12BB2CD0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_TIMESCALEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x12BB2C60)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_USECUSTOMVIEW_OFFSET UNITYSDK_OFFSET(0x12BB2C10)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_STARTEMISSION_OFFSET UNITYSDK_OFFSET(0x12BB3AA0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_STOPEMISSION_OFFSET UNITYSDK_OFFSET(0x12BB3BC0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_STOP_OFFSET UNITYSDK_OFFSET(0x12BB3970)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12BB36B0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12BB36A0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x12BB7580)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x12BB7570)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_UPDATERENDERERMATERIAL_OFFSET UNITYSDK_OFFSET(0x12BB7590)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_UPDATERENDERERS_OFFSET UNITYSDK_OFFSET(0x12BB5350)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_UPDATETRANSFORMSCALE_OFFSET UNITYSDK_OFFSET(0x12BB4D90)
#define COFFEE_UIEXTENSIONS_UIPARTICLE__CHECKCOMPONENTINANCESTOR_OFFSET UNITYSDK_OFFSET(0x12BB2820)
#define COFFEE_UIEXTENSIONS_UIPARTICLE__CHECKNESTEDADDCOMPONENT_OFFSET UNITYSDK_OFFSET(0x12BB2710)
#define COFFEE_UIEXTENSIONS_UIPARTICLE__CLEARCANVASCACHE_OFFSET UNITYSDK_OFFSET(0x12BB2720)
#define COFFEE_UIEXTENSIONS_UIPARTICLE__COLLECTADDITIONALCANVASSHADERCHANNELS_OFFSET UNITYSDK_OFFSET(0x12BB2370)
#define COFFEE_UIEXTENSIONS_UIPARTICLE__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB7A00)
#define COFFEE_UIEXTENSIONS_UIPARTICLE__GETCACHEDPARENTCANVAS_OFFSET UNITYSDK_OFFSET(0x12BB28E0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE__GETNEARESTPARENTCANVAS_OFFSET UNITYSDK_OFFSET(0x12BB2990)
#define COFFEE_UIEXTENSIONS_UIPARTICLE__MESHSHARINGVALIDITYCHECK_OFFSET UNITYSDK_OFFSET(0x12BB2A20)
#define COFFEE_UIEXTENSIONS_UIPARTICLE__UPDATECANVASSETTING_OFFSET UNITYSDK_OFFSET(0x12BB2730)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticle_TypeDefinitionIndex = 40705;

	class UIParticle : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		::UnityEngine::Canvas* m_CachedParentCanvas; // 0xF0
		::System::Boolean m_IsAutoSave; // 0xF8
		::System::UInt64 m_GroupId; // 0x100
		::System::Boolean m_IsTrail; // 0x108
		::System::Boolean m_IgnoreCanvasScaler; // 0x109
		::System::Boolean m_AbsoluteMode; // 0x10A
		::UnityEngine::Vector3 m_Scale3D; // 0x10C
		::Il2CppArray<::Coffee::UIExtensions::AnimatableProperty*>* m_AnimatableProperties; // 0x118
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* m_Particles; // 0x120
		::Coffee::UIExtensions::UIParticle_MeshSharing m_MeshSharing; // 0x128
		::Coffee::UIExtensions::UIParticle_PositionMode m_PositionMode; // 0x12C
		::System::Boolean m_AutoScaling; // 0x130
		::Coffee::UIExtensions::UIParticle_AutoScalingMode m_AutoScalingMode; // 0x134
		::System::Boolean m_UseCustomView; // 0x138
		::System::Single m_CustomViewSize; // 0x13C
		::System::Single m_TimeScaleMultiplier; // 0x140
		::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleRenderer*>* _renderers; // 0x148
		::UnityEngine::Camera* _bakeCamera; // 0x150
		::System::UInt64 _groupId; // 0x158
		::System::Boolean _isScaleStored; // 0x160
		::UnityEngine::Vector3 _storedScale; // 0x164
		::UnityEngine::DrivenRectTransformTracker _tracker; // 0x170
		::System::Boolean _isPaused_k__BackingField; // 0x171
		::UnityEngine::Vector3 _parentScale_k__BackingField; // 0x174
		::UnityEngine::Vector3 _canvasScale_k__BackingField; // 0x180

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE__CTOR_OFFSET))(this);
		}

		::UnityEngine::AdditionalCanvasShaderChannels get_AdditionalCanvasShaderChannels()
		{
			return ((::UnityEngine::AdditionalCanvasShaderChannels(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_ADDITIONALCANVASSHADERCHANNELS_OFFSET))(this);
		}

		::System::Void PauseOnTime(::System::Single time, ::System::UInt32 randomSeed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_PAUSEONTIME_OFFSET))(this, time, randomSeed);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Material*>* GetMaterialsForRendering()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GETMATERIALSFORRENDERING_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void _CheckNestedAddComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE__CHECKNESTEDADDCOMPONENT_OFFSET))(this);
		}

		::System::Boolean _CheckComponentInAncestor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE__CHECKCOMPONENTINANCESTOR_OFFSET))(this);
		}

		::System::Void _UpdateCanvasSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE__UPDATECANVASSETTING_OFFSET))(this);
		}

		::UnityEngine::Canvas* _GetCachedParentCanvas()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE__GETCACHEDPARENTCANVAS_OFFSET))(this);
		}

		::UnityEngine::Canvas* _GetNearestParentCanvas()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE__GETNEARESTPARENTCANVAS_OFFSET))(this);
		}

		::System::Void _ClearCanvasCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE__CLEARCANVASCACHE_OFFSET))(this);
		}

		::UnityEngine::AdditionalCanvasShaderChannels _CollectAdditionalCanvasShaderChannels()
		{
			return ((::UnityEngine::AdditionalCanvasShaderChannels(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE__COLLECTADDITIONALCANVASSHADERCHANNELS_OFFSET))(this);
		}

		::System::Void _MeshSharingValidityCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE__MESHSHARINGVALIDITYCHECK_OFFSET))(this);
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

		::System::UInt64 get_groupId()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_GROUPID_OFFSET))(this);
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

		::System::Boolean get_useCustomView()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_USECUSTOMVIEW_OFFSET))(this);
		}

		::System::Void set_useCustomView(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SET_USECUSTOMVIEW_OFFSET))(this, value);
		}

		::System::Single get_customViewSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_CUSTOMVIEWSIZE_OFFSET))(this);
		}

		::System::Void set_customViewSize(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SET_CUSTOMVIEWSIZE_OFFSET))(this, value);
		}

		::System::Single get_timeScaleMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_TIMESCALEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_timeScaleMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SET_TIMESCALEMULTIPLIER_OFFSET))(this, value);
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

		::System::Void GetMaterials(::System::Collections::Generic::List_1<::UnityEngine::Material*>* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GETMATERIALS_OFFSET))(this, result);
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

		::System::Void RefreshParticles_2(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* particleSystems)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_REFRESHPARTICLES_2_OFFSET))(this, particleSystems);
		}

		::System::Void UpdateTransformScale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_UPDATETRANSFORMSCALE_OFFSET))(this);
		}

		::System::Void UpdateRenderers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_UPDATERENDERERS_OFFSET))(this);
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
	};
}
