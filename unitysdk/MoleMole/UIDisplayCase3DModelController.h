#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/MoleMole/UIDisplayCase3DModelController_CameraCfg.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_168CE6BD23375D6E;
class Class_2_C74B331EF3E6062C;
namespace Cinemachine { class CinemachineCollider; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIVirtualCameraConfigs; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_CANMOVECAMERA_OFFSET UNITYSDK_OFFSET(0x15267420)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_CANROTATECAM_OFFSET UNITYSDK_OFFSET(0x15267980)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x15265910)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_GETMOVEDELTA_OFFSET UNITYSDK_OFFSET(0x15267190)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_GET_CASEFWD_OFFSET UNITYSDK_OFFSET(0x15264F10)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_GET_CASERIGHT_OFFSET UNITYSDK_OFFSET(0x15264DC0)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_GET_CASEUP_OFFSET UNITYSDK_OFFSET(0x15264C80)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_GET_PIVOTPOS_OFFSET UNITYSDK_OFFSET(0x15264AB0)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_GET_PIVOT_OFFSET UNITYSDK_OFFSET(0x15264C70)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_INITCAMPOS_OFFSET UNITYSDK_OFFSET(0x15265A10)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_INITFROMCAMERACFG_OFFSET UNITYSDK_OFFSET(0x15266980)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_INITMAINVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x15265240)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_ISCAMERADIRTY_OFFSET UNITYSDK_OFFSET(0x15266C30)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_MOVECAMERA_OFFSET UNITYSDK_OFFSET(0x15267020)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x152656F0)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15265780)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15265050)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x152656A0)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_REPOSITIONCAMERA_OFFSET UNITYSDK_OFFSET(0x15266EC0)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_RESETCAMERA_OFFSET UNITYSDK_OFFSET(0x15265880)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_ROTATECAMERA_OFFSET UNITYSDK_OFFSET(0x152677D0)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_SETPIVOTPOS_OFFSET UNITYSDK_OFFSET(0x15267630)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_ZOOMCAMERA_OFFSET UNITYSDK_OFFSET(0x152679D0)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15267A60)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER__INITCAMPOS_B__31_0_OFFSET UNITYSDK_OFFSET(0x15267AF0)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER__INITMAINVIRTUALCAMERA_B__26_0_OFFSET UNITYSDK_OFFSET(0x15267AD0)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER___BASE_INITMAINVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x15267B10)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15267BA0)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15267C30)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15267C40)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15267C50)

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCase3DModelController_TypeDefinitionIndex = 42917;

	class UIDisplayCase3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		// static const ::System::String* EDIT_FEMALE_KEY; // 0x0
		// static const ::System::String* EDIT_MALE_KEY; // 0x0
		::MoleMole::UIDisplayCase3DModelController_CameraCfg CameraData; // 0x360
		::Class_2_C74B331EF3E6062C* _view; // 0x448
		::Class_2_168CE6BD23375D6E* _model; // 0x450
		::UnityEngine::Vector3 originPos; // 0x458
		::UnityEngine::Vector3 originPivotPos; // 0x464
		::UnityEngine::Quaternion originRot; // 0x470
		::UnityEngine::Quaternion caseRot; // 0x480
		::Foundation::Unreal::FTransform attachPoint; // 0x490
		::UnityEngine::Transform* pivot; // 0x4B0
		::System::Single distance; // 0x4B8
		::UnityEngine::Bounds camBounds; // 0x4BC
		::Cinemachine::CinemachineCollider* camCol; // 0x4D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_PivotPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_GET_PIVOTPOS_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Pivot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_GET_PIVOT_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_CaseUp()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_GET_CASEUP_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_CaseRight()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_GET_CASERIGHT_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_CaseFwd()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_GET_CASEFWD_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void InitMainVirtualCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_INITMAINVIRTUALCAMERA_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void InitCamPos(::System::Boolean isFemale, ::System::Boolean isFriend)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_INITCAMPOS_OFFSET))(this, isFemale, isFriend);
		}

		::System::Void ResetCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_RESETCAMERA_OFFSET))(this);
		}

		::System::Boolean IsCameraDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_ISCAMERADIRTY_OFFSET))(this);
		}

		::System::Void RepositionCamera(::System::Boolean resetPos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_REPOSITIONCAMERA_OFFSET))(this, resetPos);
		}

		::System::Void MoveCamera(::System::Single deltaHorizontal, ::System::Single deltaVertical)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_MOVECAMERA_OFFSET))(this, deltaHorizontal, deltaVertical);
		}

		::UnityEngine::Vector3 GetMoveDelta(::System::Single deltaHorizontal, ::System::Single deltaVertical)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_GETMOVEDELTA_OFFSET))(this, deltaHorizontal, deltaVertical);
		}

		::System::Void SetPivotPos(::UnityEngine::Vector3 newPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_SETPIVOTPOS_OFFSET))(this, newPos);
		}

		::System::Void RotateCamera(::System::Single deltaHorizontal, ::System::Single deltaVertical)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_ROTATECAMERA_OFFSET))(this, deltaHorizontal, deltaVertical);
		}

		::System::Void ZoomCamera(::System::Single deltaFov)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_ZOOMCAMERA_OFFSET))(this, deltaFov);
		}

		::System::Boolean CanMoveCamera(::UnityEngine::Vector3 delta)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_CANMOVECAMERA_OFFSET))(this, delta);
		}

		::System::Boolean CanRotateCam(::UnityEngine::Vector2 deltaEuler)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_CANROTATECAM_OFFSET))(this, deltaEuler);
		}

		::System::Void InitFromCameraCfg(::MoleMole::UIVirtualCameraConfigs* cfg)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIVirtualCameraConfigs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_INITFROMCAMERACFG_OFFSET))(this, cfg);
		}

		::Foundation::Unreal::FTransform _InitMainVirtualCamera_b__26_0()
		{
			return ((::Foundation::Unreal::FTransform(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER__INITMAINVIRTUALCAMERA_B__26_0_OFFSET))(this);
		}

		::Foundation::Unreal::FTransform _InitCamPos_b__31_0()
		{
			return ((::Foundation::Unreal::FTransform(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER__INITCAMPOS_B__31_0_OFFSET))(this);
		}

		::System::Void __base_InitMainVirtualCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER___BASE_INITMAINVIRTUALCAMERA_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
