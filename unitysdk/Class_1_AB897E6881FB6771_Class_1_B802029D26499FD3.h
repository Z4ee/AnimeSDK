#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigBuddyUISetting; }
namespace System { class Action; }

#define CLASS_1_AB897E6881FB6771_CLASS_1_B802029D26499FD3_METHOD_1_A369AFB45E285A26_OFFSET UNITYSDK_OFFSET(0x18C77AD0)
#define CLASS_1_AB897E6881FB6771_CLASS_1_B802029D26499FD3__CTOR_OFFSET UNITYSDK_OFFSET(0x18C77AC0)

inline static constexpr unsigned int Class_1_AB897E6881FB6771_Class_1_B802029D26499FD3_TypeDefinitionIndex = 86387;

class Class_1_AB897E6881FB6771_Class_1_B802029D26499FD3 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB897E6881FB6771_CLASS_1_B802029D26499FD3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A369AFB45E285A26(::MoleMole::ConfigBuddyUISetting* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigBuddyUISetting*))((::PBYTE)hIl2Cpp + CLASS_1_AB897E6881FB6771_CLASS_1_B802029D26499FD3_METHOD_1_A369AFB45E285A26_OFFSET))(this, a1);
	}
};
