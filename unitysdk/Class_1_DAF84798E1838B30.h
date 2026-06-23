#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigZipLineSubSystem; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_DAF84798E1838B30_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x19EA00A0)
#define CLASS_1_DAF84798E1838B30_METHOD_1_502A81344CAEE4A4_OFFSET UNITYSDK_OFFSET(0x19E9FFB0)
#define CLASS_1_DAF84798E1838B30_METHOD_1_CF7440F054C64F93_OFFSET UNITYSDK_OFFSET(0x19E9FF60)

inline static constexpr unsigned int Class_1_DAF84798E1838B30_TypeDefinitionIndex = 73838;

class Class_1_DAF84798E1838B30 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigZipLineSubSystem** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigZipLineSubSystem**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DAF84798E1838B30_TypeDefinitionIndex)->GetStaticField(0x366A0);
	}

	static ::MoleMole::Config::ConfigZipLineSubSystem* Method_1_CF7440F054C64F93()
	{
		return ((::MoleMole::Config::ConfigZipLineSubSystem*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DAF84798E1838B30_METHOD_1_CF7440F054C64F93_OFFSET))();
	}

	static ::System::Void Method_1_502A81344CAEE4A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DAF84798E1838B30_METHOD_1_502A81344CAEE4A4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DAF84798E1838B30_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}
};
