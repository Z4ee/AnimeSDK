#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AdventurePhaseInitParams; }
namespace RPG::Client { class BattleGamePhase; }
namespace RPG::Client { class IGamePhase; }
namespace RPG::Client { template <typename T> class FlagSwitch_1; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_6C0D8C77676A5135_METHOD_1_3B802A2568784303_OFFSET UNITYSDK_OFFSET(0x18376360)
#define CLASS_1_6C0D8C77676A5135_METHOD_1_3E522F4B992303E1_OFFSET UNITYSDK_OFFSET(0x18375E10)
#define CLASS_1_6C0D8C77676A5135_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x18374F40)
#define CLASS_1_6C0D8C77676A5135_METHOD_1_585E2EA201FDE7ED_OFFSET UNITYSDK_OFFSET(0x18375FA0)
#define CLASS_1_6C0D8C77676A5135_METHOD_1_94C63125CCCCB1E7_OFFSET UNITYSDK_OFFSET(0x18375CE0)
#define CLASS_1_6C0D8C77676A5135_METHOD_1_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x18375210)
#define CLASS_1_6C0D8C77676A5135_METHOD_1_BCD04FAF06FA4406_OFFSET UNITYSDK_OFFSET(0x18375F60)
#define CLASS_1_6C0D8C77676A5135_METHOD_1_C9E016FC16497E7E_OFFSET UNITYSDK_OFFSET(0x18375330)
#define CLASS_1_6C0D8C77676A5135_METHOD_1_EF658AEEBB9A1A89_OFFSET UNITYSDK_OFFSET(0x18375D70)

inline static constexpr unsigned int Class_1_6C0D8C77676A5135_TypeDefinitionIndex = 58435;

class Class_1_6C0D8C77676A5135 : public ::System::Object
{
public:
	static ::RPG::Client::FlagSwitch_1<::System::String*>** StaticGet_Field_1_0()
	{
		return (::RPG::Client::FlagSwitch_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6C0D8C77676A5135_TypeDefinitionIndex)->GetStaticField(0x68A80);
	}
	static ::System::Action** StaticGet_Field_1_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6C0D8C77676A5135_TypeDefinitionIndex)->GetStaticField(0x68A88);
	}
	static ::RPG::Client::AdventurePhaseInitParams** StaticGet_Field_1_2()
	{
		return (::RPG::Client::AdventurePhaseInitParams**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6C0D8C77676A5135_TypeDefinitionIndex)->GetStaticField(0x68A90);
	}

	static ::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6C0D8C77676A5135_METHOD_1_4307B2A4B4A12C1A_OFFSET))();
	}

	static ::System::Void Method_1_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6C0D8C77676A5135_METHOD_1_9DE87B16AD0A605E_OFFSET))();
	}

	static ::System::Void Method_1_C9E016FC16497E7E(::RPG::Client::BattleGamePhase* a1)
	{
		return ((::System::Void(*)(::RPG::Client::BattleGamePhase*))((::PBYTE)hIl2Cpp + CLASS_1_6C0D8C77676A5135_METHOD_1_C9E016FC16497E7E_OFFSET))(a1);
	}

	static ::System::Void Method_1_94C63125CCCCB1E7(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6C0D8C77676A5135_METHOD_1_94C63125CCCCB1E7_OFFSET))(a1);
	}

	static ::System::Void Method_1_EF658AEEBB9A1A89(::System::Object* a1)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6C0D8C77676A5135_METHOD_1_EF658AEEBB9A1A89_OFFSET))(a1);
	}

	static ::System::Void Method_1_3E522F4B992303E1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6C0D8C77676A5135_METHOD_1_3E522F4B992303E1_OFFSET))();
	}

	static ::System::Void Method_1_BCD04FAF06FA4406(::System::Object* a1)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6C0D8C77676A5135_METHOD_1_BCD04FAF06FA4406_OFFSET))(a1);
	}

	static ::System::Void Method_1_585E2EA201FDE7ED()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6C0D8C77676A5135_METHOD_1_585E2EA201FDE7ED_OFFSET))();
	}

	static ::System::Void Method_1_3B802A2568784303(::System::String* a1, ::RPG::Client::IGamePhase* a2)
	{
		return ((::System::Void(*)(::System::String*, ::RPG::Client::IGamePhase*))((::PBYTE)hIl2Cpp + CLASS_1_6C0D8C77676A5135_METHOD_1_3B802A2568784303_OFFSET))(a1, a2);
	}
};
