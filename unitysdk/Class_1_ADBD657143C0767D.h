#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_EvtType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace RPG::Client { class VirtualCursor; }

#define CLASS_1_ADBD657143C0767D_GET_CURSORPOS_OFFSET UNITYSDK_OFFSET(0xDD7DFC0)
#define CLASS_1_ADBD657143C0767D_GET_ISPRESSJOYSTICK_OFFSET UNITYSDK_OFFSET(0xDD7DFF0)
#define CLASS_1_ADBD657143C0767D_GET_JOYSTICKINPUT_OFFSET UNITYSDK_OFFSET(0xDD7E010)
#define CLASS_1_ADBD657143C0767D_GET_TOUCHINPUT_OFFSET UNITYSDK_OFFSET(0xDD7E040)
#define CLASS_1_ADBD657143C0767D_METHOD_1_1CE48CC9C88F5CA6_OFFSET UNITYSDK_OFFSET(0xDD7D210)
#define CLASS_1_ADBD657143C0767D_METHOD_1_277F0667818A8EA9_OFFSET UNITYSDK_OFFSET(0xDD7DE50)
#define CLASS_1_ADBD657143C0767D_METHOD_1_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0xDD7D2A0)
#define CLASS_1_ADBD657143C0767D_METHOD_1_28F815C49D235C59_OFFSET UNITYSDK_OFFSET(0xDD7CDA0)
#define CLASS_1_ADBD657143C0767D_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0xDD7D8E0)
#define CLASS_1_ADBD657143C0767D_METHOD_1_397374046D61F348_OFFSET UNITYSDK_OFFSET(0xDD7D0A0)
#define CLASS_1_ADBD657143C0767D_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xDD7DD10)
#define CLASS_1_ADBD657143C0767D_METHOD_1_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0xDD7D6D0)
#define CLASS_1_ADBD657143C0767D_METHOD_1_85E657E328490B3B_OFFSET UNITYSDK_OFFSET(0xDD7CCD0)
#define CLASS_1_ADBD657143C0767D_METHOD_1_9D967D80C41C7781_1_OFFSET UNITYSDK_OFFSET(0xDD7E3C0)
#define CLASS_1_ADBD657143C0767D_METHOD_1_9D967D80C41C7781_2_OFFSET UNITYSDK_OFFSET(0xDD7E410)
#define CLASS_1_ADBD657143C0767D_METHOD_1_9D967D80C41C7781_OFFSET UNITYSDK_OFFSET(0xDD7E370)
#define CLASS_1_ADBD657143C0767D_METHOD_1_AA1355730928EC40_OFFSET UNITYSDK_OFFSET(0xDD7E1A0)
#define CLASS_1_ADBD657143C0767D_METHOD_1_AAD21DE195D05736_1_OFFSET UNITYSDK_OFFSET(0xDD7D930)
#define CLASS_1_ADBD657143C0767D_METHOD_1_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0xDD7D2F0)
#define CLASS_1_ADBD657143C0767D_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xDD7E140)
#define CLASS_1_ADBD657143C0767D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDD7CD50)
#define CLASS_1_ADBD657143C0767D_METHOD_1_D20BF56E36607D54_1_OFFSET UNITYSDK_OFFSET(0xDD7CC80)
#define CLASS_1_ADBD657143C0767D_METHOD_1_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0xDD7CC30)
#define CLASS_1_ADBD657143C0767D_METHOD_1_F3044C7F0F775E6E_OFFSET UNITYSDK_OFFSET(0xDD7E070)
#define CLASS_1_ADBD657143C0767D_SET_CURSORPOS_OFFSET UNITYSDK_OFFSET(0xDD7DFE0)
#define CLASS_1_ADBD657143C0767D_SET_ISPRESSJOYSTICK_OFFSET UNITYSDK_OFFSET(0xDD7E000)
#define CLASS_1_ADBD657143C0767D_SET_JOYSTICKINPUT_OFFSET UNITYSDK_OFFSET(0xDD7E030)
#define CLASS_1_ADBD657143C0767D_SET_TOUCHINPUT_OFFSET UNITYSDK_OFFSET(0xDD7E060)
#define CLASS_1_ADBD657143C0767D__CTOR_OFFSET UNITYSDK_OFFSET(0xDD7E460)

inline static constexpr unsigned int Class_1_ADBD657143C0767D_TypeDefinitionIndex = 74019;

class Class_1_ADBD657143C0767D : public ::System::Object
{
public:
	::System::Boolean _IsPressJoyStick_k__BackingField; // 0x10
	::UnityEngine::Vector3 _TouchInput_k__BackingField; // 0x14
	::System::Single ALHEDEDHKNE; // 0x20
	::System::Single KIDFELNBJHD; // 0x24
	::System::Int32 GHEJJFBOICD; // 0x28
	::UnityEngine::Vector3 _CursorPos_k__BackingField; // 0x2C
	::UnityEngine::Vector3 _JoyStickInput_k__BackingField; // 0x38
	::HedgehogTeam::EasyTouch::EasyTouch_EvtType IANMNDGHPML; // 0x44
	::System::Int32 JIBJKHCJFBJ; // 0x48

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

	::System::Void Method_1_397374046D61F348(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_METHOD_1_397374046D61F348_OFFSET))(this, a1);
	}

	::System::Void Method_1_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_METHOD_1_289F28027FF47717_OFFSET))(this);
	}

	::System::Void Method_1_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_METHOD_1_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_1_277F0667818A8EA9(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_METHOD_1_277F0667818A8EA9_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_CursorPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_GET_CURSORPOS_OFFSET))(this);
	}

	::System::Void set_CursorPos(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_SET_CURSORPOS_OFFSET))(this, a1);
	}

	::RPG::Client::VirtualCursor* Method_1_1CE48CC9C88F5CA6()
	{
		return ((::RPG::Client::VirtualCursor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_METHOD_1_1CE48CC9C88F5CA6_OFFSET))(this);
	}

	::System::Boolean get_IsPressJoyStick()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_GET_ISPRESSJOYSTICK_OFFSET))(this);
	}

	::System::Void set_IsPressJoyStick(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_SET_ISPRESSJOYSTICK_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_JoyStickInput()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_GET_JOYSTICKINPUT_OFFSET))(this);
	}

	::System::Void set_JoyStickInput(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_SET_JOYSTICKINPUT_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_TouchInput()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_GET_TOUCHINPUT_OFFSET))(this);
	}

	::System::Void set_TouchInput(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_SET_TOUCHINPUT_OFFSET))(this, a1);
	}

	::System::Void Method_1_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_METHOD_1_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_F3044C7F0F775E6E(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_METHOD_1_F3044C7F0F775E6E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_METHOD_1_AAD21DE195D05736_OFFSET))(this);
	}

	::System::Void Method_1_AAD21DE195D05736_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADBD657143C0767D_METHOD_1_AAD21DE195D05736_1_OFFSET))(this);
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
