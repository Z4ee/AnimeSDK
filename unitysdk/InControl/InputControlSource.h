#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlSourceType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/KeyCode.h"

namespace InControl { class InputDevice; }
namespace System { class String; }

#define INCONTROL_INPUTCONTROLSOURCE_GETSTATE_OFFSET UNITYSDK_OFFSET(0x2296C20)
#define INCONTROL_INPUTCONTROLSOURCE_GETVALUE_OFFSET UNITYSDK_OFFSET(0x2296C10)
#define INCONTROL_INPUTCONTROLSOURCE_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1DA80)
#define INCONTROL_INPUTCONTROLSOURCE_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define INCONTROL_INPUTCONTROLSOURCE_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1D50)
#define INCONTROL_INPUTCONTROLSOURCE_SET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x299E0)
#define INCONTROL_INPUTCONTROLSOURCE_TOCODE_OFFSET UNITYSDK_OFFSET(0x2296C30)
#define INCONTROL_INPUTCONTROLSOURCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2296C00)
#define INCONTROL_INPUTCONTROLSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x73E20)

namespace InControl
{
	inline static constexpr unsigned int InputControlSource_TypeDefinitionIndex = 37127;

	struct alignas(4) InputControlSource
	{
		::InControl::InputControlSourceType sourceType; // 0x10
		::System::Int32 index; // 0x14

		::System::Void _ctor(::InControl::InputControlSourceType sourceType, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlSourceType, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLSOURCE__CTOR_OFFSET))(this, sourceType, index);
		}

		::System::Void _ctor_1(::UnityEngine::KeyCode keyCode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLSOURCE__CTOR_1_OFFSET))(this, keyCode);
		}

		::InControl::InputControlSourceType get_SourceType()
		{
			return ((::InControl::InputControlSourceType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLSOURCE_GET_SOURCETYPE_OFFSET))(this);
		}

		::System::Void set_SourceType(::InControl::InputControlSourceType value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlSourceType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLSOURCE_SET_SOURCETYPE_OFFSET))(this, value);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLSOURCE_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLSOURCE_SET_INDEX_OFFSET))(this, value);
		}

		::System::Single GetValue(::InControl::InputDevice* inputDevice)
		{
			return ((::System::Single(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLSOURCE_GETVALUE_OFFSET))(this, inputDevice);
		}

		::System::Boolean GetState(::InControl::InputDevice* inputDevice)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLSOURCE_GETSTATE_OFFSET))(this, inputDevice);
		}

		::System::String* ToCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLSOURCE_TOCODE_OFFSET))(this);
		}
	};
}
