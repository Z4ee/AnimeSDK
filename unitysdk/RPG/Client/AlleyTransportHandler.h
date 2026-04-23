#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AlleyTransportRouteState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_1ACAE102162D8EA1;
class Class_1_A582CC0DF852C4EA;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class AlleyGrid; }
namespace RPG::Client { class MonoExUICamera; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GETCUREDITSHOPID_OFFSET UNITYSDK_OFFSET(0x9D1AAF0)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GETRECENTLYEDITSHOPID_OFFSET UNITYSDK_OFFSET(0x9D1AB50)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_BIRDINTERVAL_OFFSET UNITYSDK_OFFSET(0x9D1A140)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_BIRDSPEED_OFFSET UNITYSDK_OFFSET(0x9D1A150)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_DRAWRATIO_OFFSET UNITYSDK_OFFSET(0x9D1A0F0)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_MAXCAMERADISTANCE_OFFSET UNITYSDK_OFFSET(0x9D1A180)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_MINCAMERADISTANCE_OFFSET UNITYSDK_OFFSET(0x9D1A170)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_MOBILEMAXCAMERADISTANCE_OFFSET UNITYSDK_OFFSET(0x9D1A1A0)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_MOBILEMINCAMERADISTANCE_OFFSET UNITYSDK_OFFSET(0x9D1A190)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_ROLLBACKRATIO_OFFSET UNITYSDK_OFFSET(0x9D1A120)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_SQUADSINTERVAL_OFFSET UNITYSDK_OFFSET(0x9D1A130)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_STRAIGHTRATIO_OFFSET UNITYSDK_OFFSET(0x9D1A100)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_TOUCHRADIUS_OFFSET UNITYSDK_OFFSET(0x9D1A160)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_TURNRATIO_OFFSET UNITYSDK_OFFSET(0x9D1A110)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_INITVIRTUALCURSOR_OFFSET UNITYSDK_OFFSET(0x9D1ADA0)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_INIT_OFFSET UNITYSDK_OFFSET(0x9D1A1B0)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9D1AF80)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETALLEYGRID_OFFSET UNITYSDK_OFFSET(0x9D1A680)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETCAMERACANDRAG_OFFSET UNITYSDK_OFFSET(0x9D1A520)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETCAMERACANZOOM_OFFSET UNITYSDK_OFFSET(0x9D1A590)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETCONFIRMPRESSEDBYGAMEPAD_OFFSET UNITYSDK_OFFSET(0x9D1AC90)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETDRAWCALLBACK_OFFSET UNITYSDK_OFFSET(0x9D1A820)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETDRAW_OFFSET UNITYSDK_OFFSET(0x9D1A420)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETEDITCAMERAZOOM_OFFSET UNITYSDK_OFFSET(0x9D1A600)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETENDDRAWCALLBACK_OFFSET UNITYSDK_OFFSET(0x9D1A8A0)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETERASECALLBACK_OFFSET UNITYSDK_OFFSET(0x9D1A920)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETERASE_OFFSET UNITYSDK_OFFSET(0x9D1A4A0)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETROUTESTATECHANGECALLBACK_OFFSET UNITYSDK_OFFSET(0x9D1A9A0)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETSOFTZONEOBJECT_OFFSET UNITYSDK_OFFSET(0x9D1AE00)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETVIRTUALCURSORPOSITION_OFFSET UNITYSDK_OFFSET(0x9D1ABB0)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SWITCHTOEDITCAMERA_OFFSET UNITYSDK_OFFSET(0x9D1AE70)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_UPDATEEDITVCLOOKATPOSITIONBYGAMEPAD_OFFSET UNITYSDK_OFFSET(0x9D1AD10)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9D1AED0)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9D1AFE0)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyTransportHandler_TypeDefinitionIndex = 57453;

	class AlleyTransportHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Texture2D* drawCursor; // 0x18
		::UnityEngine::Texture2D* eraseCursor; // 0x20
		::UnityEngine::Transform* editCursorHitPoint; // 0x28
		::Cinemachine::CinemachineVirtualCamera* viewCam; // 0x30
		::Cinemachine::CinemachineVirtualCamera* editCam; // 0x38
		::RPG::Client::MonoExUICamera* exUICamera; // 0x40
		::System::Single minCameraDistance; // 0x48
		::System::Single maxCameraDistance; // 0x4C
		::System::Single mobileMinCameraDistance; // 0x50
		::System::Single mobileMaxCameraDistance; // 0x54
		::Il2CppArray<::UnityEngine::Material*>* roadMaterials; // 0x58
		::System::Single drawRatio; // 0x60
		::System::Single straightRatio; // 0x64
		::System::Single turnRatio; // 0x68
		::System::Single rollbackRatio; // 0x6C
		::System::Single squadsInterval; // 0x70
		::System::Single birdInterval; // 0x74
		::System::Single birdSpeed; // 0x78
		::System::Single touchRadius; // 0x7C
		::Class_1_1ACAE102162D8EA1* _AlleyTransportRoute; // 0x80
		::Class_1_A582CC0DF852C4EA* _InputManager; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER__CTOR_OFFSET))(this);
		}

		::System::Single get_DrawRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_DRAWRATIO_OFFSET))(this);
		}

		::System::Single get_StraightRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_STRAIGHTRATIO_OFFSET))(this);
		}

		::System::Single get_TurnRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_TURNRATIO_OFFSET))(this);
		}

		::System::Single get_RollbackRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_ROLLBACKRATIO_OFFSET))(this);
		}

		::System::Single get_SquadsInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_SQUADSINTERVAL_OFFSET))(this);
		}

		::System::Single get_BirdInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_BIRDINTERVAL_OFFSET))(this);
		}

		::System::Single get_BirdSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_BIRDSPEED_OFFSET))(this);
		}

		::System::Single get_TouchRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_TOUCHRADIUS_OFFSET))(this);
		}

		::System::Single get_MinCameraDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_MINCAMERADISTANCE_OFFSET))(this);
		}

		::System::Single get_MaxCameraDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_MAXCAMERADISTANCE_OFFSET))(this);
		}

		::System::Single get_MobileMinCameraDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_MOBILEMINCAMERADISTANCE_OFFSET))(this);
		}

		::System::Single get_MobileMaxCameraDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_MOBILEMAXCAMERADISTANCE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_INIT_OFFSET))(this);
		}

		::System::Void SetDraw()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETDRAW_OFFSET))(this);
		}

		::System::Void SetErase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETERASE_OFFSET))(this);
		}

		::System::Void SetCameraCanDrag(::System::Boolean isCanDrag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETCAMERACANDRAG_OFFSET))(this, isCanDrag);
		}

		::System::Void SetCameraCanZoom(::System::Boolean isCanZoom)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETCAMERACANZOOM_OFFSET))(this, isCanZoom);
		}

		::System::Void SetEditCameraZoom(::System::Single zoomValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETEDITCAMERAZOOM_OFFSET))(this, zoomValue);
		}

		::System::Void SetAlleyGrid(::System::UInt32 mapID, ::RPG::Client::AlleyGrid* alleyGrid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::AlleyGrid*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETALLEYGRID_OFFSET))(this, mapID, alleyGrid);
		}

		::System::Void SetDrawCallback(::System::Action_1<::System::Object*>* drawCallback, ::System::Object* callbackObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETDRAWCALLBACK_OFFSET))(this, drawCallback, callbackObject);
		}

		::System::Void SetEndDrawCallback(::System::Action_1<::System::Object*>* endDrawCallback, ::System::Object* callbackObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETENDDRAWCALLBACK_OFFSET))(this, endDrawCallback, callbackObject);
		}

		::System::Void SetEraseCallback(::System::Action_1<::System::Object*>* eraseCallback, ::System::Object* callbackObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETERASECALLBACK_OFFSET))(this, eraseCallback, callbackObject);
		}

		::System::Void SetRouteStateChangeCallback(::System::Action_2<::System::Object*, ::RPG::Client::AlleyTransportRouteState>* callback, ::System::Object* callbackObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Object*, ::RPG::Client::AlleyTransportRouteState>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETROUTESTATECHANGECALLBACK_OFFSET))(this, callback, callbackObject);
		}

		::System::UInt32 GetCurEditShopID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_GETCUREDITSHOPID_OFFSET))(this);
		}

		::System::UInt32 GetRecentlyEditShopID(::System::UInt32 mapID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_GETRECENTLYEDITSHOPID_OFFSET))(this, mapID);
		}

		::System::Void SetVirtualCursorPosition(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETVIRTUALCURSORPOSITION_OFFSET))(this, x, y, z);
		}

		::System::Void SetConfirmPressedByGamepad(::System::Boolean isPressed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETCONFIRMPRESSEDBYGAMEPAD_OFFSET))(this, isPressed);
		}

		::System::Void UpdateEditVCLookAtPositionByGamepad(::System::Single deltaX, ::System::Single deltaY)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_UPDATEEDITVCLOOKATPOSITIONBYGAMEPAD_OFFSET))(this, deltaX, deltaY);
		}

		::System::Void InitVirtualCursor(::UnityEngine::Transform* virtualCursor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_INITVIRTUALCURSOR_OFFSET))(this, virtualCursor);
		}

		::System::Void SetSoftZoneObject(::UnityEngine::Transform* obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETSOFTZONEOBJECT_OFFSET))(this, obj);
		}

		::System::Void SwitchToEditCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SWITCHTOEDITCAMERA_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_ONDESTROY_OFFSET))(this);
		}
	};
}
