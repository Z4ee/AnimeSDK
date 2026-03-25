#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CompilerFramework/DiagnosticSeverity.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Globalization { class CultureInfo; }

#define CLASS_1_94447297E4003CE1_METHOD_1_4B967A5E70FF7EE4_OFFSET UNITYSDK_OFFSET(0x1659FF90)
#define CLASS_1_94447297E4003CE1__CTOR_OFFSET UNITYSDK_OFFSET(0x165A0060)

inline static constexpr unsigned int Class_1_94447297E4003CE1_TypeDefinitionIndex = 32171;

class Class_1_94447297E4003CE1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94447297E4003CE1__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_4B967A5E70FF7EE4(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_94447297E4003CE1_METHOD_1_4B967A5E70FF7EE4_OFFSET))(this, a1);
	}
};
