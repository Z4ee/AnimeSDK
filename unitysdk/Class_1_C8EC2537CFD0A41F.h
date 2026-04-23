#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_8D88B5114427A0B2;
namespace RPG::GameCore { class PamChatGreetingRow; }

#define CLASS_1_C8EC2537CFD0A41F_COMPARETO_OFFSET UNITYSDK_OFFSET(0x129FC990)
#define CLASS_1_C8EC2537CFD0A41F_GET_GREETINGID_OFFSET UNITYSDK_OFFSET(0x129FCCC0)
#define CLASS_1_C8EC2537CFD0A41F_GET_HUDBUBBLE_OFFSET UNITYSDK_OFFSET(0x129FCCD0)
#define CLASS_1_C8EC2537CFD0A41F_METHOD_1_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0x129FCA80)
#define CLASS_1_C8EC2537CFD0A41F_METHOD_1_96980C17A8BB1F06_OFFSET UNITYSDK_OFFSET(0x129FCC70)
#define CLASS_1_C8EC2537CFD0A41F_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x129FCC00)
#define CLASS_1_C8EC2537CFD0A41F_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x129FCA40)
#define CLASS_1_C8EC2537CFD0A41F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x129FCA00)
#define CLASS_1_C8EC2537CFD0A41F_METHOD_1_D7B7C909A67BD350_OFFSET UNITYSDK_OFFSET(0x129FCB30)
#define CLASS_1_C8EC2537CFD0A41F__CTOR_OFFSET UNITYSDK_OFFSET(0x129FC900)

inline static constexpr unsigned int Class_1_C8EC2537CFD0A41F_TypeDefinitionIndex = 58290;

class Class_1_C8EC2537CFD0A41F : public ::System::Object
{
public:
	::Class_1_8D88B5114427A0B2* Field_1_2; // 0x10
	::Il2CppArray<::System::UInt32>* Field_1_3; // 0x18
	::RPG::Client::TextID _HudBubble_k__BackingField; // 0x20
	::System::UInt32 _GreetingID_k__BackingField; // 0x30
	::System::UInt32 Field_1_4; // 0x34
	::System::Boolean Field_1_5; // 0x38
	::System::Boolean Field_1_6; // 0x39

	::System::Void _ctor(::RPG::GameCore::PamChatGreetingRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PamChatGreetingRow*))((::PBYTE)hIl2Cpp + CLASS_1_C8EC2537CFD0A41F__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 CompareTo(::Class_1_C8EC2537CFD0A41F* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_C8EC2537CFD0A41F*))((::PBYTE)hIl2Cpp + CLASS_1_C8EC2537CFD0A41F_COMPARETO_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8EC2537CFD0A41F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8EC2537CFD0A41F_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_1_0DF420E95D6252BE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8EC2537CFD0A41F_METHOD_1_0DF420E95D6252BE_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8EC2537CFD0A41F_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_1_96980C17A8BB1F06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8EC2537CFD0A41F_METHOD_1_96980C17A8BB1F06_OFFSET))(this);
	}

	::System::Boolean Method_1_D7B7C909A67BD350()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8EC2537CFD0A41F_METHOD_1_D7B7C909A67BD350_OFFSET))(this);
	}

	::System::UInt32 get_GreetingID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8EC2537CFD0A41F_GET_GREETINGID_OFFSET))(this);
	}

	::RPG::Client::TextID get_HudBubble()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8EC2537CFD0A41F_GET_HUDBUBBLE_OFFSET))(this);
	}
};
