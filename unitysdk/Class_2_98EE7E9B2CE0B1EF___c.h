#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWindowController; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_98EE7E9B2CE0B1EF___C_METHOD_1_473937A760ED8DEF_OFFSET UNITYSDK_OFFSET(0x160BFD50)
#define CLASS_2_98EE7E9B2CE0B1EF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x160BFD00)
#define CLASS_2_98EE7E9B2CE0B1EF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x160BFD40)

inline static constexpr unsigned int Class_2_98EE7E9B2CE0B1EF___c_TypeDefinitionIndex = 60174;

class Class_2_98EE7E9B2CE0B1EF___c : public ::System::Object
{
public:
	static ::Class_2_98EE7E9B2CE0B1EF___c** StaticGet___9()
	{
		return (::Class_2_98EE7E9B2CE0B1EF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_98EE7E9B2CE0B1EF___c_TypeDefinitionIndex)->GetStaticField(0x30090);
	}
	static ::System::Comparison_1<::MoleMole::UIWindowController*>** StaticGet___9__2_0()
	{
		return (::System::Comparison_1<::MoleMole::UIWindowController*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_98EE7E9B2CE0B1EF___c_TypeDefinitionIndex)->GetStaticField(0x30098);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_98EE7E9B2CE0B1EF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98EE7E9B2CE0B1EF___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_473937A760ED8DEF(::MoleMole::UIWindowController* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UIWindowController*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_98EE7E9B2CE0B1EF___C_METHOD_1_473937A760ED8DEF_OFFSET))(this, a1, a2);
	}
};
