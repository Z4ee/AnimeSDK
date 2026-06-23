#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_230D8C57C4E2F415;
namespace MoleMole::Config { class ConfigTriggerCache; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7A6E8680968BC407_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0xE82BEC0)
#define CLASS_1_7A6E8680968BC407_METHOD_1_A2C01E7AFFF0F969_OFFSET UNITYSDK_OFFSET(0xE82BB70)
#define CLASS_1_7A6E8680968BC407_METHOD_1_E0990BFB432B1B69_OFFSET UNITYSDK_OFFSET(0xE82C210)
#define CLASS_1_7A6E8680968BC407_METHOD_1_FDDC5A41F149A0CC_OFFSET UNITYSDK_OFFSET(0xE82C0E0)

inline static constexpr unsigned int Class_1_7A6E8680968BC407_TypeDefinitionIndex = 74498;

class Class_1_7A6E8680968BC407 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::MoleMole::Config::ConfigTriggerCache*>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::MoleMole::Config::ConfigTriggerCache*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A6E8680968BC407_TypeDefinitionIndex)->GetStaticField(0x36A30);
	}

	static ::System::Void Method_1_A2C01E7AFFF0F969(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_230D8C57C4E2F415*>*>*& a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_230D8C57C4E2F415*>*>*&))((::PBYTE)hIl2Cpp + CLASS_1_7A6E8680968BC407_METHOD_1_A2C01E7AFFF0F969_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_7A6E8680968BC407_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FDDC5A41F149A0CC(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7A6E8680968BC407_METHOD_1_FDDC5A41F149A0CC_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_E0990BFB432B1B69(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_7A6E8680968BC407_METHOD_1_E0990BFB432B1B69_OFFSET))(a1, a2);
	}
};
