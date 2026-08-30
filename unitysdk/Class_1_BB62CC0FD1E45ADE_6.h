#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_BB62CC0FD1E45ADE_6_CLEAR_OFFSET UNITYSDK_OFFSET(0x1579CF90)
#define CLASS_1_BB62CC0FD1E45ADE_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1579CFF0)

inline static constexpr unsigned int Class_1_BB62CC0FD1E45ADE_6_TypeDefinitionIndex = 58752;

class Class_1_BB62CC0FD1E45ADE_6 : public ::System::Object
{
public:
	::System::String* KDOLHICFKLL; // 0x10
	::System::Boolean AJCHFLNPMCJ; // 0x18
	::System::Boolean CJGGFJBHOOM; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB62CC0FD1E45ADE_6__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB62CC0FD1E45ADE_6_CLEAR_OFFSET))(this);
	}
};
