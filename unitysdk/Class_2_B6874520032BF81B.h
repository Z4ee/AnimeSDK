#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ExitPerform/ExitPerformEvent.h"

namespace System { class String; }

#define CLASS_2_B6874520032BF81B__CTOR_OFFSET UNITYSDK_OFFSET(0x14B6C440)

inline static constexpr unsigned int Class_2_B6874520032BF81B_TypeDefinitionIndex = 74108;

class Class_2_B6874520032BF81B : public ::MoleMole::ExitPerform::ExitPerformEvent
{
public:
	::System::String* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6874520032BF81B__CTOR_OFFSET))(this);
	}
};
