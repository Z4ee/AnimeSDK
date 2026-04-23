#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/Mouse.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define INCONTROL_UNITYMOUSEPROVIDER_CLEARSTATE_OFFSET UNITYSDK_OFFSET(0x173146C0)
#define INCONTROL_UNITYMOUSEPROVIDER_GETBUTTONISPRESSED_OFFSET UNITYSDK_OFFSET(0x17314FD0)
#define INCONTROL_UNITYMOUSEPROVIDER_GETBUTTONWASPRESSED_OFFSET UNITYSDK_OFFSET(0x17315010)
#define INCONTROL_UNITYMOUSEPROVIDER_GETBUTTONWASRELEASED_OFFSET UNITYSDK_OFFSET(0x17315080)
#define INCONTROL_UNITYMOUSEPROVIDER_GETDELTASCROLL_OFFSET UNITYSDK_OFFSET(0x17314FC0)
#define INCONTROL_UNITYMOUSEPROVIDER_GETDELTAX_OFFSET UNITYSDK_OFFSET(0x17314FA0)
#define INCONTROL_UNITYMOUSEPROVIDER_GETDELTAY_OFFSET UNITYSDK_OFFSET(0x17314FB0)
#define INCONTROL_UNITYMOUSEPROVIDER_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x17314F90)
#define INCONTROL_UNITYMOUSEPROVIDER_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x173147B0)
#define INCONTROL_UNITYMOUSEPROVIDER_HASMOUSEPRESENT_OFFSET UNITYSDK_OFFSET(0x173150F0)
#define INCONTROL_UNITYMOUSEPROVIDER_ISANYMOVED_OFFSET UNITYSDK_OFFSET(0x173147C0)
#define INCONTROL_UNITYMOUSEPROVIDER_RESET_OFFSET UNITYSDK_OFFSET(0x17314730)
#define INCONTROL_UNITYMOUSEPROVIDER_SAFEGETMOUSEBUTTON_OFFSET UNITYSDK_OFFSET(0x17314F00)
#define INCONTROL_UNITYMOUSEPROVIDER_SETUP_OFFSET UNITYSDK_OFFSET(0x17314650)
#define INCONTROL_UNITYMOUSEPROVIDER_SET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x173147A0)
#define INCONTROL_UNITYMOUSEPROVIDER_UPDATE_OFFSET UNITYSDK_OFFSET(0x173147D0)
#define INCONTROL_UNITYMOUSEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x17315100)

namespace InControl
{
	inline static constexpr unsigned int UnityMouseProvider_TypeDefinitionIndex = 37168;

	class UnityMouseProvider : public ::System::Object
	{
	public:
		// static const ::System::String* mouseXAxis; // 0x0
		// static const ::System::String* mouseYAxis; // 0x0
		::Il2CppArray<::System::Boolean>* lastButtonPressed; // 0x10
		::Il2CppArray<::System::Boolean>* buttonPressed; // 0x18
		::UnityEngine::Vector2 lastPosition; // 0x20
		::System::Single scroll; // 0x28
		::UnityEngine::Vector2 position; // 0x2C
		::System::Boolean _IsDirty_k__BackingField; // 0x34
		::UnityEngine::Vector2 delta; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYMOUSEPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Void Setup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYMOUSEPROVIDER_SETUP_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYMOUSEPROVIDER_RESET_OFFSET))(this);
		}

		::System::Void set_IsDirty(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_UNITYMOUSEPROVIDER_SET_ISDIRTY_OFFSET))(this, value);
		}

		::System::Boolean get_IsDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYMOUSEPROVIDER_GET_ISDIRTY_OFFSET))(this);
		}

		::System::Boolean IsAnyMoved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYMOUSEPROVIDER_ISANYMOVED_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYMOUSEPROVIDER_UPDATE_OFFSET))(this);
		}

		static ::System::Boolean SafeGetMouseButton(::System::Int32 button)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_UNITYMOUSEPROVIDER_SAFEGETMOUSEBUTTON_OFFSET))(button);
		}

		::System::Void ClearState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYMOUSEPROVIDER_CLEARSTATE_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYMOUSEPROVIDER_GETPOSITION_OFFSET))(this);
		}

		::System::Single GetDeltaX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYMOUSEPROVIDER_GETDELTAX_OFFSET))(this);
		}

		::System::Single GetDeltaY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYMOUSEPROVIDER_GETDELTAY_OFFSET))(this);
		}

		::System::Single GetDeltaScroll()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYMOUSEPROVIDER_GETDELTASCROLL_OFFSET))(this);
		}

		::System::Boolean GetButtonIsPressed(::InControl::Mouse control)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::Mouse))((::PBYTE)hIl2Cpp + INCONTROL_UNITYMOUSEPROVIDER_GETBUTTONISPRESSED_OFFSET))(this, control);
		}

		::System::Boolean GetButtonWasPressed(::InControl::Mouse control)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::Mouse))((::PBYTE)hIl2Cpp + INCONTROL_UNITYMOUSEPROVIDER_GETBUTTONWASPRESSED_OFFSET))(this, control);
		}

		::System::Boolean GetButtonWasReleased(::InControl::Mouse control)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::Mouse))((::PBYTE)hIl2Cpp + INCONTROL_UNITYMOUSEPROVIDER_GETBUTTONWASRELEASED_OFFSET))(this, control);
		}

		::System::Boolean HasMousePresent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYMOUSEPROVIDER_HASMOUSEPRESENT_OFFSET))(this);
		}
	};
}
