#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/InControl/OneAxisInputControl.h"

namespace System { class String; }

#define INCONTROL_INPUTCONTROL_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x17FB33F0)
#define INCONTROL_INPUTCONTROL_GET_ISANALOG_OFFSET UNITYSDK_OFFSET(0x17FB3450)
#define INCONTROL_INPUTCONTROL_GET_ISBUTTON_OFFSET UNITYSDK_OFFSET(0x17FB3430)
#define INCONTROL_INPUTCONTROL_GET_ISONZEROTICK_OFFSET UNITYSDK_OFFSET(0x17FB3580)
#define INCONTROL_INPUTCONTROL_GET_ISSTANDARD_OFFSET UNITYSDK_OFFSET(0x17FAD540)
#define INCONTROL_INPUTCONTROL_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x17FB3410)
#define INCONTROL_INPUTCONTROL_SETZEROTICK_OFFSET UNITYSDK_OFFSET(0x17FB3570)
#define INCONTROL_INPUTCONTROL_SET_HANDLE_OFFSET UNITYSDK_OFFSET(0x17FB3400)
#define INCONTROL_INPUTCONTROL_SET_ISANALOG_OFFSET UNITYSDK_OFFSET(0x17FB3460)
#define INCONTROL_INPUTCONTROL_SET_ISBUTTON_OFFSET UNITYSDK_OFFSET(0x17FB3440)
#define INCONTROL_INPUTCONTROL_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x17FB3420)
#define INCONTROL_INPUTCONTROL__CCTOR_OFFSET UNITYSDK_OFFSET(0x17FB3590)
#define INCONTROL_INPUTCONTROL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17FB34B0)
#define INCONTROL_INPUTCONTROL__CTOR_2_OFFSET UNITYSDK_OFFSET(0x17FB3510)
#define INCONTROL_INPUTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x17FB3470)

namespace InControl
{
	inline static constexpr unsigned int InputControl_TypeDefinitionIndex = 37856;

	class InputControl : public ::InControl::OneAxisInputControl
	{
	public:
		static ::InControl::InputControl** StaticGet_Null()
		{
			return (::InControl::InputControl**)Il2CppClass::FromTypeDefinitionIndex(InputControl_TypeDefinitionIndex)->GetStaticField(0x11CB0);
		}
		::System::String* _Handle_k__BackingField; // 0x68
		::System::UInt64 zeroTick; // 0x70
		::InControl::InputControlType _Target_k__BackingField; // 0x78
		::System::Boolean _IsButton_k__BackingField; // 0x7C
		::System::Boolean Passive; // 0x7D
		::System::Boolean _IsAnalog_k__BackingField; // 0x7E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1, ::InControl::InputControlType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROL__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::String* a1, ::InControl::InputControlType a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::InControl::InputControlType, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROL__CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROL__CCTOR_OFFSET))();
		}

		::System::String* get_Handle()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROL_GET_HANDLE_OFFSET))(this);
		}

		::System::Void set_Handle(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROL_SET_HANDLE_OFFSET))(this, a1);
		}

		::InControl::InputControlType get_Target()
		{
			return ((::InControl::InputControlType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROL_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::InControl::InputControlType a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROL_SET_TARGET_OFFSET))(this, a1);
		}

		::System::Boolean get_IsButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROL_GET_ISBUTTON_OFFSET))(this);
		}

		::System::Void set_IsButton(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROL_SET_ISBUTTON_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAnalog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROL_GET_ISANALOG_OFFSET))(this);
		}

		::System::Void set_IsAnalog(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROL_SET_ISANALOG_OFFSET))(this, a1);
		}

		::System::Void SetZeroTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROL_SETZEROTICK_OFFSET))(this);
		}

		::System::Boolean get_IsOnZeroTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROL_GET_ISONZEROTICK_OFFSET))(this);
		}

		::System::Boolean get_IsStandard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROL_GET_ISSTANDARD_OFFSET))(this);
		}
	};
}
