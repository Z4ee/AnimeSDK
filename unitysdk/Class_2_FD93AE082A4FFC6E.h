#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/BattleScreenEffectType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_C4C2ACF3D9655BEA_28;
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Slider; }

#define CLASS_2_FD93AE082A4FFC6E_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x179AAD40)
#define CLASS_2_FD93AE082A4FFC6E_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x179AAE30)
#define CLASS_2_FD93AE082A4FFC6E_METHOD_2_7A73F165001BC325_OFFSET UNITYSDK_OFFSET(0x179AA4B0)
#define CLASS_2_FD93AE082A4FFC6E_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x179AA390)
#define CLASS_2_FD93AE082A4FFC6E_METHOD_2_B5CADED4AFE2B258_OFFSET UNITYSDK_OFFSET(0x179AA700)
#define CLASS_2_FD93AE082A4FFC6E_METHOD_2_BAE66D5654320160_OFFSET UNITYSDK_OFFSET(0x179AAA80)
#define CLASS_2_FD93AE082A4FFC6E_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x179AA300)
#define CLASS_2_FD93AE082A4FFC6E_METHOD_2_C02357FE432192E0_1_OFFSET UNITYSDK_OFFSET(0x179AAB50)
#define CLASS_2_FD93AE082A4FFC6E_METHOD_2_C02357FE432192E0_OFFSET UNITYSDK_OFFSET(0x179AAAE0)
#define CLASS_2_FD93AE082A4FFC6E_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x179AAC20)
#define CLASS_2_FD93AE082A4FFC6E_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x179AA8B0)
#define CLASS_2_FD93AE082A4FFC6E_METHOD_2_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0x179AABC0)
#define CLASS_2_FD93AE082A4FFC6E__CTOR_OFFSET UNITYSDK_OFFSET(0x179AAF00)
#define CLASS_2_FD93AE082A4FFC6E__ONBIND_OFFSET UNITYSDK_OFFSET(0x179AA0F0)
#define CLASS_2_FD93AE082A4FFC6E__ONTICK_OFFSET UNITYSDK_OFFSET(0x179AA850)

inline static constexpr unsigned int Class_2_FD93AE082A4FFC6E_TypeDefinitionIndex = 72128;

class Class_2_FD93AE082A4FFC6E : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::Single CDJPLPEEKND; // 0x0
	// static const ::System::Single HGBCBJKAAMM; // 0x0
	// static const ::System::String* OHPLFOMPJIP; // 0x0
	::UnityEngine::Transform* FPBNLODJEHI; // 0x60
	::UnityEngine::UI::Slider* EAHOJOHDFEF; // 0x68
	::UnityEngine::Animation* OAEEBCCHOMM; // 0x70
	::UnityEngine::Transform* FHFPJAMHMPE; // 0x78
	::UnityEngine::Animation* LJKNBBIGPNL; // 0x80
	::UnityEngine::Transform* MCFJNFDKCBO; // 0x88
	::UnityEngine::UI::Slider* IJJHGHGDILF; // 0x90
	::UnityEngine::UI::Slider* HIFIEOGNGLG; // 0x98
	::UnityEngine::Animation* APDHFBFEPOI; // 0xA0
	::System::Single CLEBBBABPEI; // 0xA8
	::System::Single BFKCADADNCA; // 0xAC
	::RPG::GameCore::BattleScreenEffectType MGFNJPADMPO; // 0xB0
	::System::Single FAFIAGJFGEF; // 0xB4
	::System::Boolean HNALEMBOBFE; // 0xB8
	::System::Boolean HAFCOEMEHNH; // 0xB9

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

	::System::Void Method_2_BAE66D5654320160(::Class_1_C4C2ACF3D9655BEA_28* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C4C2ACF3D9655BEA_28*))((::PBYTE)hIl2Cpp + CLASS_2_FD93AE082A4FFC6E_METHOD_2_BAE66D5654320160_OFFSET))(this, a1);
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
