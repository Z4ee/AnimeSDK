#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_BB62CC0FD1E45ADE_12__CTOR_OFFSET UNITYSDK_OFFSET(0x159F5D50)

inline static constexpr unsigned int Class_1_BB62CC0FD1E45ADE_12_TypeDefinitionIndex = 65579;

class Class_1_BB62CC0FD1E45ADE_12 : public ::System::Object
{
public:
	::System::String* KDHPKOFLNFM; // 0x10
	::System::Boolean KLNBEHCHGIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB62CC0FD1E45ADE_12__CTOR_OFFSET))(this);
	}
};
