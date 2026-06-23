#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_BB62CC0FD1E45ADE__CTOR_OFFSET UNITYSDK_OFFSET(0x14310C40)

inline static constexpr unsigned int Class_1_BB62CC0FD1E45ADE_TypeDefinitionIndex = 55801;

class Class_1_BB62CC0FD1E45ADE : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB62CC0FD1E45ADE__CTOR_OFFSET))(this);
	}
};
