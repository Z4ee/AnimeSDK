#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_BB62CC0FD1E45ADE_2__CTOR_OFFSET UNITYSDK_OFFSET(0x16A0F650)

inline static constexpr unsigned int Class_1_BB62CC0FD1E45ADE_2_TypeDefinitionIndex = 33002;

class Class_1_BB62CC0FD1E45ADE_2 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB62CC0FD1E45ADE_2__CTOR_OFFSET))(this);
	}
};
