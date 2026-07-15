#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/BattleScreenEffectType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_C4C2ACF3D9655BEA_27;
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Slider; }

#define CLASS_2_FD93AE082A4FFC6E_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x17042FA0)
#define CLASS_2_FD93AE082A4FFC6E_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x17043090)
#define CLASS_2_FD93AE082A4FFC6E_METHOD_2_7A73F165001BC325_OFFSET UNITYSDK_OFFSET(0x17042720)
#define CLASS_2_FD93AE082A4FFC6E_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x17042600)
#define CLASS_2_FD93AE082A4FFC6E_METHOD_2_B5CADED4AFE2B258_OFFSET UNITYSDK_OFFSET(0x17042960)
#define CLASS_2_FD93AE082A4FFC6E_METHOD_2_BAE66D5654320160_OFFSET UNITYSDK_OFFSET(0x17042CE0)
#define CLASS_2_FD93AE082A4FFC6E_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x17042570)
#define CLASS_2_FD93AE082A4FFC6E_METHOD_2_C02357FE432192E0_1_OFFSET UNITYSDK_OFFSET(0x17042DB0)
#define CLASS_2_FD93AE082A4FFC6E_METHOD_2_C02357FE432192E0_OFFSET UNITYSDK_OFFSET(0x17042D40)
#define CLASS_2_FD93AE082A4FFC6E_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x17042E80)
#define CLASS_2_FD93AE082A4FFC6E_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x17042B10)
#define CLASS_2_FD93AE082A4FFC6E_METHOD_2_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0x17042E20)
#define CLASS_2_FD93AE082A4FFC6E__CTOR_OFFSET UNITYSDK_OFFSET(0x17043160)
#define CLASS_2_FD93AE082A4FFC6E__ONBIND_OFFSET UNITYSDK_OFFSET(0x17042360)
#define CLASS_2_FD93AE082A4FFC6E__ONTICK_OFFSET UNITYSDK_OFFSET(0x17042AB0)

inline static constexpr unsigned int Class_2_FD93AE082A4FFC6E_TypeDefinitionIndex = 68929;

class Class_2_FD93AE082A4FFC6E : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::Single Field_2_1; // 0x0
	// static const ::System::Single Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	::UnityEngine::Transform* Field_2_4; // 0x60
	::UnityEngine::UI::Slider* Field_2_5; // 0x68
	::UnityEngine::Transform* Field_2_6; // 0x70
	::UnityEngine::Animation* Field_2_7; // 0x78
	::UnityEngine::Animation* Field_2_8; // 0x80
	::UnityEngine::Animation* Field_2_9; // 0x88
	::UnityEngine::UI::Slider* Field_2_10; // 0x90
	::UnityEngine::Transform* Field_2_11; // 0x98
	::UnityEngine::UI::Slider* Field_2_12; // 0xA0
	::System::Boolean Field_2_13; // 0xA8
	::System::Boolean Field_2_14; // 0xA9
	::System::Single Field_2_15; // 0xAC
	::RPG::GameCore::BattleScreenEffectType Field_2_16; // 0xB0
	::System::Single Field_2_17; // 0xB4
	::System::Single Field_2_18; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD93AE082A4FFC6E__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD93AE082A4FFC6E__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_FD93AE082A4FFC6E_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD93AE082A4FFC6E_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_7A73F165001BC325()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD93AE082A4FFC6E_METHOD_2_7A73F165001BC325_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FD93AE082A4FFC6E__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_BAE66D5654320160(::Class_1_C4C2ACF3D9655BEA_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C4C2ACF3D9655BEA_27*))((::PBYTE)hIl2Cpp + CLASS_2_FD93AE082A4FFC6E_METHOD_2_BAE66D5654320160_OFFSET))(this, a1);
	}

	::System::Void Method_2_C02357FE432192E0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FD93AE082A4FFC6E_METHOD_2_C02357FE432192E0_OFFSET))(this, a1);
	}

	::System::Void Method_2_C02357FE432192E0_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FD93AE082A4FFC6E_METHOD_2_C02357FE432192E0_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F07808AF19FA033A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD93AE082A4FFC6E_METHOD_2_F07808AF19FA033A_OFFSET))(this, a1);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD93AE082A4FFC6E_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_2_B5CADED4AFE2B258(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FD93AE082A4FFC6E_METHOD_2_B5CADED4AFE2B258_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FD93AE082A4FFC6E_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD93AE082A4FFC6E_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD93AE082A4FFC6E_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
