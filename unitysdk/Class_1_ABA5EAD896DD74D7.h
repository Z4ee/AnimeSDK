#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUICamera; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_ABA5EAD896DD74D7_METHOD_1_3250FF38E5FBB660_OFFSET UNITYSDK_OFFSET(0x14A95520)
#define CLASS_1_ABA5EAD896DD74D7_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x14A95660)
#define CLASS_1_ABA5EAD896DD74D7_METHOD_1_502A81344CAEE4A4_OFFSET UNITYSDK_OFFSET(0x14A95570)

inline static constexpr unsigned int Class_1_ABA5EAD896DD74D7_TypeDefinitionIndex = 77194;

class Class_1_ABA5EAD896DD74D7 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigUICamera** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigUICamera**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ABA5EAD896DD74D7_TypeDefinitionIndex)->GetStaticField(0x425D0);
	}

	static ::MoleMole::Config::ConfigUICamera* Method_1_3250FF38E5FBB660()
	{
		return ((::MoleMole::Config::ConfigUICamera*(*)())((::PBYTE)hIl2Cpp + CLASS_1_ABA5EAD896DD74D7_METHOD_1_3250FF38E5FBB660_OFFSET))();
	}

	static ::System::Void Method_1_502A81344CAEE4A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_ABA5EAD896DD74D7_METHOD_1_502A81344CAEE4A4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_ABA5EAD896DD74D7_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}
};
