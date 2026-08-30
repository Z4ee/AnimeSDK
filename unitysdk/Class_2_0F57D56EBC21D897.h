#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_0_16E4307DCC419505_562;
namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_0F57D56EBC21D897_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xBA92B40)
#define CLASS_2_0F57D56EBC21D897_METHOD_2_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0xBA92BA0)
#define CLASS_2_0F57D56EBC21D897_METHOD_2_D429B3A47EE61AE8_OFFSET UNITYSDK_OFFSET(0xBA92750)
#define CLASS_2_0F57D56EBC21D897__CTOR_OFFSET UNITYSDK_OFFSET(0xBA92BE0)
#define CLASS_2_0F57D56EBC21D897__ONBIND_OFFSET UNITYSDK_OFFSET(0xBA926B0)
#define CLASS_2_0F57D56EBC21D897__SETUPVIEW_B__4_0_OFFSET UNITYSDK_OFFSET(0xBA92C10)

inline static constexpr unsigned int Class_2_0F57D56EBC21D897_TypeDefinitionIndex = 71324;

class Class_2_0F57D56EBC21D897 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* PKGOOJBGLEG; // 0x0
	// static const ::System::String* KBDENNHLLOC; // 0x0
	::UnityEngine::UI::Image* LPMHMLOGPPN; // 0x60
	::UnityEngine::Animation* KCOAILOHDND; // 0x68
	::RPG::Client::RPGAnimationEvent* LHMIOEDNCAJ; // 0x70
	::System::UInt32 CHDGJKAEJOF; // 0x78
	::System::Boolean EMHAACACFOM; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F57D56EBC21D897__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F57D56EBC21D897__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_D429B3A47EE61AE8(::Class_0_16E4307DCC419505_562* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_562*))((::PBYTE)hIl2Cpp + CLASS_2_0F57D56EBC21D897_METHOD_2_D429B3A47EE61AE8_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F57D56EBC21D897_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::UInt32 Method_2_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F57D56EBC21D897_METHOD_2_5CEC4607322705E5_OFFSET))(this);
	}

	::System::Void _SetupView_b__4_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F57D56EBC21D897__SETUPVIEW_B__4_0_OFFSET))(this);
	}
};
