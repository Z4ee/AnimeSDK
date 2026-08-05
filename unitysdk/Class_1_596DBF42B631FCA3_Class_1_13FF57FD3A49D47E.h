#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigBubbleGroup; }
namespace System { class Action; }

#define CLASS_1_596DBF42B631FCA3_CLASS_1_13FF57FD3A49D47E_METHOD_1_B147928059AC1067_OFFSET UNITYSDK_OFFSET(0xF787B20)
#define CLASS_1_596DBF42B631FCA3_CLASS_1_13FF57FD3A49D47E__CTOR_OFFSET UNITYSDK_OFFSET(0xF787B10)

inline static constexpr unsigned int Class_1_596DBF42B631FCA3_Class_1_13FF57FD3A49D47E_TypeDefinitionIndex = 88515;

class Class_1_596DBF42B631FCA3_Class_1_13FF57FD3A49D47E : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_596DBF42B631FCA3_CLASS_1_13FF57FD3A49D47E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B147928059AC1067(::MoleMole::ConfigBubbleGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigBubbleGroup*))((::PBYTE)hIl2Cpp + CLASS_1_596DBF42B631FCA3_CLASS_1_13FF57FD3A49D47E_METHOD_1_B147928059AC1067_OFFSET))(this, a1);
	}
};
