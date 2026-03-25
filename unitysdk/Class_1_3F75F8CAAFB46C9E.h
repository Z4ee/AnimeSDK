#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_497;
namespace RPG::GameCore { class PamChatGreetingRow; }

#define CLASS_1_3F75F8CAAFB46C9E_COMPARETO_OFFSET UNITYSDK_OFFSET(0xA42D1F0)
#define CLASS_1_3F75F8CAAFB46C9E_GET_GREETINGID_OFFSET UNITYSDK_OFFSET(0xA42D510)
#define CLASS_1_3F75F8CAAFB46C9E_GET_HUDBUBBLE_OFFSET UNITYSDK_OFFSET(0xA42D520)
#define CLASS_1_3F75F8CAAFB46C9E_METHOD_1_33B01E44B9DD6F87_OFFSET UNITYSDK_OFFSET(0xA42D2E0)
#define CLASS_1_3F75F8CAAFB46C9E_METHOD_1_39A9FE040505BFA5_OFFSET UNITYSDK_OFFSET(0xA42D410)
#define CLASS_1_3F75F8CAAFB46C9E_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xA42D2A0)
#define CLASS_1_3F75F8CAAFB46C9E_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA42D260)
#define CLASS_1_3F75F8CAAFB46C9E__CTOR_OFFSET UNITYSDK_OFFSET(0xA42D160)

inline static constexpr unsigned int Class_1_3F75F8CAAFB46C9E_TypeDefinitionIndex = 51355;

class Class_1_3F75F8CAAFB46C9E : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* Field_1_3; // 0x10
	::Class_0_16E4307DCC419505_497* Field_1_2; // 0x18
	::System::UInt32 Field_1_4; // 0x20
	::RPG::Client::TextID _HudBubble_k__BackingField; // 0x28
	::System::Boolean Field_1_5; // 0x38
	::System::UInt32 _GreetingID_k__BackingField; // 0x3C

	::System::Void _ctor(::RPG::GameCore::PamChatGreetingRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PamChatGreetingRow*))((::PBYTE)hIl2Cpp + CLASS_1_3F75F8CAAFB46C9E__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 CompareTo(::Class_1_3F75F8CAAFB46C9E* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_3F75F8CAAFB46C9E*))((::PBYTE)hIl2Cpp + CLASS_1_3F75F8CAAFB46C9E_COMPARETO_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F75F8CAAFB46C9E_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F75F8CAAFB46C9E_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_1_33B01E44B9DD6F87()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F75F8CAAFB46C9E_METHOD_1_33B01E44B9DD6F87_OFFSET))(this);
	}

	::System::Boolean Method_1_39A9FE040505BFA5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F75F8CAAFB46C9E_METHOD_1_39A9FE040505BFA5_OFFSET))(this);
	}

	::System::UInt32 get_GreetingID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F75F8CAAFB46C9E_GET_GREETINGID_OFFSET))(this);
	}

	::RPG::Client::TextID get_HudBubble()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F75F8CAAFB46C9E_GET_HUDBUBBLE_OFFSET))(this);
	}
};
