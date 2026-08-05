#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigZipLine; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_2B2CF705BA7D8E61_METHOD_1_086855FE3AC6FB6C_OFFSET UNITYSDK_OFFSET(0x145F54C0)
#define CLASS_1_2B2CF705BA7D8E61_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x145F5600)
#define CLASS_1_2B2CF705BA7D8E61_METHOD_1_502A81344CAEE4A4_OFFSET UNITYSDK_OFFSET(0x145F5510)

inline static constexpr unsigned int Class_1_2B2CF705BA7D8E61_TypeDefinitionIndex = 84428;

class Class_1_2B2CF705BA7D8E61 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigZipLine** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigZipLine**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B2CF705BA7D8E61_TypeDefinitionIndex)->GetStaticField(0x394E0);
	}

	static ::MoleMole::Config::ConfigZipLine* Method_1_086855FE3AC6FB6C()
	{
		return ((::MoleMole::Config::ConfigZipLine*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B2CF705BA7D8E61_METHOD_1_086855FE3AC6FB6C_OFFSET))();
	}

	static ::System::Void Method_1_502A81344CAEE4A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B2CF705BA7D8E61_METHOD_1_502A81344CAEE4A4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B2CF705BA7D8E61_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}
};
