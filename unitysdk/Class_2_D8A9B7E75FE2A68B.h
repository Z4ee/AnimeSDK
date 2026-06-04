#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_5C95470995792B5E_Struct_2_6A43528D46EC4127.h"

class Class_2_D45121C6B830B822;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_D8A9B7E75FE2A68B_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1370D350)
#define CLASS_2_D8A9B7E75FE2A68B_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1370D440)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x1370BEC0)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_01509228E3A9577B_OFFSET UNITYSDK_OFFSET(0x1370D250)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_11AA304FD084CE18_OFFSET UNITYSDK_OFFSET(0x1370CB90)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1370BD50)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_42ABC95DF9B1DD49_OFFSET UNITYSDK_OFFSET(0x1370C350)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x1370C080)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x1370D790)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x1370D7F0)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1370D730)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1370C550)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_A20AE65185C94696_OFFSET UNITYSDK_OFFSET(0x1370C2F0)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x1370D190)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_E07ADB0D66C09B7A_OFFSET UNITYSDK_OFFSET(0x1370CA10)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_E83D3547A9015657_OFFSET UNITYSDK_OFFSET(0x1370C630)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x1370C980)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_FCB175EE4400634C_OFFSET UNITYSDK_OFFSET(0x1370CFE0)
#define CLASS_2_D8A9B7E75FE2A68B__CTOR_OFFSET UNITYSDK_OFFSET(0x1370D510)
#define CLASS_2_D8A9B7E75FE2A68B__ONBIND_OFFSET UNITYSDK_OFFSET(0x1370BC40)
#define CLASS_2_D8A9B7E75FE2A68B__ONTICK_OFFSET UNITYSDK_OFFSET(0x1370C5D0)
#define CLASS_2_D8A9B7E75FE2A68B___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1370D8B0)
#define CLASS_2_D8A9B7E75FE2A68B___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1370D910)
#define CLASS_2_D8A9B7E75FE2A68B___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x1370D6D0)
#define CLASS_2_D8A9B7E75FE2A68B___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x1370D850)

inline static constexpr unsigned int Class_2_D8A9B7E75FE2A68B_TypeDefinitionIndex = 66715;

class Class_2_D8A9B7E75FE2A68B : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::UI::Text* Field_2_1; // 0x60
	::RPG::GameCore::LevelUIComponent* Field_2_2; // 0x68
	::UnityEngine::UI::Button* Field_2_3; // 0x70
	::UnityEngine::UI::Button* Field_2_4; // 0x78
	::RPG::Client::PrefabLoadMeta* Field_2_5; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_2_6; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_D45121C6B830B822*>* Field_2_7; // 0x90
	::UnityEngine::Animator* Field_2_8; // 0x98
	::System::Int32 Field_2_9; // 0xA0
	::System::UInt32 Field_2_10; // 0xA4
	::System::Int32 Field_2_11; // 0xA8
	::System::Int32 Field_2_12; // 0xAC
	::System::UInt32 Field_2_13; // 0xB0
	::System::UInt32 Field_2_14; // 0xB4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_42ABC95DF9B1DD49(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_42ABC95DF9B1DD49_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_E07ADB0D66C09B7A(::Class_2_5C95470995792B5E_Struct_2_6A43528D46EC4127 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5C95470995792B5E_Struct_2_6A43528D46EC4127))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_E07ADB0D66C09B7A_OFFSET))(this, a1);
	}

	::System::Void Method_2_A20AE65185C94696(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_A20AE65185C94696_OFFSET))(this, a1);
	}

	::System::Void Method_2_11AA304FD084CE18(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_11AA304FD084CE18_OFFSET))(this, a1);
	}

	::System::Void Method_2_E83D3547A9015657()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_E83D3547A9015657_OFFSET))(this);
	}

	::System::Void Method_2_FCB175EE4400634C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_FCB175EE4400634C_OFFSET))(this);
	}

	::System::Void Method_2_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_01509228E3A9577B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_01509228E3A9577B_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
