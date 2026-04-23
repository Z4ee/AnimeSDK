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

#define INCONTROL_TOUCHMANAGER_ADD_ONSETUP_OFFSET UNITYSDK_OFFSET(0x17209B80)
#define INCONTROL_TOUCHMANAGER_COMMITCONTROLSTATES_OFFSET UNITYSDK_OFFSET(0x1720CB80)
#define INCONTROL_TOUCHMANAGER_COMMITDEVICE_OFFSET UNITYSDK_OFFSET(0x1720CB70)
#define INCONTROL_TOUCHMANAGER_CONVERTSCREENTOVIEWPOINT_OFFSET UNITYSDK_OFFSET(0x1720D730)
#define INCONTROL_TOUCHMANAGER_CONVERTSCREENTOWORLDPOINT_OFFSET UNITYSDK_OFFSET(0x1720D620)
#define INCONTROL_TOUCHMANAGER_CONVERTTOWORLD_1_OFFSET UNITYSDK_OFFSET(0x1720E7D0)
#define INCONTROL_TOUCHMANAGER_CONVERTTOWORLD_OFFSET UNITYSDK_OFFSET(0x1720DD60)
#define INCONTROL_TOUCHMANAGER_CONVERTVIEWTOWORLDPOINT_OFFSET UNITYSDK_OFFSET(0x1720CC60)
#define INCONTROL_TOUCHMANAGER_CREATEDEVICE_OFFSET UNITYSDK_OFFSET(0x1720BB70)
#define INCONTROL_TOUCHMANAGER_CREATETOUCHES_OFFSET UNITYSDK_OFFSET(0x1720BFD0)
#define INCONTROL_TOUCHMANAGER_GETCURRENTSCREENSIZE_OFFSET UNITYSDK_OFFSET(0x1720B8C0)
#define INCONTROL_TOUCHMANAGER_GETTOUCHBYFINGERID_OFFSET UNITYSDK_OFFSET(0x1720D8C0)
#define INCONTROL_TOUCHMANAGER_GETTOUCH_OFFSET UNITYSDK_OFFSET(0x17208AE0)
#define INCONTROL_TOUCHMANAGER_GET_CAMERA_OFFSET UNITYSDK_OFFSET(0x1720E830)
#define INCONTROL_TOUCHMANAGER_GET_CONTROLSENABLED_1_OFFSET UNITYSDK_OFFSET(0x1720EA30)
#define INCONTROL_TOUCHMANAGER_GET_CONTROLSENABLED_OFFSET UNITYSDK_OFFSET(0x1720D830)
#define INCONTROL_TOUCHMANAGER_GET_CONTROLSSHOWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1720AD00)
#define INCONTROL_TOUCHMANAGER_GET_DEVICE_OFFSET UNITYSDK_OFFSET(0x17209FA0)
#define INCONTROL_TOUCHMANAGER_GET_HALFPERCENTTOWORLD_OFFSET UNITYSDK_OFFSET(0x1720E8B0)
#define INCONTROL_TOUCHMANAGER_GET_HALFPIXELTOWORLD_OFFSET UNITYSDK_OFFSET(0x1720E930)
#define INCONTROL_TOUCHMANAGER_GET_HALFSCREENSIZE_OFFSET UNITYSDK_OFFSET(0x1720E750)
#define INCONTROL_TOUCHMANAGER_GET_PERCENTTOWORLD_OFFSET UNITYSDK_OFFSET(0x17209D10)
#define INCONTROL_TOUCHMANAGER_GET_PIXELTOWORLD_OFFSET UNITYSDK_OFFSET(0x17209C90)
#define INCONTROL_TOUCHMANAGER_GET_SCREENSIZE_OFFSET UNITYSDK_OFFSET(0x1720E9B0)
#define INCONTROL_TOUCHMANAGER_GET_TOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x17208A50)
#define INCONTROL_TOUCHMANAGER_GET_TOUCHES_OFFSET UNITYSDK_OFFSET(0x1720D840)
#define INCONTROL_TOUCHMANAGER_GET_VIEWSIZE_OFFSET UNITYSDK_OFFSET(0x17209D90)
#define INCONTROL_TOUCHMANAGER_INVOKETOUCHEVENTS_OFFSET UNITYSDK_OFFSET(0x1720D000)
#define INCONTROL_TOUCHMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1720B470)
#define INCONTROL_TOUCHMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1720B0C0)
#define INCONTROL_TOUCHMANAGER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1720EB30)
#define INCONTROL_TOUCHMANAGER_PERCENTTOWORLDRECT_OFFSET UNITYSDK_OFFSET(0x1720DE80)
#define INCONTROL_TOUCHMANAGER_PIXELTOWORLDRECT_OFFSET UNITYSDK_OFFSET(0x1720E140)
#define INCONTROL_TOUCHMANAGER_REMOVE_ONSETUP_OFFSET UNITYSDK_OFFSET(0x1720AFA0)
#define INCONTROL_TOUCHMANAGER_RESET_OFFSET UNITYSDK_OFFSET(0x1720B6F0)
#define INCONTROL_TOUCHMANAGER_SCREENTOVIEWPOINT_OFFSET UNITYSDK_OFFSET(0x1720DBE0)
#define INCONTROL_TOUCHMANAGER_SCREENTOWORLDPOINT_OFFSET UNITYSDK_OFFSET(0x1720DA60)
#define INCONTROL_TOUCHMANAGER_SENDTOUCHBEGAN_OFFSET UNITYSDK_OFFSET(0x1720D210)
#define INCONTROL_TOUCHMANAGER_SENDTOUCHENDED_OFFSET UNITYSDK_OFFSET(0x1720D390)
#define INCONTROL_TOUCHMANAGER_SENDTOUCHMOVED_OFFSET UNITYSDK_OFFSET(0x1720D2D0)
#define INCONTROL_TOUCHMANAGER_SETUP_OFFSET UNITYSDK_OFFSET(0x1720B7D0)
#define INCONTROL_TOUCHMANAGER_SET_CONTROLSENABLED_1_OFFSET UNITYSDK_OFFSET(0x1720EAB0)
#define INCONTROL_TOUCHMANAGER_SET_CONTROLSENABLED_OFFSET UNITYSDK_OFFSET(0x1720D450)
#define INCONTROL_TOUCHMANAGER_SUBMITCONTROLSTATES_OFFSET UNITYSDK_OFFSET(0x1720CA90)
#define INCONTROL_TOUCHMANAGER_TOUCHCAMERAISVALID_OFFSET UNITYSDK_OFFSET(0x1720D4E0)
#define INCONTROL_TOUCHMANAGER_UPDATEDEVICE_OFFSET UNITYSDK_OFFSET(0x1720C4C0)
#define INCONTROL_TOUCHMANAGER_UPDATESCREENSIZEATENDOFFRAME_OFFSET UNITYSDK_OFFSET(0x1720C2F0)
#define INCONTROL_TOUCHMANAGER_UPDATESCREENSIZE_OFFSET UNITYSDK_OFFSET(0x1720B940)
#define INCONTROL_TOUCHMANAGER_UPDATETOUCHES_OFFSET UNITYSDK_OFFSET(0x1720C500)
#define INCONTROL_TOUCHMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1720C350)
#define INCONTROL_TOUCHMANAGER_VIEWTOWORLDPOINT_OFFSET UNITYSDK_OFFSET(0x17209E20)
#define INCONTROL_TOUCHMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1720B050)

namespace InControl
{
	inline static constexpr unsigned int TouchManager_TypeDefinitionIndex = 37192;

	class TouchManager : public ::InControl::SingletonMonoBehavior_1<::InControl::TouchManager*>
	{
	public:
		static ::System::Action** StaticGet_OnSetup()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(TouchManager_TypeDefinitionIndex)->GetStaticField(0x113C0);
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
