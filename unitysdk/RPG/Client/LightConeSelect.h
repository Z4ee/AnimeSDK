#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LIGHTCONESELECT_ADD_ONHIGHLIGHTEDINDEXCHANGED_OFFSET UNITYSDK_OFFSET(0xA66C050)
#define RPG_CLIENT_LIGHTCONESELECT_CHANGETONEXTCOROUTINE_OFFSET UNITYSDK_OFFSET(0xA66EA70)
#define RPG_CLIENT_LIGHTCONESELECT_FINDCAMERA3D_OFFSET UNITYSDK_OFFSET(0xA66C1F0)
#define RPG_CLIENT_LIGHTCONESELECT_GET_HIGHLIGHTEDINDEX_OFFSET UNITYSDK_OFFSET(0xA66F510)
#define RPG_CLIENT_LIGHTCONESELECT_GET_INMANUALCONTROL_OFFSET UNITYSDK_OFFSET(0xA66F570)
#define RPG_CLIENT_LIGHTCONESELECT_GET_INSNAP_OFFSET UNITYSDK_OFFSET(0xA66F550)
#define RPG_CLIENT_LIGHTCONESELECT_GET_INTERVALDEGREE_OFFSET UNITYSDK_OFFSET(0xA66F0D0)
#define RPG_CLIENT_LIGHTCONESELECT_GET_NUMBER_OFFSET UNITYSDK_OFFSET(0xA66EA20)
#define RPG_CLIENT_LIGHTCONESELECT_GET_ROTATEDEGREE_OFFSET UNITYSDK_OFFSET(0xA66F530)
#define RPG_CLIENT_LIGHTCONESELECT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA66CDD0)
#define RPG_CLIENT_LIGHTCONESELECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA66C130)
#define RPG_CLIENT_LIGHTCONESELECT_PLAYGRADUALHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xA66D200)
#define RPG_CLIENT_LIGHTCONESELECT_REMOVE_ONHIGHLIGHTEDINDEXCHANGED_OFFSET UNITYSDK_OFFSET(0xA66C0C0)
#define RPG_CLIENT_LIGHTCONESELECT_RESETLIGHTCONES_OFFSET UNITYSDK_OFFSET(0xA66C2A0)
#define RPG_CLIENT_LIGHTCONESELECT_SET_HIGHLIGHTEDINDEX_OFFSET UNITYSDK_OFFSET(0xA66F520)
#define RPG_CLIENT_LIGHTCONESELECT_SET_INMANUALCONTROL_OFFSET UNITYSDK_OFFSET(0xA66F580)
#define RPG_CLIENT_LIGHTCONESELECT_SET_INSNAP_OFFSET UNITYSDK_OFFSET(0xA66F560)
#define RPG_CLIENT_LIGHTCONESELECT_SET_ROTATEDEGREE_OFFSET UNITYSDK_OFFSET(0xA66F540)
#define RPG_CLIENT_LIGHTCONESELECT_SHOULDSNAPTONEXT_OFFSET UNITYSDK_OFFSET(0xA66EC40)
#define RPG_CLIENT_LIGHTCONESELECT_SNAPTONEXT_OFFSET UNITYSDK_OFFSET(0xA66EDB0)
#define RPG_CLIENT_LIGHTCONESELECT_SNAPTOSELF_OFFSET UNITYSDK_OFFSET(0xA66EF40)
#define RPG_CLIENT_LIGHTCONESELECT_SNAP_OFFSET UNITYSDK_OFFSET(0xA66EBD0)
#define RPG_CLIENT_LIGHTCONESELECT_UPDATELIGHTBEAMTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA66D270)
#define RPG_CLIENT_LIGHTCONESELECT_UPDATELIGHTCONESTATE_OFFSET UNITYSDK_OFFSET(0xA66D800)
#define RPG_CLIENT_LIGHTCONESELECT__CCTOR_OFFSET UNITYSDK_OFFSET(0xA66F7E0)
#define RPG_CLIENT_LIGHTCONESELECT__CTOR_OFFSET UNITYSDK_OFFSET(0xA66F6B0)
#define RPG_CLIENT_LIGHTCONESELECT__DOSNAP_OFFSET UNITYSDK_OFFSET(0xA66F1C0)
#define RPG_CLIENT_LIGHTCONESELECT__GETCEILDEGREE_OFFSET UNITYSDK_OFFSET(0xA66F050)
#define RPG_CLIENT_LIGHTCONESELECT__GETFLOORDEGREE_OFFSET UNITYSDK_OFFSET(0xA66F3C0)
#define RPG_CLIENT_LIGHTCONESELECT__STOPSNAP_OFFSET UNITYSDK_OFFSET(0xA66F440)
#define RPG_CLIENT_LIGHTCONESELECT__UPDATEIDLETIMER_OFFSET UNITYSDK_OFFSET(0xA66EB20)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeSelect_TypeDefinitionIndex = 65474;

	class LightConeSelect : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Single* StaticGet_CircularDegree()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(LightConeSelect_TypeDefinitionIndex)->GetStaticField(0xA850);
		}
		::System::Boolean updateTransform; // 0x18
		::System::Boolean waveDirChange; // 0x19
		::UnityEngine::AnimationCurve* waveCurve; // 0x20
		::System::Single waveAmplititude; // 0x28
		::System::Single waveSpeed; // 0x2C
		::System::Single wantDegree; // 0x30
		::System::Single rotateDuration; // 0x34
		::System::Boolean changeToNextSucceed; // 0x38
		::UnityEngine::AnimationCurve* changeSucceedCurve; // 0x40
		::System::Boolean changeToNextFailed; // 0x48
		::UnityEngine::AnimationCurve* changeFailedCurve; // 0x50
		::System::Boolean autoRotate; // 0x58
		::System::Boolean IdleRotate; // 0x59
		::System::Single IdleTime; // 0x5C
		::UnityEngine::Color highLightColor; // 0x60
		::UnityEngine::Color noLightColor; // 0x70
		::System::Boolean changeHighLightRatio; // 0x80
		::System::Single highLightRatio; // 0x84
		::System::Single selectDegreeRange; // 0x88
		::UnityEngine::Color backLerpColor; // 0x8C
		::System::Single backLerpValue; // 0x9C
		::System::Single backFaceContrast; // 0xA0
		::System::Single backFaceMidPoint; // 0xA4
		::System::Boolean backFaceFlip; // 0xA8
		::System::Boolean fakeLightEnable; // 0xA9
		::System::Single distanceToPivot; // 0xAC
		::System::Single lightBeamToPivot; // 0xB0
		::System::Single offsetDegree; // 0xB4
		::System::Int32 offsetIndex; // 0xB8
		::System::Single distanceSmooth; // 0xBC
		::System::Single rotationSmooth; // 0xC0
		::System::Boolean reverseClockwise; // 0xC4
		::UnityEngine::Transform* highlightTransform; // 0xC8
		::UnityEngine::Transform* rotatePivot; // 0xD0
		::UnityEngine::Transform* lightBeam; // 0xD8
		::Il2CppArray<::UnityEngine::Transform*>* lightCones; // 0xE0
		::Il2CppArray<::UnityEngine::Transform*>* AnimeLightCones; // 0xE8
		::UnityEngine::Transform* AdaptAnchor; // 0xF0
		::System::Action_2<::System::Int32, ::System::Int32>* OnHighlightedIndexChanged; // 0xF8
		::UnityEngine::Camera* camera3D; // 0x100
		::UnityEngine::Animation* anim; // 0x108
		::System::String* gradualHighLightClip; // 0x110
		::System::Int32 _MainColorID; // 0x118
		::System::Int32 _FlipOnBackfaceID; // 0x11C
		::System::Int32 _MainTexID; // 0x120
		::System::Int32 _LerpColorID; // 0x124
		::System::Int32 _LerpValueID; // 0x128
		::System::Int32 _ContrastID; // 0x12C
		::System::Int32 _MidPointID; // 0x130
		::System::Int32 _HighlightedIndex_k__BackingField; // 0x134
		::System::Boolean _InSnap_k__BackingField; // 0x138
		::System::Single _RotateDegree; // 0x13C
		::System::Single _IdleTimer; // 0x140
		::System::Boolean _InManualControl; // 0x144
		::System::Boolean _IdleTimerPaused; // 0x145
		::UnityEngine::Coroutine* _SnapCoroutine; // 0x148

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT__CCTOR_OFFSET))();
		}

		::System::Void add_OnHighlightedIndexChanged(::System::Action_2<::System::Int32, ::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT_ADD_ONHIGHLIGHTEDINDEXCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_OnHighlightedIndexChanged(::System::Action_2<::System::Int32, ::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT_REMOVE_ONHIGHLIGHTEDINDEXCHANGED_OFFSET))(this, value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT_ONENABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT_LATEUPDATE_OFFSET))(this);
		}

		::System::Void PlayGradualHighlight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT_PLAYGRADUALHIGHLIGHT_OFFSET))(this);
		}

		::System::Void ResetLightCones()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT_RESETLIGHTCONES_OFFSET))(this);
		}

		::System::Void UpdateLightConeState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT_UPDATELIGHTCONESTATE_OFFSET))(this);
		}

		::System::Void UpdateLightBeamTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT_UPDATELIGHTBEAMTRANSFORM_OFFSET))(this);
		}

		::System::Void FindCamera3D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT_FINDCAMERA3D_OFFSET))(this);
		}

		::System::Collections::IEnumerator* ChangeToNextCoroutine(::System::Single deltaDegree, ::System::Single deltaTime, ::System::Boolean changeSucceed)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT_CHANGETONEXTCOROUTINE_OFFSET))(this, deltaDegree, deltaTime, changeSucceed);
		}

		::System::Void Snap(::System::Boolean forward)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT_SNAP_OFFSET))(this, forward);
		}

		::System::Void SnapToNext(::System::Boolean forward)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT_SNAPTONEXT_OFFSET))(this, forward);
		}

		::System::Void SnapToSelf(::System::Boolean forward)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT_SNAPTOSELF_OFFSET))(this, forward);
		}

		::System::Boolean ShouldSnapToNext(::System::Boolean forward)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT_SHOULDSNAPTONEXT_OFFSET))(this, forward);
		}

		::System::Void _DoSnap(::System::Single deltaDegree, ::System::Boolean changeSucceed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT__DOSNAP_OFFSET))(this, deltaDegree, changeSucceed);
		}

		::System::Void _StopSnap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT__STOPSNAP_OFFSET))(this);
		}

		::System::Single _GetFloorDegree()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT__GETFLOORDEGREE_OFFSET))(this);
		}

		::System::Single _GetCeilDegree()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT__GETCEILDEGREE_OFFSET))(this);
		}

		::System::Void _UpdateIdleTimer(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT__UPDATEIDLETIMER_OFFSET))(this, deltaTime);
		}

		::System::Int32 get_HighlightedIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT_GET_HIGHLIGHTEDINDEX_OFFSET))(this);
		}

		::System::Void set_HighlightedIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT_SET_HIGHLIGHTEDINDEX_OFFSET))(this, value);
		}

		::System::Single get_RotateDegree()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT_GET_ROTATEDEGREE_OFFSET))(this);
		}

		::System::Void set_RotateDegree(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT_SET_ROTATEDEGREE_OFFSET))(this, value);
		}

		::System::Boolean get_InSnap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT_GET_INSNAP_OFFSET))(this);
		}

		::System::Void set_InSnap(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT_SET_INSNAP_OFFSET))(this, value);
		}

		::System::Boolean get_InManualControl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT_GET_INMANUALCONTROL_OFFSET))(this);
		}

		::System::Void set_InManualControl(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT_SET_INMANUALCONTROL_OFFSET))(this, value);
		}

		::System::Int32 get_Number()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT_GET_NUMBER_OFFSET))(this);
		}

		::System::Single get_IntervalDegree()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT_GET_INTERVALDEGREE_OFFSET))(this);
		}
	};
}
