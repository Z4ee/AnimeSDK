#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UI3DCameraStateBase.h"
#include "unitysdk/RPG/GameCore/UI3DMap3DCameraState_InnerState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C0EE84ABF5F20949;
namespace RPG::Client { class UI3DMap3DCameraSettings; }
namespace RPG::GameCore { class UI3DMap3DCameraStateConfig; }
namespace RPG::GameCore { class UI3DVirtualCameraComponent; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GETZOOMALPHA_OFFSET UNITYSDK_OFFSET(0xE7CDBD0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GET__CAMERATRANSFORM_OFFSET UNITYSDK_OFFSET(0xE7CCF70)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GET__DEFAULTZOOM_OFFSET UNITYSDK_OFFSET(0xE7CAFF0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GET__ZOOMMAX_OFFSET UNITYSDK_OFFSET(0xE7CDCA0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GET__ZOOMMIN_OFFSET UNITYSDK_OFFSET(0xE7CDC80)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GET__ZOOMOUTERMAX_OFFSET UNITYSDK_OFFSET(0xE7D1410)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GET__ZOOMOUTERMIN_OFFSET UNITYSDK_OFFSET(0xE7D1480)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GET__ZOOMSPEED_OFFSET UNITYSDK_OFFSET(0xE7D0770)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_INITCONFIG_OFFSET UNITYSDK_OFFSET(0xE7CAF00)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_INIT_OFFSET UNITYSDK_OFFSET(0xE7CB170)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE7CB2E0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_RESETBYMAPBOUNDSV2_OFFSET UNITYSDK_OFFSET(0xE7CC8F0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_RESETCAMERA_OFFSET UNITYSDK_OFFSET(0xE7CAF50)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_RESET_OFFSET UNITYSDK_OFFSET(0xE7CC7C0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_STARTCENTERINGWORLDPOSLIST_OFFSET UNITYSDK_OFFSET(0xE7CE2F0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_STARTCENTERINGWORLDPOS_OFFSET UNITYSDK_OFFSET(0xE7CDCC0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__CLAMPPIVOTINSIDEOUTERRECT_OFFSET UNITYSDK_OFFSET(0xE7D0F30)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__CLEARDAMPINGRECOVERSTATES_OFFSET UNITYSDK_OFFSET(0xE7CE240)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__CLEARZOOM_OFFSET UNITYSDK_OFFSET(0xE7CEDF0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEOUTSCREENRATIO_OFFSET UNITYSDK_OFFSET(0xE7CEF50)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEPIVOTPOSTOBOXINGRECT_1_OFFSET UNITYSDK_OFFSET(0xE7CDFB0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEPIVOTPOSTOBOXINGRECT_OFFSET UNITYSDK_OFFSET(0xE7CFF50)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTESCREENRECT_1_OFFSET UNITYSDK_OFFSET(0xE7CE900)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTESCREENRECT_OFFSET UNITYSDK_OFFSET(0xE7D0D70)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTETARGETPOSTOBOXINGWORLDPOS_OFFSET UNITYSDK_OFFSET(0xE7CCFC0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEWORLDTOCAMERAMATRIXGL_OFFSET UNITYSDK_OFFSET(0xE7D05D0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEWORLDTRANSLATIONDAMPING_OFFSET UNITYSDK_OFFSET(0xE7CF690)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEWORLDTRANSLATIONDEFAULT_OFFSET UNITYSDK_OFFSET(0xE7CF460)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEZOOMOUTRATIO_OFFSET UNITYSDK_OFFSET(0xE7D0790)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEZOOM_OFFSET UNITYSDK_OFFSET(0xE7CB9E0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xE7C8DE0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__GETINNERBOUNDS_OFFSET UNITYSDK_OFFSET(0xE7CFEB0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__GETOUTERBOUNDS_OFFSET UNITYSDK_OFFSET(0xE7D0E90)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__MOVEPIVOTBYTRANSLATE_OFFSET UNITYSDK_OFFSET(0xE7CB580)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__MOVEPIVOTBYZOOM_OFFSET UNITYSDK_OFFSET(0xE7CBD50)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__NORMSCREENPOINTTORAY_1_OFFSET UNITYSDK_OFFSET(0xE7D00A0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__NORMSCREENPOINTTORAY_OFFSET UNITYSDK_OFFSET(0xE7D0210)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__ONMAP3DTOUCHENABLED_OFFSET UNITYSDK_OFFSET(0xE7D13B0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__ONZOOMSLIDERALPHACHANGE_OFFSET UNITYSDK_OFFSET(0xE7D0C00)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__RECOVERCAMERATOBOUNDS_OFFSET UNITYSDK_OFFSET(0xE7CC200)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__RECOVERZOOM_OFFSET UNITYSDK_OFFSET(0xE7D0900)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__SCREENPOINTTORAY_OFFSET UNITYSDK_OFFSET(0xE7CEE40)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__SCREENTOWORLDTRANSLATION_OFFSET UNITYSDK_OFFSET(0xE7CFA00)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__STARTRESETTOINITIALPOSITION_OFFSET UNITYSDK_OFFSET(0xE7CD9E0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__SYNCTRANSFORMTOVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xE7CB7C0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__UPDATECAMERATRANSFORM_OFFSET UNITYSDK_OFFSET(0xE7CB010)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__UPDATECENTERING_OFFSET UNITYSDK_OFFSET(0xE7CC560)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__UPDATEMAP2DBOUND_OFFSET UNITYSDK_OFFSET(0xE7CCE50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UI3DMap3DCameraState_TypeDefinitionIndex = 57701;

	class UI3DMap3DCameraState : public ::RPG::GameCore::UI3DCameraStateBase
	{
	public:
		::RPG::GameCore::UI3DMap3DCameraStateConfig* _Config; // 0x38
		::UnityEngine::Transform* _MapTransform; // 0x40
		::UnityEngine::AnimationCurve* _CenteringCurve; // 0x48
		::RPG::Client::UI3DMap3DCameraSettings* _MonoSettings; // 0x50
		::Class_1_C0EE84ABF5F20949* _CameraInputController; // 0x58
		::System::Single _ZoomRecoverVelocity; // 0x60
		::System::Single _CurrentZoom; // 0x64
		::System::Boolean _TransformedLastFrame; // 0x68
		::UnityEngine::Rect _Map2DBounds; // 0x6C
		::System::Single _CurrentCenteringTime; // 0x7C
		::UnityEngine::Vector3 _BeginCenteringPosition; // 0x80
		::UnityEngine::Vector3 _CenteringTargetPosition; // 0x8C
		::System::Nullable_1<::UnityEngine::Vector3> _InitialCameraPosition; // 0x98
		::System::Single _CenteringDuration; // 0xA8
		::UnityEngine::Vector3 _WorldTranslationVelocity; // 0xAC
		::UnityEngine::Vector3 _CurrentReturnBoundsVelocity; // 0xB8
		::System::Single _ZoomAcc; // 0xC4
		::System::Single _LastZoomVelocity; // 0xC8
		::RPG::GameCore::UI3DMap3DCameraState_InnerState _InnerState; // 0xCC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__CTOR_OFFSET))(this);
		}

		::System::Void InitConfig(::RPG::GameCore::UI3DMap3DCameraStateConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UI3DMap3DCameraStateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE_INITCONFIG_OFFSET))(this, a1);
		}

		::System::Void ResetCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE_RESETCAMERA_OFFSET))(this);
		}

		::System::Void Init(::RPG::GameCore::UI3DVirtualCameraComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UI3DVirtualCameraComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE_INIT_OFFSET))(this, a1);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE_RESET_OFFSET))(this);
		}

		::System::Void ResetByMapBoundsV2(::UnityEngine::Transform* a1, ::UnityEngine::Bounds a2, ::System::Boolean a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Bounds, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE_RESETBYMAPBOUNDSV2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single GetZoomAlpha()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GETZOOMALPHA_OFFSET))(this);
		}

		::System::Void StartCenteringWorldPos(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE_STARTCENTERINGWORLDPOS_OFFSET))(this, a1);
		}

		::System::Void StartCenteringWorldPosList(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE_STARTCENTERINGWORLDPOSLIST_OFFSET))(this, a1);
		}

		::System::Void _ClearDampingRecoverStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__CLEARDAMPINGRECOVERSTATES_OFFSET))(this);
		}

		::System::Void _UpdateCameraTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__UPDATECAMERATRANSFORM_OFFSET))(this);
		}

		::System::Void _SyncTransformToVirtualCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__SYNCTRANSFORMTOVIRTUALCAMERA_OFFSET))(this);
		}

		::System::Void _MovePivotByZoom(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__MOVEPIVOTBYZOOM_OFFSET))(this, a1, a2);
		}

		::System::Void _MovePivotByTranslate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__MOVEPIVOTBYTRANSLATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 _ComputeWorldTranslationDefault()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEWORLDTRANSLATIONDEFAULT_OFFSET))(this);
		}

		::UnityEngine::Vector3 _ComputeWorldTranslationDamping()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEWORLDTRANSLATIONDAMPING_OFFSET))(this);
		}

		::System::Void _RecoverCameraToBounds(::System::Single a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__RECOVERCAMERATOBOUNDS_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Ray _ScreenPointToRay(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Ray(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__SCREENPOINTTORAY_OFFSET))(this, a1);
		}

		::UnityEngine::Ray _NormScreenPointToRay(::UnityEngine::Vector3 a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::UnityEngine::Ray(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__NORMSCREENPOINTTORAY_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Ray _NormScreenPointToRay_1(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Ray(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__NORMSCREENPOINTTORAY_1_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 _ScreenToWorldTranslation(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__SCREENTOWORLDTRANSLATION_OFFSET))(this, a1);
		}

		::System::Single _ComputeZoom()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEZOOM_OFFSET))(this);
		}

		::System::Void _ClearZoom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__CLEARZOOM_OFFSET))(this);
		}

		::System::Void _OnZoomSliderAlphaChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__ONZOOMSLIDERALPHACHANGE_OFFSET))(this, a1);
		}

		::System::Boolean _ComputeTargetPosToBoxingWorldPos(::UnityEngine::Vector3 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector3& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTETARGETPOSTOBOXINGWORLDPOS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean _ComputePivotPosToBoxingRect(::UnityEngine::Rect a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEPIVOTPOSTOBOXINGRECT_OFFSET))(this, a1, a2);
		}

		::System::Boolean _ComputePivotPosToBoxingRect_1(::UnityEngine::Rect a1, ::UnityEngine::Matrix4x4 a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Matrix4x4, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEPIVOTPOSTOBOXINGRECT_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _ComputeOutScreenRatio(::UnityEngine::Rect a1, ::UnityEngine::Vector3 a2, ::System::Single& a3, ::System::Single& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Vector3, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEOUTSCREENRATIO_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Rect _GetOuterBounds(::UnityEngine::Rect a1)
		{
			return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__GETOUTERBOUNDS_OFFSET))(this, a1);
		}

		::UnityEngine::Rect _GetInnerBounds(::UnityEngine::Rect a1)
		{
			return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__GETINNERBOUNDS_OFFSET))(this, a1);
		}

		::System::Boolean _ClampPivotInsideOuterRect(::UnityEngine::Rect a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__CLAMPPIVOTINSIDEOUTERRECT_OFFSET))(this, a1, a2);
		}

		::System::Boolean _ComputeScreenRect(::UnityEngine::Rect& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTESCREENRECT_OFFSET))(this, a1);
		}

		::System::Boolean _ComputeScreenRect_1(::UnityEngine::Rect& a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect&, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTESCREENRECT_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean _UpdateCentering()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__UPDATECENTERING_OFFSET))(this);
		}

		::System::Void _OnMap3DTouchEnabled(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__ONMAP3DTOUCHENABLED_OFFSET))(this, a1);
		}

		::System::Boolean _UpdateMap2DBound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__UPDATEMAP2DBOUND_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 _ComputeWorldToCameraMatrixGL(::UnityEngine::Matrix4x4 a1)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEWORLDTOCAMERAMATRIXGL_OFFSET))(this, a1);
		}

		::System::Single _ComputeZoomOutRatio(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEZOOMOUTRATIO_OFFSET))(this, a1);
		}

		::System::Void _RecoverZoom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__RECOVERZOOM_OFFSET))(this);
		}

		::System::Void _StartResetToInitialPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__STARTRESETTOINITIALPOSITION_OFFSET))(this);
		}

		::UnityEngine::Transform* get__CameraTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GET__CAMERATRANSFORM_OFFSET))(this);
		}

		::System::Single get__DefaultZoom()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GET__DEFAULTZOOM_OFFSET))(this);
		}

		::System::Single get__ZoomMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GET__ZOOMMAX_OFFSET))(this);
		}

		::System::Single get__ZoomMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GET__ZOOMMIN_OFFSET))(this);
		}

		::System::Single get__ZoomSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GET__ZOOMSPEED_OFFSET))(this);
		}

		::System::Single get__ZoomOuterMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GET__ZOOMOUTERMAX_OFFSET))(this);
		}

		::System::Single get__ZoomOuterMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GET__ZOOMOUTERMIN_OFFSET))(this);
		}
	};
}
