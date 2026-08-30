#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlSourceType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/KeyCode.h"

namespace InControl { class InputDevice; }
namespace System { class String; }

#define INCONTROL_INPUTCONTROLSOURCE_GETSTATE_OFFSET UNITYSDK_OFFSET(0x3B57160)
#define INCONTROL_INPUTCONTROLSOURCE_GETVALUE_OFFSET UNITYSDK_OFFSET(0x3B57150)
#define INCONTROL_INPUTCONTROLSOURCE_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1E120)
#define INCONTROL_INPUTCONTROLSOURCE_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x5F00)
#define INCONTROL_INPUTCONTROLSOURCE_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x2200)
#define INCONTROL_INPUTCONTROLSOURCE_SET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x2E950)
#define INCONTROL_INPUTCONTROLSOURCE_TOCODE_OFFSET UNITYSDK_OFFSET(0x3B57170)
#define INCONTROL_INPUTCONTROLSOURCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B57140)
#define INCONTROL_INPUTCONTROLSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x7DC40)

namespace InControl
{
	inline static constexpr unsigned int InputControlSource_TypeDefinitionIndex = 39526;

	struct alignas(4) InputControlSource
	{
		::InControl::InputControlSourceType sourceType; // 0x10
		::System::Int32 index; // 0x14

		::System::Void _ctor(::InControl::InputControlSourceType a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlSourceType, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLSOURCE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::UnityEngine::KeyCode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLSOURCE__CTOR_1_OFFSET))(this, a1);
		}

		::InControl::InputControlSourceType get_SourceType()
		{
			return ((::InControl::InputControlSourceType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLSOURCE_GET_SOURCETYPE_OFFSET))(this);
		}

		::System::Void set_SourceType(::InControl::InputControlSourceType a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlSourceType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLSOURCE_SET_SOURCETYPE_OFFSET))(this, a1);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLSOURCE_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLSOURCE_SET_INDEX_OFFSET))(this, a1);
		}

		::System::Single GetValue(::InControl::InputDevice* a1)
		{
			return ((::System::Single(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLSOURCE_GETVALUE_OFFSET))(this, a1);
		}

		::System::Boolean GetState(::InControl::InputDevice* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLSOURCE_GETSTATE_OFFSET))(this, a1);
		}

		::System::String* ToCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLSOURCE_TOCODE_OFFSET))(this);
		}
	};
}
