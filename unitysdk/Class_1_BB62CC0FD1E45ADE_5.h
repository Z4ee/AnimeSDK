#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_BB62CC0FD1E45ADE_5__CTOR_OFFSET UNITYSDK_OFFSET(0x161FEDC0)

inline static constexpr unsigned int Class_1_BB62CC0FD1E45ADE_5_TypeDefinitionIndex = 52553;

class Class_1_BB62CC0FD1E45ADE_5 : public ::System::Object
{
public:
	::System::String* CJOACMMCHJP; // 0x10
	::System::Boolean MIDIBFPDDMO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB62CC0FD1E45ADE_5__CTOR_OFFSET))(this);
	}
};
