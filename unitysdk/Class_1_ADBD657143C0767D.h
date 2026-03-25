#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_EvtType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace RPG::Client { class VirtualCursor; }

#define CLASS_1_ADBD657143C0767D_GET_CURSORPOS_OFFSET UNITYSDK_OFFSET(0x11755FA0)
#define CLASS_1_ADBD657143C0767D_GET_ISPRESSJOYSTICK_OFFSET UNITYSDK_OFFSET(0x11755FD0)
#define CLASS_1_ADBD657143C0767D_GET_JOYSTICKINPUT_OFFSET UNITYSDK_OFFSET(0x11755FF0)
#define CLASS_1_ADBD657143C0767D_GET_TOUCHINPUT_OFFSET UNITYSDK_OFFSET(0x11756020)
#define CLASS_1_ADBD657143C0767D_METHOD_1_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x117553F0)
#define CLASS_1_ADBD657143C0767D_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x11755CF0)
#define CLASS_1_ADBD657143C0767D_METHOD_1_28F815C49D235C59_OFFSET UNITYSDK_OFFSET(0x11754F10)
#define CLASS_1_ADBD657143C0767D_METHOD_1_354CB9B459B0C5D5_OFFSET UNITYSDK_OFFSET(0x11755370)
#define CLASS_1_ADBD657143C0767D_METHOD_1_4D2A473556700CDC_1_OFFSET UNITYSDK_OFFSET(0x117559A0)
#define CLASS_1_ADBD657143C0767D_METHOD_1_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0x11755440)
#define CLASS_1_ADBD657143C0767D_METHOD_1_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x11755950)
#define CLASS_1_ADBD657143C0767D_METHOD_1_85E657E328490B3B_OFFSET UNITYSDK_OFFSET(0x11754E40)
#define CLASS_1_ADBD657143C0767D_METHOD_1_8BD11CDEA7D5139F_OFFSET UNITYSDK_OFFSET(0x11755E30)
#define CLASS_1_ADBD657143C0767D_METHOD_1_9D967D80C41C7781_1_OFFSET UNITYSDK_OFFSET(0x117563A0)
#define CLASS_1_ADBD657143C0767D_METHOD_1_9D967D80C41C7781_2_OFFSET UNITYSDK_OFFSET(0x117563F0)
#define CLASS_1_ADBD657143C0767D_METHOD_1_9D967D80C41C7781_OFFSET UNITYSDK_OFFSET(0x11756350)
#define CLASS_1_ADBD657143C0767D_METHOD_1_AA1355730928EC40_OFFSET UNITYSDK_OFFSET(0x11756180)
#define CLASS_1_ADBD657143C0767D_METHOD_1_B12B4E4A39A083D2_OFFSET UNITYSDK_OFFSET(0x11755210)
#define CLASS_1_ADBD657143C0767D_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x11755790)
#define CLASS_1_ADBD657143C0767D_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x11756120)
#define CLASS_1_ADBD657143C0767D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11754EC0)
#define CLASS_1_ADBD657143C0767D_METHOD_1_D20BF56E36607D54_1_OFFSET UNITYSDK_OFFSET(0x11754DF0)
#define CLASS_1_ADBD657143C0767D_METHOD_1_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0x11754DA0)
#define CLASS_1_ADBD657143C0767D_METHOD_1_F3044C7F0F775E6E_OFFSET UNITYSDK_OFFSET(0x11756050)
#define CLASS_1_ADBD657143C0767D_SET_CURSORPOS_OFFSET UNITYSDK_OFFSET(0x11755FC0)
#define CLASS_1_ADBD657143C0767D_SET_ISPRESSJOYSTICK_OFFSET UNITYSDK_OFFSET(0x11755FE0)
#define CLASS_1_ADBD657143C0767D_SET_JOYSTICKINPUT_OFFSET UNITYSDK_OFFSET(0x11756010)
#define CLASS_1_ADBD657143C0767D_SET_TOUCHINPUT_OFFSET UNITYSDK_OFFSET(0x11756040)
#define CLASS_1_ADBD657143C0767D__CTOR_OFFSET UNITYSDK_OFFSET(0x11756440)

inline static constexpr unsigned int Class_1_ADBD657143C0767D_TypeDefinitionIndex = 60775;

class Class_1_ADBD657143C0767D : public ::System::Object
{
public:
	::UnityEngine::Vector3 _CursorPos_k__BackingField; // 0x10
	::System::Boolean _IsPressJoyStick_k__BackingField; // 0x1C
	::System::Single Field_1_3; // 0x20
	::UnityEngine::Vector3 _TouchInput_k__BackingField; // 0x24
	::HedgehogTeam::EasyTouch::EasyTouch_EvtType Field_1_8; // 0x30
	::System::Int32 Field_1_7; // 0x34
	::UnityEngine::Vector3 _JoyStickInput_k__BackingField; // 0x38
	::System::Int32 Field_1_6; // 0x44
	::System::Single Field_1_4; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_METHOD_1_D20BF56E36607D54_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D20BF56E36607D54_1(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_METHOD_1_D20BF56E36607D54_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_85E657E328490B3B(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_METHOD_1_85E657E328490B3B_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_28F815C49D235C59(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_METHOD_1_28F815C49D235C59_OFFSET))(this, a1);
	}

	::System::Void Method_1_B12B4E4A39A083D2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_METHOD_1_B12B4E4A39A083D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_METHOD_1_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_1_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_METHOD_1_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_1_8BD11CDEA7D5139F(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_METHOD_1_8BD11CDEA7D5139F_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_CursorPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_GET_CURSORPOS_OFFSET))(this);
	}

	::System::Void set_CursorPos(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_SET_CURSORPOS_OFFSET))(this, value);
	}

	::RPG::Client::VirtualCursor* Method_1_354CB9B459B0C5D5()
	{
		return ((::RPG::Client::VirtualCursor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_METHOD_1_354CB9B459B0C5D5_OFFSET))(this);
	}

	::System::Boolean get_IsPressJoyStick()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_GET_ISPRESSJOYSTICK_OFFSET))(this);
	}

	::System::Void set_IsPressJoyStick(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_SET_ISPRESSJOYSTICK_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_JoyStickInput()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_GET_JOYSTICKINPUT_OFFSET))(this);
	}

	::System::Void set_JoyStickInput(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_SET_JOYSTICKINPUT_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_TouchInput()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_GET_TOUCHINPUT_OFFSET))(this);
	}

	::System::Void set_TouchInput(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_SET_TOUCHINPUT_OFFSET))(this, value);
	}

	::System::Void Method_1_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_F3044C7F0F775E6E(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_METHOD_1_F3044C7F0F775E6E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_4D2A473556700CDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_METHOD_1_4D2A473556700CDC_OFFSET))(this);
	}

	::System::Void Method_1_4D2A473556700CDC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_METHOD_1_4D2A473556700CDC_1_OFFSET))(this);
	}

	::System::Void Method_1_AA1355730928EC40(::HedgehogTeam::EasyTouch::Gesture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_METHOD_1_AA1355730928EC40_OFFSET))(this, a1);
	}

	::System::Void Method_1_9D967D80C41C7781(::HedgehogTeam::EasyTouch::Gesture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_METHOD_1_9D967D80C41C7781_OFFSET))(this, a1);
	}

	::System::Void Method_1_9D967D80C41C7781_1(::HedgehogTeam::EasyTouch::Gesture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_METHOD_1_9D967D80C41C7781_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_9D967D80C41C7781_2(::HedgehogTeam::EasyTouch::Gesture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_METHOD_1_9D967D80C41C7781_2_OFFSET))(this, a1);
	}
};
