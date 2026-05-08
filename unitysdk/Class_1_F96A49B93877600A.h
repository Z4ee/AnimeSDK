#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGroupVideo; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_F96A49B93877600A_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x100C3CF0)
#define CLASS_1_F96A49B93877600A_METHOD_1_502A81344CAEE4A4_OFFSET UNITYSDK_OFFSET(0x100C3F10)
#define CLASS_1_F96A49B93877600A_METHOD_1_EBCAA5A5E837E739_OFFSET UNITYSDK_OFFSET(0x100C4000)

inline static constexpr unsigned int Class_1_F96A49B93877600A_TypeDefinitionIndex = 72153;

class Class_1_F96A49B93877600A : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigGroupVideo** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigGroupVideo**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F96A49B93877600A_TypeDefinitionIndex)->GetStaticField(0x3D9E0);
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F96A49B93877600A_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_502A81344CAEE4A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F96A49B93877600A_METHOD_1_502A81344CAEE4A4_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ConfigGroupVideo* Method_1_EBCAA5A5E837E739()
	{
		return ((::MoleMole::Config::ConfigGroupVideo*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F96A49B93877600A_METHOD_1_EBCAA5A5E837E739_OFFSET))();
	}
};
