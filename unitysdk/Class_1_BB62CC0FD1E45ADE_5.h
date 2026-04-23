#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_BB62CC0FD1E45ADE_5_CLEAR_OFFSET UNITYSDK_OFFSET(0x12958480)
#define CLASS_1_BB62CC0FD1E45ADE_5__CTOR_OFFSET UNITYSDK_OFFSET(0x129584D0)

inline static constexpr unsigned int Class_1_BB62CC0FD1E45ADE_5_TypeDefinitionIndex = 54027;

class Class_1_BB62CC0FD1E45ADE_5 : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::Boolean Field_1_0; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB62CC0FD1E45ADE_5__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB62CC0FD1E45ADE_5_CLEAR_OFFSET))(this);
	}
};
