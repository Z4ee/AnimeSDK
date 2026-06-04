#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_0_16E4307DCC419505_501;
namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_0F57D56EBC21D897_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA78AFE0)
#define CLASS_2_0F57D56EBC21D897_METHOD_2_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0xA78B040)
#define CLASS_2_0F57D56EBC21D897_METHOD_2_D429B3A47EE61AE8_OFFSET UNITYSDK_OFFSET(0xA78ACA0)
#define CLASS_2_0F57D56EBC21D897__CTOR_OFFSET UNITYSDK_OFFSET(0xA78B080)
#define CLASS_2_0F57D56EBC21D897__ONBIND_OFFSET UNITYSDK_OFFSET(0xA78AC00)
#define CLASS_2_0F57D56EBC21D897__SETUPVIEW_B__4_0_OFFSET UNITYSDK_OFFSET(0xA78B0B0)
#define CLASS_2_0F57D56EBC21D897___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xA78B0C0)

inline static constexpr unsigned int Class_2_0F57D56EBC21D897_TypeDefinitionIndex = 66708;

class Class_2_0F57D56EBC21D897 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::UnityEngine::UI::Image* Field_2_2; // 0x60
	::RPG::Client::RPGAnimationEvent* Field_2_3; // 0x68
	::UnityEngine::Animation* Field_2_4; // 0x70
	::System::Boolean Field_2_5; // 0x78
	::System::UInt32 Field_2_6; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F57D56EBC21D897__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F57D56EBC21D897__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_D429B3A47EE61AE8(::Class_0_16E4307DCC419505_501* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_501*))((::PBYTE)hIl2Cpp + CLASS_2_0F57D56EBC21D897_METHOD_2_D429B3A47EE61AE8_OFFSET))(this, a1);
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

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F57D56EBC21D897___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
