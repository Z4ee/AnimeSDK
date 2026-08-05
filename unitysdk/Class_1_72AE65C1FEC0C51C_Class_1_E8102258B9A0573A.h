#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIMainPageShow; }
namespace System { class Action; }

#define CLASS_1_72AE65C1FEC0C51C_CLASS_1_E8102258B9A0573A_METHOD_1_4E50C4E9A6C90F3B_OFFSET UNITYSDK_OFFSET(0x15D0F9D0)
#define CLASS_1_72AE65C1FEC0C51C_CLASS_1_E8102258B9A0573A__CTOR_OFFSET UNITYSDK_OFFSET(0x15D0F9C0)

inline static constexpr unsigned int Class_1_72AE65C1FEC0C51C_Class_1_E8102258B9A0573A_TypeDefinitionIndex = 85947;

class Class_1_72AE65C1FEC0C51C_Class_1_E8102258B9A0573A : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72AE65C1FEC0C51C_CLASS_1_E8102258B9A0573A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4E50C4E9A6C90F3B(::MoleMole::ConfigUIMainPageShow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIMainPageShow*))((::PBYTE)hIl2Cpp + CLASS_1_72AE65C1FEC0C51C_CLASS_1_E8102258B9A0573A_METHOD_1_4E50C4E9A6C90F3B_OFFSET))(this, a1);
	}
};
