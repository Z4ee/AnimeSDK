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

#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_CANMOVECAMERA_OFFSET UNITYSDK_OFFSET(0x14E9AA00)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_CANROTATECAM_OFFSET UNITYSDK_OFFSET(0x14E9AF60)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x14E98EF0)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_GETMOVEDELTA_OFFSET UNITYSDK_OFFSET(0x14E9A770)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_GET_CASEFWD_OFFSET UNITYSDK_OFFSET(0x14E984F0)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_GET_CASERIGHT_OFFSET UNITYSDK_OFFSET(0x14E983A0)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_GET_CASEUP_OFFSET UNITYSDK_OFFSET(0x14E98260)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_GET_PIVOTPOS_OFFSET UNITYSDK_OFFSET(0x14E98090)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_GET_PIVOT_OFFSET UNITYSDK_OFFSET(0x14E98250)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_INITCAMPOS_OFFSET UNITYSDK_OFFSET(0x14E98FF0)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_INITFROMCAMERACFG_OFFSET UNITYSDK_OFFSET(0x14E99F60)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_INITMAINVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x14E98820)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_ISCAMERADIRTY_OFFSET UNITYSDK_OFFSET(0x14E9A210)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_MOVECAMERA_OFFSET UNITYSDK_OFFSET(0x14E9A600)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14E98CD0)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14E98D60)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14E98630)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14E98C80)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_REPOSITIONCAMERA_OFFSET UNITYSDK_OFFSET(0x14E9A4A0)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_RESETCAMERA_OFFSET UNITYSDK_OFFSET(0x14E98E60)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_ROTATECAMERA_OFFSET UNITYSDK_OFFSET(0x14E9ADB0)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_SETPIVOTPOS_OFFSET UNITYSDK_OFFSET(0x14E9AC10)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER_ZOOMCAMERA_OFFSET UNITYSDK_OFFSET(0x14E9AFB0)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14E9B040)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER__INITCAMPOS_B__31_0_OFFSET UNITYSDK_OFFSET(0x14E9B0D0)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER__INITMAINVIRTUALCAMERA_B__26_0_OFFSET UNITYSDK_OFFSET(0x14E9B0B0)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER___BASE_INITMAINVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x14E9B0F0)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14E9B180)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14E9B210)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14E9B220)
#define MOLEMOLE_UIDISPLAYCASE3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14E9B230)

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCase3DModelController_TypeDefinitionIndex = 62450;

	class UIDisplayCase3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		// static const ::System::String* EDIT_FEMALE_KEY; // 0x0
		// static const ::System::String* EDIT_MALE_KEY; // 0x0
		::MoleMole::UIDisplayCase3DModelController_CameraCfg CameraData; // 0x358
		::Class_2_C74B331EF3E6062C* _view; // 0x440
		::Class_2_168CE6BD23375D6E* _model; // 0x448
		::UnityEngine::Vector3 originPos; // 0x450
		::UnityEngine::Vector3 originPivotPos; // 0x45C
		::UnityEngine::Quaternion originRot; // 0x468
		::UnityEngine::Quaternion caseRot; // 0x478
		::Foundation::Unreal::FTransform attachPoint; // 0x488
		::UnityEngine::Transform* pivot; // 0x4A8
		::System::Single distance; // 0x4B0
		::UnityEngine::Bounds camBounds; // 0x4B4
		::Cinemachine::CinemachineCollider* camCol; // 0x4D0

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
