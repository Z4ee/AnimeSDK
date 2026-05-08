#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMultiplayerUI; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_FED1762D20687731_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x178ECE10)
#define CLASS_1_FED1762D20687731_METHOD_1_9F84584EBD4ED914_OFFSET UNITYSDK_OFFSET(0x178ED020)
#define CLASS_1_FED1762D20687731_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x178ECD20)

inline static constexpr unsigned int Class_1_FED1762D20687731_TypeDefinitionIndex = 61831;

class Class_1_FED1762D20687731 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigMultiplayerUI** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigMultiplayerUI**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FED1762D20687731_TypeDefinitionIndex)->GetStaticField(0x33130);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FED1762D20687731_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ConfigMultiplayerUI* Method_1_9F84584EBD4ED914()
	{
		return ((::MoleMole::Config::ConfigMultiplayerUI*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FED1762D20687731_METHOD_1_9F84584EBD4ED914_OFFSET))();
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_FED1762D20687731_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}
};
