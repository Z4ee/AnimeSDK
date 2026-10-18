#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/SingletonMonoBehavior_1.h"
#include "unitysdk/InControl/TouchManager_GizmoShowOption.h"
#include "unitysdk/InControl/TouchUnitType.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace InControl { class InputDevice; }
namespace InControl { class Touch; }
namespace InControl { class TouchControl; }
namespace InControl { class TouchPool; }
namespace System { class Action; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace UnityEngine { class Camera; }

#define INCONTROL_TOUCHMANAGER_ADD_ONSETUP_OFFSET UNITYSDK_OFFSET(0x1BA79D60)
#define INCONTROL_TOUCHMANAGER_COMMITCONTROLSTATES_OFFSET UNITYSDK_OFFSET(0x1BA7D3B0)
#define INCONTROL_TOUCHMANAGER_COMMITDEVICE_OFFSET UNITYSDK_OFFSET(0x1BA7D3A0)
#define INCONTROL_TOUCHMANAGER_CONVERTSCREENTOVIEWPOINT_OFFSET UNITYSDK_OFFSET(0x1BA7E190)
#define INCONTROL_TOUCHMANAGER_CONVERTSCREENTOWORLDPOINT_OFFSET UNITYSDK_OFFSET(0x1BA7E080)
#define INCONTROL_TOUCHMANAGER_CONVERTTOWORLD_1_OFFSET UNITYSDK_OFFSET(0x1BA7F220)
#define INCONTROL_TOUCHMANAGER_CONVERTTOWORLD_OFFSET UNITYSDK_OFFSET(0x1BA7E7B0)
#define INCONTROL_TOUCHMANAGER_CONVERTVIEWTOWORLDPOINT_OFFSET UNITYSDK_OFFSET(0x1BA7D4F0)
#define INCONTROL_TOUCHMANAGER_CREATEDEVICE_OFFSET UNITYSDK_OFFSET(0x1BA7C120)
#define INCONTROL_TOUCHMANAGER_CREATETOUCHES_OFFSET UNITYSDK_OFFSET(0x1BA7C640)
#define INCONTROL_TOUCHMANAGER_GETCURRENTSCREENSIZE_OFFSET UNITYSDK_OFFSET(0x1BA7BDF0)
#define INCONTROL_TOUCHMANAGER_GETTOUCHBYFINGERID_OFFSET UNITYSDK_OFFSET(0x1BA7E320)
#define INCONTROL_TOUCHMANAGER_GETTOUCH_OFFSET UNITYSDK_OFFSET(0x1BA78CE0)
#define INCONTROL_TOUCHMANAGER_GET_CAMERA_OFFSET UNITYSDK_OFFSET(0x1BA7F280)
#define INCONTROL_TOUCHMANAGER_GET_CONTROLSENABLED_1_OFFSET UNITYSDK_OFFSET(0x1BA7F480)
#define INCONTROL_TOUCHMANAGER_GET_CONTROLSENABLED_OFFSET UNITYSDK_OFFSET(0x1BA7E290)
#define INCONTROL_TOUCHMANAGER_GET_CONTROLSSHOWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1BA7B0C0)
#define INCONTROL_TOUCHMANAGER_GET_DEVICE_OFFSET UNITYSDK_OFFSET(0x1BA7A2A0)
#define INCONTROL_TOUCHMANAGER_GET_HALFPERCENTTOWORLD_OFFSET UNITYSDK_OFFSET(0x1BA7F300)
#define INCONTROL_TOUCHMANAGER_GET_HALFPIXELTOWORLD_OFFSET UNITYSDK_OFFSET(0x1BA7F380)
#define INCONTROL_TOUCHMANAGER_GET_HALFSCREENSIZE_OFFSET UNITYSDK_OFFSET(0x1BA7F1A0)
#define INCONTROL_TOUCHMANAGER_GET_PERCENTTOWORLD_OFFSET UNITYSDK_OFFSET(0x1BA7A010)
#define INCONTROL_TOUCHMANAGER_GET_PIXELTOWORLD_OFFSET UNITYSDK_OFFSET(0x1BA79F90)
#define INCONTROL_TOUCHMANAGER_GET_SCREENSIZE_OFFSET UNITYSDK_OFFSET(0x1BA7F400)
#define INCONTROL_TOUCHMANAGER_GET_TOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x1BA78C50)
#define INCONTROL_TOUCHMANAGER_GET_TOUCHES_OFFSET UNITYSDK_OFFSET(0x1BA7E2A0)
#define INCONTROL_TOUCHMANAGER_GET_VIEWSIZE_OFFSET UNITYSDK_OFFSET(0x1BA7A090)
#define INCONTROL_TOUCHMANAGER_INVOKETOUCHEVENTS_OFFSET UNITYSDK_OFFSET(0x1BA7D890)
#define INCONTROL_TOUCHMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1BA7B940)
#define INCONTROL_TOUCHMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BA7B550)
#define INCONTROL_TOUCHMANAGER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1BA7F610)
#define INCONTROL_TOUCHMANAGER_PERCENTTOWORLDRECT_OFFSET UNITYSDK_OFFSET(0x1BA7E8D0)
#define INCONTROL_TOUCHMANAGER_PIXELTOWORLDRECT_OFFSET UNITYSDK_OFFSET(0x1BA7EB90)
#define INCONTROL_TOUCHMANAGER_REMOVE_ONSETUP_OFFSET UNITYSDK_OFFSET(0x1BA7B430)
#define INCONTROL_TOUCHMANAGER_RESET_OFFSET UNITYSDK_OFFSET(0x1BA7BC90)
#define INCONTROL_TOUCHMANAGER_SCREENTOVIEWPOINT_OFFSET UNITYSDK_OFFSET(0x1BA7E630)
#define INCONTROL_TOUCHMANAGER_SCREENTOWORLDPOINT_OFFSET UNITYSDK_OFFSET(0x1BA7E4B0)
#define INCONTROL_TOUCHMANAGER_SENDTOUCHBEGAN_OFFSET UNITYSDK_OFFSET(0x1BA7DB30)
#define INCONTROL_TOUCHMANAGER_SENDTOUCHENDED_OFFSET UNITYSDK_OFFSET(0x1BA7DD90)
#define INCONTROL_TOUCHMANAGER_SENDTOUCHMOVED_OFFSET UNITYSDK_OFFSET(0x1BA7DC60)
#define INCONTROL_TOUCHMANAGER_SETUP_OFFSET UNITYSDK_OFFSET(0x1BA7BD20)
#define INCONTROL_TOUCHMANAGER_SET_CONTROLSENABLED_1_OFFSET UNITYSDK_OFFSET(0x1BA7F500)
#define INCONTROL_TOUCHMANAGER_SET_CONTROLSENABLED_OFFSET UNITYSDK_OFFSET(0x1BA7DEC0)
#define INCONTROL_TOUCHMANAGER_SUBMITCONTROLSTATES_OFFSET UNITYSDK_OFFSET(0x1BA7D260)
#define INCONTROL_TOUCHMANAGER_TOUCHCAMERAISVALID_OFFSET UNITYSDK_OFFSET(0x1BA7DF40)
#define INCONTROL_TOUCHMANAGER_UPDATEDEVICE_OFFSET UNITYSDK_OFFSET(0x1BA7CAD0)
#define INCONTROL_TOUCHMANAGER_UPDATESCREENSIZEATENDOFFRAME_OFFSET UNITYSDK_OFFSET(0x1BA7C920)
#define INCONTROL_TOUCHMANAGER_UPDATESCREENSIZE_OFFSET UNITYSDK_OFFSET(0x1BA7BE70)
#define INCONTROL_TOUCHMANAGER_UPDATETOUCHES_OFFSET UNITYSDK_OFFSET(0x1BA7CB10)
#define INCONTROL_TOUCHMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BA7C980)
#define INCONTROL_TOUCHMANAGER_VIEWTOWORLDPOINT_OFFSET UNITYSDK_OFFSET(0x1BA7A120)
#define INCONTROL_TOUCHMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA7B4E0)

namespace InControl
{
	inline static constexpr unsigned int TouchManager_TypeDefinitionIndex = 40888;

