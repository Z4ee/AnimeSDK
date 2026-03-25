#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_38C460910E5AC181_METHOD_1_80E50FA57EB733F1_OFFSET UNITYSDK_OFFSET(0x165EFA20)
#define CLASS_1_38C460910E5AC181__CTOR_OFFSET UNITYSDK_OFFSET(0x165EFD50)

inline static constexpr unsigned int Class_1_38C460910E5AC181_TypeDefinitionIndex = 28506;

class Class_1_38C460910E5AC181 : public ::System::Object
{
public:
	::System::Single Field_1_2; // 0x10
	::System::Single Field_1_0; // 0x14
	::System::Single Field_1_3; // 0x18
	::System::Single Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38C460910E5AC181__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_80E50FA57EB733F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38C460910E5AC181_METHOD_1_80E50FA57EB733F1_OFFSET))(this);
	}
};
