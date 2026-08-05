#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_5BB615FAF8CE49B7;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_GETCAMERA_OFFSET UNITYSDK_OFFSET(0x17979660)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_GETFOV_OFFSET UNITYSDK_OFFSET(0x17979170)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_GETHORIZONTALCLAMP_OFFSET UNITYSDK_OFFSET(0x17979540)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_GETLOCATION_OFFSET UNITYSDK_OFFSET(0x179791D0)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_GETOFFSET_OFFSET UNITYSDK_OFFSET(0x17979280)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_GETVERTICALCLAMP_OFFSET UNITYSDK_OFFSET(0x179794E0)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_GETWALLPOS_OFFSET UNITYSDK_OFFSET(0x17978ED0)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17978720)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_INITMAINVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x17978D20)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17978DD0)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17978E60)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17978730)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17978D80)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_OP_ADDFIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x179790D0)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_OP_MOVE_OFFSET UNITYSDK_OFFSET(0x17978F40)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_OP_RESET_OFFSET UNITYSDK_OFFSET(0x17978C80)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_OP_SETFIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x17979440)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_OP_SETHORIZONTALCLAMP_OFFSET UNITYSDK_OFFSET(0x17979600)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_OP_SETOFFSET_OFFSET UNITYSDK_OFFSET(0x179792D0)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_OP_SETVERTICALCLAMP_OFFSET UNITYSDK_OFFSET(0x179795A0)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_RESETISFEMALE_OFFSET UNITYSDK_OFFSET(0x179787F0)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x179796B0)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER___BASE_INITMAINVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x17979720)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x179797B0)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17979840)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17979850)
#define MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17979860)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoWall3D3DModelController_TypeDefinitionIndex = 87119;

	class UIPhotoWall3D3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		::Class_2_5BB615FAF8CE49B7* _view; // 0x360
		::UnityEngine::Vector3 _originPos; // 0x368
		::UnityEngine::Vector3 _currentPos; // 0x374
		::System::Single _originFov; // 0x380
		::System::Single Top; // 0x384
		::System::Single Down; // 0x388
		::System::Single Left; // 0x38C
		::System::Single Right; // 0x390
		::System::Single MinFov; // 0x394
		::System::Single MaxFov; // 0x398

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void ResetIsFemale(::System::Boolean isFemale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_RESETISFEMALE_OFFSET))(this, isFemale);
		}

		::System::Void InitMainVirtualCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_INITMAINVIRTUALCAMERA_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::UnityEngine::Transform* GetWallPos(::System::Boolean isFemale)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_GETWALLPOS_OFFSET))(this, isFemale);
		}

		::System::Void Op_Move(::System::Single deltaHorizontal, ::System::Single deltaVertical)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_OP_MOVE_OFFSET))(this, deltaHorizontal, deltaVertical);
		}

		::System::Void Op_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_OP_RESET_OFFSET))(this);
		}

		::System::Void Op_AddFieldOfView(::System::Single fieldOfView)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_OP_ADDFIELDOFVIEW_OFFSET))(this, fieldOfView);
		}

		::System::Single GetFov()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_GETFOV_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetLocation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_GETLOCATION_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_GETOFFSET_OFFSET))(this);
		}

		::System::Void Op_SetOffset(::UnityEngine::Vector2 offset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_OP_SETOFFSET_OFFSET))(this, offset);
		}

		::System::Void Op_SetFieldOfView(::System::Single fieldOfView)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_OP_SETFIELDOFVIEW_OFFSET))(this, fieldOfView);
		}

		::UnityEngine::Vector2 GetVerticalClamp()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_GETVERTICALCLAMP_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetHorizontalClamp()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_GETHORIZONTALCLAMP_OFFSET))(this);
		}

		::System::Void Op_SetVerticalClamp(::UnityEngine::Vector2 minMax)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_OP_SETVERTICALCLAMP_OFFSET))(this, minMax);
		}

		::System::Void Op_SetHorizontalClamp(::UnityEngine::Vector2 minMax)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_OP_SETHORIZONTALCLAMP_OFFSET))(this, minMax);
		}

		::UnityEngine::Camera* GetCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER_GETCAMERA_OFFSET))(this);
		}

		::System::Void __base_InitMainVirtualCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER___BASE_INITMAINVIRTUALCAMERA_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALL3D3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
