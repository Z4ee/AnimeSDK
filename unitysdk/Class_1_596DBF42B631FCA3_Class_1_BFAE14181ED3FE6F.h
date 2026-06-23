#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigBubbleGroup; }
namespace System { class Action; }

#define CLASS_1_596DBF42B631FCA3_CLASS_1_BFAE14181ED3FE6F_METHOD_1_C6C8CEAB912768EC_OFFSET UNITYSDK_OFFSET(0x147D70C0)
#define CLASS_1_596DBF42B631FCA3_CLASS_1_BFAE14181ED3FE6F__CTOR_OFFSET UNITYSDK_OFFSET(0x147D70B0)

inline static constexpr unsigned int Class_1_596DBF42B631FCA3_Class_1_BFAE14181ED3FE6F_TypeDefinitionIndex = 69168;

class Class_1_596DBF42B631FCA3_Class_1_BFAE14181ED3FE6F : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_596DBF42B631FCA3_CLASS_1_BFAE14181ED3FE6F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C6C8CEAB912768EC(::MoleMole::ConfigBubbleGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigBubbleGroup*))((::PBYTE)hIl2Cpp + CLASS_1_596DBF42B631FCA3_CLASS_1_BFAE14181ED3FE6F_METHOD_1_C6C8CEAB912768EC_OFFSET))(this, a1);
	}
};
