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

#define INCONTROL_TOUCHMANAGER_ADD_ONSETUP_OFFSET UNITYSDK_OFFSET(0x15C0C1F0)
#define INCONTROL_TOUCHMANAGER_COMMITCONTROLSTATES_OFFSET UNITYSDK_OFFSET(0x15C0F1F0)
#define INCONTROL_TOUCHMANAGER_COMMITDEVICE_OFFSET UNITYSDK_OFFSET(0x15C0F1E0)
#define INCONTROL_TOUCHMANAGER_CONVERTSCREENTOVIEWPOINT_OFFSET UNITYSDK_OFFSET(0x15C0FDA0)
#define INCONTROL_TOUCHMANAGER_CONVERTSCREENTOWORLDPOINT_OFFSET UNITYSDK_OFFSET(0x15C0FC90)
#define INCONTROL_TOUCHMANAGER_CONVERTTOWORLD_1_OFFSET UNITYSDK_OFFSET(0x15C10E40)
#define INCONTROL_TOUCHMANAGER_CONVERTTOWORLD_OFFSET UNITYSDK_OFFSET(0x15C103D0)
#define INCONTROL_TOUCHMANAGER_CONVERTVIEWTOWORLDPOINT_OFFSET UNITYSDK_OFFSET(0x15C0F2D0)
#define INCONTROL_TOUCHMANAGER_CREATEDEVICE_OFFSET UNITYSDK_OFFSET(0x15C0E1E0)
#define INCONTROL_TOUCHMANAGER_CREATETOUCHES_OFFSET UNITYSDK_OFFSET(0x15C0E640)
#define INCONTROL_TOUCHMANAGER_GETCURRENTSCREENSIZE_OFFSET UNITYSDK_OFFSET(0x15C0DF30)
#define INCONTROL_TOUCHMANAGER_GETTOUCHBYFINGERID_OFFSET UNITYSDK_OFFSET(0x15C0FF30)
#define INCONTROL_TOUCHMANAGER_GETTOUCH_OFFSET UNITYSDK_OFFSET(0x15C0B150)
#define INCONTROL_TOUCHMANAGER_GET_CAMERA_OFFSET UNITYSDK_OFFSET(0x15C10EA0)
#define INCONTROL_TOUCHMANAGER_GET_CONTROLSENABLED_1_OFFSET UNITYSDK_OFFSET(0x15C110A0)
#define INCONTROL_TOUCHMANAGER_GET_CONTROLSENABLED_OFFSET UNITYSDK_OFFSET(0x15C0FEA0)
#define INCONTROL_TOUCHMANAGER_GET_CONTROLSSHOWGIZMOS_OFFSET UNITYSDK_OFFSET(0x15C0D370)
#define INCONTROL_TOUCHMANAGER_GET_DEVICE_OFFSET UNITYSDK_OFFSET(0x15C0C610)
#define INCONTROL_TOUCHMANAGER_GET_HALFPERCENTTOWORLD_OFFSET UNITYSDK_OFFSET(0x15C10F20)
#define INCONTROL_TOUCHMANAGER_GET_HALFPIXELTOWORLD_OFFSET UNITYSDK_OFFSET(0x15C10FA0)
#define INCONTROL_TOUCHMANAGER_GET_HALFSCREENSIZE_OFFSET UNITYSDK_OFFSET(0x15C10DC0)
#define INCONTROL_TOUCHMANAGER_GET_PERCENTTOWORLD_OFFSET UNITYSDK_OFFSET(0x15C0C380)
#define INCONTROL_TOUCHMANAGER_GET_PIXELTOWORLD_OFFSET UNITYSDK_OFFSET(0x15C0C300)
#define INCONTROL_TOUCHMANAGER_GET_SCREENSIZE_OFFSET UNITYSDK_OFFSET(0x15C11020)
#define INCONTROL_TOUCHMANAGER_GET_TOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x15C0B0C0)
#define INCONTROL_TOUCHMANAGER_GET_TOUCHES_OFFSET UNITYSDK_OFFSET(0x15C0FEB0)
#define INCONTROL_TOUCHMANAGER_GET_VIEWSIZE_OFFSET UNITYSDK_OFFSET(0x15C0C400)
#define INCONTROL_TOUCHMANAGER_INVOKETOUCHEVENTS_OFFSET UNITYSDK_OFFSET(0x15C0F670)
#define INCONTROL_TOUCHMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15C0DAE0)
#define INCONTROL_TOUCHMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15C0D730)
#define INCONTROL_TOUCHMANAGER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x15C111A0)
#define INCONTROL_TOUCHMANAGER_PERCENTTOWORLDRECT_OFFSET UNITYSDK_OFFSET(0x15C104F0)
#define INCONTROL_TOUCHMANAGER_PIXELTOWORLDRECT_OFFSET UNITYSDK_OFFSET(0x15C107B0)
#define INCONTROL_TOUCHMANAGER_REMOVE_ONSETUP_OFFSET UNITYSDK_OFFSET(0x15C0D610)
#define INCONTROL_TOUCHMANAGER_RESET_OFFSET UNITYSDK_OFFSET(0x15C0DD60)
#define INCONTROL_TOUCHMANAGER_SCREENTOVIEWPOINT_OFFSET UNITYSDK_OFFSET(0x15C10250)
#define INCONTROL_TOUCHMANAGER_SCREENTOWORLDPOINT_OFFSET UNITYSDK_OFFSET(0x15C100D0)
#define INCONTROL_TOUCHMANAGER_SENDTOUCHBEGAN_OFFSET UNITYSDK_OFFSET(0x15C0F880)
#define INCONTROL_TOUCHMANAGER_SENDTOUCHENDED_OFFSET UNITYSDK_OFFSET(0x15C0FA00)
#define INCONTROL_TOUCHMANAGER_SENDTOUCHMOVED_OFFSET UNITYSDK_OFFSET(0x15C0F940)
#define INCONTROL_TOUCHMANAGER_SETUP_OFFSET UNITYSDK_OFFSET(0x15C0DE40)
#define INCONTROL_TOUCHMANAGER_SET_CONTROLSENABLED_1_OFFSET UNITYSDK_OFFSET(0x15C11120)
#define INCONTROL_TOUCHMANAGER_SET_CONTROLSENABLED_OFFSET UNITYSDK_OFFSET(0x15C0FAC0)
#define INCONTROL_TOUCHMANAGER_SUBMITCONTROLSTATES_OFFSET UNITYSDK_OFFSET(0x15C0F100)
#define INCONTROL_TOUCHMANAGER_TOUCHCAMERAISVALID_OFFSET UNITYSDK_OFFSET(0x15C0FB50)
#define INCONTROL_TOUCHMANAGER_UPDATEDEVICE_OFFSET UNITYSDK_OFFSET(0x15C0EB30)
#define INCONTROL_TOUCHMANAGER_UPDATESCREENSIZEATENDOFFRAME_OFFSET UNITYSDK_OFFSET(0x15C0E960)
#define INCONTROL_TOUCHMANAGER_UPDATESCREENSIZE_OFFSET UNITYSDK_OFFSET(0x15C0DFB0)
#define INCONTROL_TOUCHMANAGER_UPDATETOUCHES_OFFSET UNITYSDK_OFFSET(0x15C0EB70)
#define INCONTROL_TOUCHMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x15C0E9C0)
#define INCONTROL_TOUCHMANAGER_VIEWTOWORLDPOINT_OFFSET UNITYSDK_OFFSET(0x15C0C490)
#define INCONTROL_TOUCHMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x15C0D6C0)

