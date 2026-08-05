#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_E09D58C9AD3DF860__CTOR_OFFSET UNITYSDK_OFFSET(0x17546420)

inline static constexpr unsigned int Class_1_E09D58C9AD3DF860_TypeDefinitionIndex = 54860;

class Class_1_E09D58C9AD3DF860 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18

	::System::Void _ctor(::System::Single a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E09D58C9AD3DF860__CTOR_OFFSET))(this, a1, a2);
	}
};
