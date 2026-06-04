#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AlleyTransportRouteState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_A582CC0DF852C4EA;
class Class_1_FCB6C6625A75BB51;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class AlleyGrid; }
namespace RPG::Client { class MonoExUICamera; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GETCUREDITSHOPID_OFFSET UNITYSDK_OFFSET(0xB30A6B0)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GETRECENTLYEDITSHOPID_OFFSET UNITYSDK_OFFSET(0xB30A710)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_BIRDINTERVAL_OFFSET UNITYSDK_OFFSET(0xB309D20)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_BIRDSPEED_OFFSET UNITYSDK_OFFSET(0xB309D30)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_DRAWRATIO_OFFSET UNITYSDK_OFFSET(0xB309CD0)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_MAXCAMERADISTANCE_OFFSET UNITYSDK_OFFSET(0xB309D60)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_MINCAMERADISTANCE_OFFSET UNITYSDK_OFFSET(0xB309D50)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_MOBILEMAXCAMERADISTANCE_OFFSET UNITYSDK_OFFSET(0xB309D80)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_MOBILEMINCAMERADISTANCE_OFFSET UNITYSDK_OFFSET(0xB309D70)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_ROLLBACKRATIO_OFFSET UNITYSDK_OFFSET(0xB309D00)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_SQUADSINTERVAL_OFFSET UNITYSDK_OFFSET(0xB309D10)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_STRAIGHTRATIO_OFFSET UNITYSDK_OFFSET(0xB309CE0)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_TOUCHRADIUS_OFFSET UNITYSDK_OFFSET(0xB309D40)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_TURNRATIO_OFFSET UNITYSDK_OFFSET(0xB309CF0)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_INITVIRTUALCURSOR_OFFSET UNITYSDK_OFFSET(0xB30A960)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_INIT_OFFSET UNITYSDK_OFFSET(0xB309D90)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB30AB40)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETALLEYGRID_OFFSET UNITYSDK_OFFSET(0xB30A260)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETCAMERACANDRAG_OFFSET UNITYSDK_OFFSET(0xB30A100)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETCAMERACANZOOM_OFFSET UNITYSDK_OFFSET(0xB30A170)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETCONFIRMPRESSEDBYGAMEPAD_OFFSET UNITYSDK_OFFSET(0xB30A850)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETDRAWCALLBACK_OFFSET UNITYSDK_OFFSET(0xB30A3F0)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETDRAW_OFFSET UNITYSDK_OFFSET(0xB30A000)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETEDITCAMERAZOOM_OFFSET UNITYSDK_OFFSET(0xB30A1E0)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETENDDRAWCALLBACK_OFFSET UNITYSDK_OFFSET(0xB30A470)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETERASECALLBACK_OFFSET UNITYSDK_OFFSET(0xB30A4F0)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETERASE_OFFSET UNITYSDK_OFFSET(0xB30A080)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETROUTESTATECHANGECALLBACK_OFFSET UNITYSDK_OFFSET(0xB30A570)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETSOFTZONEOBJECT_OFFSET UNITYSDK_OFFSET(0xB30A9C0)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETVIRTUALCURSORPOSITION_OFFSET UNITYSDK_OFFSET(0xB30A770)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SWITCHTOEDITCAMERA_OFFSET UNITYSDK_OFFSET(0xB30AA30)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_UPDATEEDITVCLOOKATPOSITIONBYGAMEPAD_OFFSET UNITYSDK_OFFSET(0xB30A8D0)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xB30AA90)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB30ABA0)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyTransportHandler_TypeDefinitionIndex = 58265;

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
		::Class_1_FCB6C6625A75BB51* _AlleyTransportRoute; // 0x80
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

		::System::Void SetCameraCanDrag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETCAMERACANDRAG_OFFSET))(this, a1);
		}

		::System::Void SetCameraCanZoom(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETCAMERACANZOOM_OFFSET))(this, a1);
		}

		::System::Void SetEditCameraZoom(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETEDITCAMERAZOOM_OFFSET))(this, a1);
		}

		::System::Void SetAlleyGrid(::System::UInt32 a1, ::RPG::Client::AlleyGrid* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::AlleyGrid*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETALLEYGRID_OFFSET))(this, a1, a2);
		}

		::System::Void SetDrawCallback(::System::Action_1<::System::Object*>* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETDRAWCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void SetEndDrawCallback(::System::Action_1<::System::Object*>* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETENDDRAWCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void SetEraseCallback(::System::Action_1<::System::Object*>* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETERASECALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void SetRouteStateChangeCallback(::System::Action_2<::System::Object*, ::RPG::Client::AlleyTransportRouteState>* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Object*, ::RPG::Client::AlleyTransportRouteState>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETROUTESTATECHANGECALLBACK_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetCurEditShopID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_GETCUREDITSHOPID_OFFSET))(this);
		}

		::System::UInt32 GetRecentlyEditShopID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_GETRECENTLYEDITSHOPID_OFFSET))(this, a1);
		}

		::System::Void SetVirtualCursorPosition(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETVIRTUALCURSORPOSITION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetConfirmPressedByGamepad(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETCONFIRMPRESSEDBYGAMEPAD_OFFSET))(this, a1);
		}

		::System::Void UpdateEditVCLookAtPositionByGamepad(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_UPDATEEDITVCLOOKATPOSITIONBYGAMEPAD_OFFSET))(this, a1, a2);
		}

		::System::Void InitVirtualCursor(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_INITVIRTUALCURSOR_OFFSET))(this, a1);
		}

		::System::Void SetSoftZoneObject(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETSOFTZONEOBJECT_OFFSET))(this, a1);
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