namespace InControl
{
	inline static constexpr unsigned int TouchManager_TypeDefinitionIndex = 31472;

	class TouchManager : public ::InControl::SingletonMonoBehavior_1<::InControl::TouchManager*>
	{
	public:
		static ::System::Action** StaticGet_OnSetup()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(TouchManager_TypeDefinitionIndex)->GetStaticField(0x37180);
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

		static ::System::Void add_OnSetup(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_ADD_ONSETUP_OFFSET))(value);
		}

		static ::System::Void remove_OnSetup(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_REMOVE_ONSETUP_OFFSET))(value);
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

		::System::Void UpdateDevice(::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_UPDATEDEVICE_OFFSET))(this, updateTick, deltaTime);
		}

		::System::Void CommitDevice(::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_COMMITDEVICE_OFFSET))(this, updateTick, deltaTime);
		}

		::System::Void SubmitControlStates(::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_SUBMITCONTROLSTATES_OFFSET))(this, updateTick, deltaTime);
		}

		::System::Void CommitControlStates(::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_COMMITCONTROLSTATES_OFFSET))(this, updateTick, deltaTime);
		}

		::System::Void UpdateScreenSize(::UnityEngine::Vector2 currentScreenSize)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_UPDATESCREENSIZE_OFFSET))(this, currentScreenSize);
		}

		::System::Void CreateTouches()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_CREATETOUCHES_OFFSET))(this);
		}

		::System::Void UpdateTouches(::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_UPDATETOUCHES_OFFSET))(this, updateTick, deltaTime);
		}

		::System::Void SendTouchBegan(::InControl::Touch* touch)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Touch*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_SENDTOUCHBEGAN_OFFSET))(this, touch);
		}

		::System::Void SendTouchMoved(::InControl::Touch* touch)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Touch*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_SENDTOUCHMOVED_OFFSET))(this, touch);
		}

		::System::Void SendTouchEnded(::InControl::Touch* touch)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Touch*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_SENDTOUCHENDED_OFFSET))(this, touch);
		}

		::System::Void InvokeTouchEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_INVOKETOUCHEVENTS_OFFSET))(this);
		}

		::System::Boolean TouchCameraIsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_TOUCHCAMERAISVALID_OFFSET))(this);
		}

		::UnityEngine::Vector3 ConvertScreenToWorldPoint(::UnityEngine::Vector2 point)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_CONVERTSCREENTOWORLDPOINT_OFFSET))(this, point);
		}

		::UnityEngine::Vector3 ConvertViewToWorldPoint(::UnityEngine::Vector2 point)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_CONVERTVIEWTOWORLDPOINT_OFFSET))(this, point);
		}

		::UnityEngine::Vector3 ConvertScreenToViewPoint(::UnityEngine::Vector2 point)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_CONVERTSCREENTOVIEWPOINT_OFFSET))(this, point);
		}

		::UnityEngine::Vector2 GetCurrentScreenSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GETCURRENTSCREENSIZE_OFFSET))(this);
		}

		::System::Boolean get_controlsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GET_CONTROLSENABLED_OFFSET))(this);
		}

		::System::Void set_controlsEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_SET_CONTROLSENABLED_OFFSET))(this, value);
		}

		static ::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::Touch*>* get_Touches()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::Touch*>*(*)())((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GET_TOUCHES_OFFSET))();
		}

		static ::System::Int32 get_TouchCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GET_TOUCHCOUNT_OFFSET))();
		}

		static ::InControl::Touch* GetTouch(::System::Int32 touchIndex)
		{
			return ((::InControl::Touch*(*)(::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GETTOUCH_OFFSET))(touchIndex);
		}

		static ::InControl::Touch* GetTouchByFingerId(::System::Int32 fingerId)
		{
			return ((::InControl::Touch*(*)(::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GETTOUCHBYFINGERID_OFFSET))(fingerId);
		}

		static ::UnityEngine::Vector3 ScreenToWorldPoint(::UnityEngine::Vector2 point)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_SCREENTOWORLDPOINT_OFFSET))(point);
		}

		static ::UnityEngine::Vector3 ViewToWorldPoint(::UnityEngine::Vector2 point)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_VIEWTOWORLDPOINT_OFFSET))(point);
		}

		static ::UnityEngine::Vector3 ScreenToViewPoint(::UnityEngine::Vector2 point)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_SCREENTOVIEWPOINT_OFFSET))(point);
		}

		static ::System::Single ConvertToWorld(::System::Single value, ::InControl::TouchUnitType unitType)
		{
			return ((::System::Single(*)(::System::Single, ::InControl::TouchUnitType))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_CONVERTTOWORLD_OFFSET))(value, unitType);
		}

		static ::UnityEngine::Rect PercentToWorldRect(::UnityEngine::Rect rect)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_PERCENTTOWORLDRECT_OFFSET))(rect);
		}

		static ::UnityEngine::Rect PixelToWorldRect(::UnityEngine::Rect rect)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_PIXELTOWORLDRECT_OFFSET))(rect);
		}

		static ::UnityEngine::Rect ConvertToWorld_1(::UnityEngine::Rect rect, ::InControl::TouchUnitType unitType)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::InControl::TouchUnitType))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_CONVERTTOWORLD_1_OFFSET))(rect, unitType);
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

		static ::System::Void set_ControlsEnabled_1(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_SET_CONTROLSENABLED_1_OFFSET))(value);
		}

		static ::System::Boolean op_Implicit(::InControl::TouchManager* instance)
		{
			return ((::System::Boolean(*)(::InControl::TouchManager*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_OP_IMPLICIT_OFFSET))(instance);
		}
	};
}
