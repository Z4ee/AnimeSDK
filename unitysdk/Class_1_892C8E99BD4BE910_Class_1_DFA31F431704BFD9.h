#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DitherConfigSeparate; }
namespace System { class Action; }

#define CLASS_1_892C8E99BD4BE910_CLASS_1_DFA31F431704BFD9_METHOD_1_7087B03B2175CB54_OFFSET UNITYSDK_OFFSET(0x145E2680)
#define CLASS_1_892C8E99BD4BE910_CLASS_1_DFA31F431704BFD9__CTOR_OFFSET UNITYSDK_OFFSET(0x145E2670)

inline static constexpr unsigned int Class_1_892C8E99BD4BE910_Class_1_DFA31F431704BFD9_TypeDefinitionIndex = 77983;

class Class_1_892C8E99BD4BE910_Class_1_DFA31F431704BFD9 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_892C8E99BD4BE910_CLASS_1_DFA31F431704BFD9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7087B03B2175CB54(::MoleMole::DitherConfigSeparate* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::DitherConfigSeparate*))((::PBYTE)hIl2Cpp + CLASS_1_892C8E99BD4BE910_CLASS_1_DFA31F431704BFD9_METHOD_1_7087B03B2175CB54_OFFSET))(this, a1);
	}
};
