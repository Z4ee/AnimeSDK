#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigBubbleGroup; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_596DBF42B631FCA3_METHOD_1_088BD8CA5A9677BC_OFFSET UNITYSDK_OFFSET(0x10D35160)
#define CLASS_1_596DBF42B631FCA3_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x10D352A0)
#define CLASS_1_596DBF42B631FCA3_METHOD_1_502A81344CAEE4A4_OFFSET UNITYSDK_OFFSET(0x10D351B0)

inline static constexpr unsigned int Class_1_596DBF42B631FCA3_TypeDefinitionIndex = 88513;

class Class_1_596DBF42B631FCA3 : public ::System::Object
{
public:
	static ::MoleMole::ConfigBubbleGroup** StaticGet_Field_1_0()
	{
		return (::MoleMole::ConfigBubbleGroup**)Il2CppClass::FromTypeDefinitionIndex(Class_1_596DBF42B631FCA3_TypeDefinitionIndex)->GetStaticField(0x30BF0);
	}

	static ::MoleMole::ConfigBubbleGroup* Method_1_088BD8CA5A9677BC()
	{
		return ((::MoleMole::ConfigBubbleGroup*(*)())((::PBYTE)hIl2Cpp + CLASS_1_596DBF42B631FCA3_METHOD_1_088BD8CA5A9677BC_OFFSET))();
	}

	static ::System::Void Method_1_502A81344CAEE4A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_596DBF42B631FCA3_METHOD_1_502A81344CAEE4A4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_596DBF42B631FCA3_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}
};
