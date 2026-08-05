#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWindowController; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_69DAA12DBAB4BAB6_1___C_METHOD_1_34993479D08A7B34_OFFSET UNITYSDK_OFFSET(0x15990760)
#define CLASS_2_69DAA12DBAB4BAB6_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15990710)
#define CLASS_2_69DAA12DBAB4BAB6_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15990750)

inline static constexpr unsigned int Class_2_69DAA12DBAB4BAB6_1___c_TypeDefinitionIndex = 84375;

class Class_2_69DAA12DBAB4BAB6_1___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::MoleMole::UIWindowController*>** StaticGet___9__0_0()
	{
		return (::System::Comparison_1<::MoleMole::UIWindowController*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_69DAA12DBAB4BAB6_1___c_TypeDefinitionIndex)->GetStaticField(0x48130);
	}
	static ::Class_2_69DAA12DBAB4BAB6_1___c** StaticGet___9()
	{
		return (::Class_2_69DAA12DBAB4BAB6_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_69DAA12DBAB4BAB6_1___c_TypeDefinitionIndex)->GetStaticField(0x48138);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_69DAA12DBAB4BAB6_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69DAA12DBAB4BAB6_1___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_34993479D08A7B34(::MoleMole::UIWindowController* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UIWindowController*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_69DAA12DBAB4BAB6_1___C_METHOD_1_34993479D08A7B34_OFFSET))(this, a1, a2);
	}
};
