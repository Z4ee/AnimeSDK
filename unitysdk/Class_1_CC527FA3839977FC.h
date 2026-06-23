#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CC527FA3839977FC_Enum_3_064A83669955C80E.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityTimeSlow; }
namespace MoleMole::Config { class ConfigEntityTimeSlowBase; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_CC527FA3839977FC_METHOD_1_01BB874792A0671B_OFFSET UNITYSDK_OFFSET(0x1594E870)
#define CLASS_1_CC527FA3839977FC_METHOD_1_0889531C0753C80A_OFFSET UNITYSDK_OFFSET(0x1594EB40)
#define CLASS_1_CC527FA3839977FC_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1594ED70)
#define CLASS_1_CC527FA3839977FC_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1594E960)
#define CLASS_1_CC527FA3839977FC_METHOD_1_3540FABB09B5B124_OFFSET UNITYSDK_OFFSET(0x1594E920)
#define CLASS_1_CC527FA3839977FC_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1594F180)
#define CLASS_1_CC527FA3839977FC_METHOD_1_3AF186FD1A9E8454_OFFSET UNITYSDK_OFFSET(0x1594E9A0)
#define CLASS_1_CC527FA3839977FC_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x1594E9B0)
#define CLASS_1_CC527FA3839977FC_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1594E910)
#define CLASS_1_CC527FA3839977FC_METHOD_1_6E21175A57A8DF1F_OFFSET UNITYSDK_OFFSET(0x1594E8D0)
#define CLASS_1_CC527FA3839977FC_METHOD_1_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x1594F100)
#define CLASS_1_CC527FA3839977FC_METHOD_1_8577E9E40D76E9E4_OFFSET UNITYSDK_OFFSET(0x1594E9C0)
#define CLASS_1_CC527FA3839977FC_METHOD_1_992AB0196CF3F5D2_OFFSET UNITYSDK_OFFSET(0x1594EAF0)
#define CLASS_1_CC527FA3839977FC_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x1594F110)
#define CLASS_1_CC527FA3839977FC_METHOD_1_C07440C7C5F649E6_OFFSET UNITYSDK_OFFSET(0x1594EE50)
#define CLASS_1_CC527FA3839977FC_METHOD_1_E2CA4E972A34F880_OFFSET UNITYSDK_OFFSET(0x1594ED80)
#define CLASS_1_CC527FA3839977FC_METHOD_1_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x1594ED60)
#define CLASS_1_CC527FA3839977FC_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x1594E8C0)
#define CLASS_1_CC527FA3839977FC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1594E3B0)
#define CLASS_1_CC527FA3839977FC__CTOR_OFFSET UNITYSDK_OFFSET(0x1594E3A0)

inline static constexpr unsigned int Class_1_CC527FA3839977FC_TypeDefinitionIndex = 65487;

class Class_1_CC527FA3839977FC : public ::System::Object
{
public:
	// static const ::System::String* Field_1_14; // 0x0
	::UnityEngine::AnimationCurve* Field_1_12; // 0x10
	::System::String* Field_1_0; // 0x18
	::UnityEngine::AnimationCurve* Field_1_9; // 0x20
	::MoleMole::Config::ConfigEntityTimeSlowBase* Field_1_13; // 0x28
	::UnityEngine::AnimationCurve* Field_1_10; // 0x30
	::System::Func_2<::System::Single, ::System::Single>* Field_1_11; // 0x38
	::System::Boolean Field_1_15; // 0x40
	::Class_1_CC527FA3839977FC_Enum_3_064A83669955C80E Field_1_8; // 0x41
	::System::Boolean Field_1_6; // 0x42
	::System::Single Field_1_7; // 0x44
	::System::Single Field_1_5; // 0x48
	::System::Single Field_1_4; // 0x4C
	::System::Single Field_1_3; // 0x50
	::System::Single Field_1_16; // 0x54
	::System::Int32 Field_1_1; // 0x58
	::System::Single Field_1_2; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC527FA3839977FC__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC527FA3839977FC_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CC527FA3839977FC_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::Class_1_CC527FA3839977FC_Enum_3_064A83669955C80E Method_1_6E21175A57A8DF1F()
	{
		return ((::Class_1_CC527FA3839977FC_Enum_3_064A83669955C80E(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC527FA3839977FC_METHOD_1_6E21175A57A8DF1F_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC527FA3839977FC_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* Method_1_3540FABB09B5B124()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC527FA3839977FC_METHOD_1_3540FABB09B5B124_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC527FA3839977FC_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::MoleMole::Config::ConfigEntityTimeSlowBase* Method_1_3AF186FD1A9E8454()
	{
		return ((::MoleMole::Config::ConfigEntityTimeSlowBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC527FA3839977FC_METHOD_1_3AF186FD1A9E8454_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC527FA3839977FC_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Void Method_1_8577E9E40D76E9E4(::UnityEngine::AnimationCurve* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CC527FA3839977FC_METHOD_1_8577E9E40D76E9E4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_992AB0196CF3F5D2(::System::Func_2<::System::Single, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_CC527FA3839977FC_METHOD_1_992AB0196CF3F5D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_0889531C0753C80A(::System::String* a1, ::MoleMole::Config::ConfigEntityTimeSlowBase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityTimeSlowBase*))((::PBYTE)hIl2Cpp + CLASS_1_CC527FA3839977FC_METHOD_1_0889531C0753C80A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CC527FA3839977FC_METHOD_1_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC527FA3839977FC_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Single Method_1_E2CA4E972A34F880(::MoleMole::Config::ConfigEntityTimeSlow* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Config::ConfigEntityTimeSlow*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CC527FA3839977FC_METHOD_1_E2CA4E972A34F880_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_01BB874792A0671B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC527FA3839977FC_METHOD_1_01BB874792A0671B_OFFSET))(this);
	}

	::System::Void Method_1_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CC527FA3839977FC_METHOD_1_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC527FA3839977FC_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Single Method_1_C07440C7C5F649E6(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CC527FA3839977FC_METHOD_1_C07440C7C5F649E6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC527FA3839977FC_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