	class TouchManager : public ::InControl::SingletonMonoBehavior_1<::InControl::TouchManager*>
	{
	public:
		static ::System::Action** StaticGet_OnSetup()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(TouchManager_TypeDefinitionIndex)->GetStaticField(0xC3B0);
		}
		::UnityEngine::Camera* touchCamera; // 0x18
		::InControl::TouchManager_GizmoShowOption controlsShowGizmos; // 0x20
		::System::Boolean enableControlsOnTouch; // 0x24
		::System::Boolean _controlsEnabled; // 0x25
		::System::Int32 controlsLayer; // 0x28
		::InControl::InputDevice* device; // 0x30
		::UnityEngine::Vector3 viewSize; // 0x38
		::UnityEngine::Vector2 screenSize; // 0x44
		::UnityEngine::Vector2 halfScreenSize; // 0x4C
		::System::Single percentToWorld; // 0x54
		::System::Single halfPercentToWorld; // 0x58
		::System::Single pixelToWorld; // 0x5C
		::System::Single halfPixelToWorld; // 0x60
		::Il2CppArray<::InControl::TouchControl*>* touchControls; // 0x68
		::InControl::TouchPool* cachedTouches; // 0x70
		::System::Collections::Generic::List_1<::InControl::Touch*>* activeTouches; // 0x78
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::Touch*>* readOnlyActiveTouches; // 0x80
		::System::Boolean isReady; // 0x88
		::Il2CppArray<::InControl::Touch*>* mouseTouches; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void add_OnSetup(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_ADD_ONSETUP_OFFSET))(a1);
		}

		static ::System::Void remove_OnSetup(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_REMOVE_ONSETUP_OFFSET))(a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Setup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_SETUP_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_RESET_OFFSET))(this);
		}

		::System::Collections::IEnumerator* UpdateScreenSizeAtEndOfFrame()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_UPDATESCREENSIZEATENDOFFRAME_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void CreateDevice()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_CREATEDEVICE_OFFSET))(this);
		}

		::System::Void UpdateDevice(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_UPDATEDEVICE_OFFSET))(this, a1, a2);
		}

		::System::Void CommitDevice(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_COMMITDEVICE_OFFSET))(this, a1, a2);
		}

		::System::Void SubmitControlStates(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_SUBMITCONTROLSTATES_OFFSET))(this, a1, a2);
		}

		::System::Void CommitControlStates(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_COMMITCONTROLSTATES_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateScreenSize(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_UPDATESCREENSIZE_OFFSET))(this, a1);
		}

		::System::Void CreateTouches()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_CREATETOUCHES_OFFSET))(this);
		}

		::System::Void UpdateTouches(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_UPDATETOUCHES_OFFSET))(this, a1, a2);
		}

		::System::Void SendTouchBegan(::InControl::Touch* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Touch*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_SENDTOUCHBEGAN_OFFSET))(this, a1);
		}

		::System::Void SendTouchMoved(::InControl::Touch* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Touch*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_SENDTOUCHMOVED_OFFSET))(this, a1);
		}

		::System::Void SendTouchEnded(::InControl::Touch* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Touch*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_SENDTOUCHENDED_OFFSET))(this, a1);
		}

		::System::Void InvokeTouchEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_INVOKETOUCHEVENTS_OFFSET))(this);
		}

		::System::Boolean TouchCameraIsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_TOUCHCAMERAISVALID_OFFSET))(this);
		}

		::UnityEngine::Vector3 ConvertScreenToWorldPoint(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_CONVERTSCREENTOWORLDPOINT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 ConvertViewToWorldPoint(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_CONVERTVIEWTOWORLDPOINT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 ConvertScreenToViewPoint(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_CONVERTSCREENTOVIEWPOINT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 GetCurrentScreenSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GETCURRENTSCREENSIZE_OFFSET))(this);
		}

		::System::Boolean get_controlsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GET_CONTROLSENABLED_OFFSET))(this);
		}

		::System::Void set_controlsEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_SET_CONTROLSENABLED_OFFSET))(this, a1);
		}

		static ::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::Touch*>* get_Touches()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::Touch*>*(*)())((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GET_TOUCHES_OFFSET))();
		}

		static ::System::Int32 get_TouchCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GET_TOUCHCOUNT_OFFSET))();
		}

		static ::InControl::Touch* GetTouch(::System::Int32 a1)
		{
			return ((::InControl::Touch*(*)(::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GETTOUCH_OFFSET))(a1);
		}

		static ::InControl::Touch* GetTouchByFingerId(::System::Int32 a1)
		{
			return ((::InControl::Touch*(*)(::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GETTOUCHBYFINGERID_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 ScreenToWorldPoint(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_SCREENTOWORLDPOINT_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 ViewToWorldPoint(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_VIEWTOWORLDPOINT_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 ScreenToViewPoint(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_SCREENTOVIEWPOINT_OFFSET))(a1);
		}

		static ::System::Single ConvertToWorld(::System::Single a1, ::InControl::TouchUnitType a2)
		{
			return ((::System::Single(*)(::System::Single, ::InControl::TouchUnitType))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_CONVERTTOWORLD_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rect PercentToWorldRect(::UnityEngine::Rect a1)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_PERCENTTOWORLDRECT_OFFSET))(a1);
		}

		static ::UnityEngine::Rect PixelToWorldRect(::UnityEngine::Rect a1)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_PIXELTOWORLDRECT_OFFSET))(a1);
		}

		static ::UnityEngine::Rect ConvertToWorld_1(::UnityEngine::Rect a1, ::InControl::TouchUnitType a2)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::InControl::TouchUnitType))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_CONVERTTOWORLD_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Camera* get_Camera()
		{
			return ((::UnityEngine::Camera*(*)())((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GET_CAMERA_OFFSET))();
		}

		static ::InControl::InputDevice* get_Device()
		{
			return ((::InControl::InputDevice*(*)())((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GET_DEVICE_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_ViewSize()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GET_VIEWSIZE_OFFSET))();
		}

		static ::System::Single get_PercentToWorld()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GET_PERCENTTOWORLD_OFFSET))();
		}

		static ::System::Single get_HalfPercentToWorld()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GET_HALFPERCENTTOWORLD_OFFSET))();
		}

		static ::System::Single get_PixelToWorld()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GET_PIXELTOWORLD_OFFSET))();
		}

		static ::System::Single get_HalfPixelToWorld()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GET_HALFPIXELTOWORLD_OFFSET))();
		}

		static ::UnityEngine::Vector2 get_ScreenSize()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GET_SCREENSIZE_OFFSET))();
		}

		static ::UnityEngine::Vector2 get_HalfScreenSize()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GET_HALFSCREENSIZE_OFFSET))();
		}

		static ::InControl::TouchManager_GizmoShowOption get_ControlsShowGizmos()
		{
			return ((::InControl::TouchManager_GizmoShowOption(*)())((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GET_CONTROLSSHOWGIZMOS_OFFSET))();
		}

		static ::System::Boolean get_ControlsEnabled_1()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GET_CONTROLSENABLED_1_OFFSET))();
		}

		static ::System::Void set_ControlsEnabled_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_SET_CONTROLSENABLED_1_OFFSET))(a1);
		}

		static ::System::Boolean op_Implicit(::InControl::TouchManager* a1)
		{
			return ((::System::Boolean(*)(::InControl::TouchManager*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_OP_IMPLICIT_OFFSET))(a1);
		}
	};
}
