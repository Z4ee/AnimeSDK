#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWindowController; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_545352D1BF1C6114___C_METHOD_1_34993479D08A7B34_OFFSET UNITYSDK_OFFSET(0x12D474F0)
#define CLASS_1_545352D1BF1C6114___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12D474A0)
#define CLASS_1_545352D1BF1C6114___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12D474E0)

inline static constexpr unsigned int Class_1_545352D1BF1C6114___c_TypeDefinitionIndex = 80736;

class Class_1_545352D1BF1C6114___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::MoleMole::UIWindowController*>** StaticGet___9__8_0()
	{
		return (::System::Comparison_1<::MoleMole::UIWindowController*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_545352D1BF1C6114___c_TypeDefinitionIndex)->GetStaticField(0x43390);
	}
	static ::Class_1_545352D1BF1C6114___c** StaticGet___9()
	{
		return (::Class_1_545352D1BF1C6114___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_545352D1BF1C6114___c_TypeDefinitionIndex)->GetStaticField(0x43398);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_545352D1BF1C6114___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_545352D1BF1C6114___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_34993479D08A7B34(::MoleMole::UIWindowController* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UIWindowController*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_545352D1BF1C6114___C_METHOD_1_34993479D08A7B34_OFFSET))(this, a1, a2);
	}
};
