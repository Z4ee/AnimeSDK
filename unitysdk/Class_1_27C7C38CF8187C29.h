#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Code::Logic::Data::ScriptObject::Level { class BeatMap; }
namespace Code::Logic::Data::ScriptObject::Level { class Pattern; }
namespace Code::Logic::Data::ScriptObject::Level { class SummerEventMonsterSpawnConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_27C7C38CF8187C29_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x15624C70)
#define CLASS_1_27C7C38CF8187C29_METHOD_1_502A81344CAEE4A4_OFFSET UNITYSDK_OFFSET(0x15625150)
#define CLASS_1_27C7C38CF8187C29_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x15624C20)
#define CLASS_1_27C7C38CF8187C29_METHOD_1_62F506F0A27EC2B6_OFFSET UNITYSDK_OFFSET(0x15624EA0)
#define CLASS_1_27C7C38CF8187C29_METHOD_1_7507179E2EA4538A_OFFSET UNITYSDK_OFFSET(0x15625240)
#define CLASS_1_27C7C38CF8187C29_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x15625100)

inline static constexpr unsigned int Class_1_27C7C38CF8187C29_TypeDefinitionIndex = 70432;

class Class_1_27C7C38CF8187C29 : public ::System::Object
{
public:
	static ::Code::Logic::Data::ScriptObject::Level::SummerEventMonsterSpawnConfig** StaticGet_Field_1_1()
	{
		return (::Code::Logic::Data::ScriptObject::Level::SummerEventMonsterSpawnConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_27C7C38CF8187C29_TypeDefinitionIndex)->GetStaticField(0x39000);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_27C7C38CF8187C29_TypeDefinitionIndex)->GetStaticField(0xD770);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_27C7C38CF8187C29_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_27C7C38CF8187C29_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_62F506F0A27EC2B6(::System::String* a1, ::Code::Logic::Data::ScriptObject::Level::BeatMap*& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::Code::Logic::Data::ScriptObject::Level::BeatMap*&))((::PBYTE)hIl2Cpp + CLASS_1_27C7C38CF8187C29_METHOD_1_62F506F0A27EC2B6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_502A81344CAEE4A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_27C7C38CF8187C29_METHOD_1_502A81344CAEE4A4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_27C7C38CF8187C29_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Boolean Method_1_7507179E2EA4538A(::System::String* a1, ::Code::Logic::Data::ScriptObject::Level::Pattern*& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::Code::Logic::Data::ScriptObject::Level::Pattern*&))((::PBYTE)hIl2Cpp + CLASS_1_27C7C38CF8187C29_METHOD_1_7507179E2EA4538A_OFFSET))(a1, a2);
	}
};
