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

#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GETZOOMALPHA_OFFSET UNITYSDK_OFFSET(0xCFA4F40)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GET__CAMERATRANSFORM_OFFSET UNITYSDK_OFFSET(0xCFA42F0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GET__DEFAULTZOOM_OFFSET UNITYSDK_OFFSET(0xCFA23B0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GET__ZOOMMAX_OFFSET UNITYSDK_OFFSET(0xCFA5010)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GET__ZOOMMIN_OFFSET UNITYSDK_OFFSET(0xCFA4FF0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GET__ZOOMOUTERMAX_OFFSET UNITYSDK_OFFSET(0xCFA8780)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GET__ZOOMOUTERMIN_OFFSET UNITYSDK_OFFSET(0xCFA87F0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GET__ZOOMSPEED_OFFSET UNITYSDK_OFFSET(0xCFA7AE0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_INITCONFIG_OFFSET UNITYSDK_OFFSET(0xCFA22C0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_INIT_OFFSET UNITYSDK_OFFSET(0xCFA2530)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCFA26D0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_RESETBYMAPBOUNDSV2_OFFSET UNITYSDK_OFFSET(0xCFA3C70)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_RESETCAMERA_OFFSET UNITYSDK_OFFSET(0xCFA2310)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_RESET_OFFSET UNITYSDK_OFFSET(0xCFA3B20)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_STARTCENTERINGWORLDPOSLIST_OFFSET UNITYSDK_OFFSET(0xCFA5660)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_STARTCENTERINGWORLDPOS_OFFSET UNITYSDK_OFFSET(0xCFA5030)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__CLAMPPIVOTINSIDEOUTERRECT_OFFSET UNITYSDK_OFFSET(0xCFA82A0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__CLEARDAMPINGRECOVERSTATES_OFFSET UNITYSDK_OFFSET(0xCFA55B0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__CLEARZOOM_OFFSET UNITYSDK_OFFSET(0xCFA6160)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEOUTSCREENRATIO_OFFSET UNITYSDK_OFFSET(0xCFA62C0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEPIVOTPOSTOBOXINGRECT_1_OFFSET UNITYSDK_OFFSET(0xCFA5320)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEPIVOTPOSTOBOXINGRECT_OFFSET UNITYSDK_OFFSET(0xCFA72C0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTESCREENRECT_1_OFFSET UNITYSDK_OFFSET(0xCFA5C70)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTESCREENRECT_OFFSET UNITYSDK_OFFSET(0xCFA80E0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTETARGETPOSTOBOXINGWORLDPOS_OFFSET UNITYSDK_OFFSET(0xCFA4340)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEWORLDTOCAMERAMATRIXGL_OFFSET UNITYSDK_OFFSET(0xCFA7940)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEWORLDTRANSLATIONDAMPING_OFFSET UNITYSDK_OFFSET(0xCFA6A00)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEWORLDTRANSLATIONDEFAULT_OFFSET UNITYSDK_OFFSET(0xCFA67D0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEZOOMOUTRATIO_OFFSET UNITYSDK_OFFSET(0xCFA7B00)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEZOOM_OFFSET UNITYSDK_OFFSET(0xCFA2D50)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xCFA01C0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__GETINNERBOUNDS_OFFSET UNITYSDK_OFFSET(0xCFA7220)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__GETOUTERBOUNDS_OFFSET UNITYSDK_OFFSET(0xCFA8200)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__MOVEPIVOTBYTRANSLATE_OFFSET UNITYSDK_OFFSET(0xCFA2960)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__MOVEPIVOTBYZOOM_OFFSET UNITYSDK_OFFSET(0xCFA30B0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__NORMSCREENPOINTTORAY_1_OFFSET UNITYSDK_OFFSET(0xCFA7410)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__NORMSCREENPOINTTORAY_OFFSET UNITYSDK_OFFSET(0xCFA7580)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__ONMAP3DTOUCHENABLED_OFFSET UNITYSDK_OFFSET(0xCFA8720)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__ONZOOMSLIDERALPHACHANGE_OFFSET UNITYSDK_OFFSET(0xCFA7F70)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__RECOVERCAMERATOBOUNDS_OFFSET UNITYSDK_OFFSET(0xCFA3550)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__RECOVERZOOM_OFFSET UNITYSDK_OFFSET(0xCFA7C70)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__SCREENPOINTTORAY_OFFSET UNITYSDK_OFFSET(0xCFA61B0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__SCREENTOWORLDTRANSLATION_OFFSET UNITYSDK_OFFSET(0xCFA6D70)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__STARTRESETTOINITIALPOSITION_OFFSET UNITYSDK_OFFSET(0xCFA4D60)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__SYNCTRANSFORMTOVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xCFA2BA0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__UPDATECAMERATRANSFORM_OFFSET UNITYSDK_OFFSET(0xCFA23D0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__UPDATECENTERING_OFFSET UNITYSDK_OFFSET(0xCFA38B0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__UPDATEMAP2DBOUND_OFFSET UNITYSDK_OFFSET(0xCFA41D0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xCFA8860)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCFA88B0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE___IFIXBASEPROXY_RESET_OFFSET UNITYSDK_OFFSET(0xCFA8900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UI3DMap3DCameraState_TypeDefinitionIndex = 53758;

	class UI3DMap3DCameraState : public ::RPG::GameCore::UI3DCameraStateBase
	{
	public:
		::RPG::Client::UI3DMap3DCameraSettings* _MonoSettings; // 0x30
		::Class_1_C0EE84ABF5F20949* _CameraInputController; // 0x38
		::UnityEngine::AnimationCurve* _CenteringCurve; // 0x40
		::UnityEngine::Transform* _MapTransform; // 0x48
		::RPG::GameCore::UI3DMap3DCameraStateConfig* _Config; // 0x50
		::RPG::GameCore::UI3DMap3DCameraState_InnerState _InnerState; // 0x58
		::System::Single _CurrentZoom; // 0x5C
		::System::Single _CenteringDuration; // 0x60
		::System::Single _ZoomAcc; // 0x64
		::System::Single _ZoomRecoverVelocity; // 0x68
		::UnityEngine::Rect _Map2DBounds; // 0x6C
		::System::Nullable_1<::UnityEngine::Vector3> _InitialCameraPosition; // 0x7C
		::UnityEngine::Vector3 _WorldTranslationVelocity; // 0x8C
		::System::Boolean _TransformedLastFrame; // 0x98
		::System::Single _LastZoomVelocity; // 0x9C
		::System::Single _CurrentCenteringTime; // 0xA0
		::UnityEngine::Vector3 _CurrentReturnBoundsVelocity; // 0xA4
		::UnityEngine::Vector3 _CenteringTargetPosition; // 0xB0
		::UnityEngine::Vector3 _BeginCenteringPosition; // 0xBC

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

		::System::Void __iFixBaseProxy_Init(::RPG::GameCore::UI3DVirtualCameraComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UI3DVirtualCameraComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE___IFIXBASEPROXY_INIT_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE___IFIXBASEPROXY_RESET_OFFSET))(this);
		}
	};
}
