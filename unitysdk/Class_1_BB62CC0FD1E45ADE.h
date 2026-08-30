#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_BB62CC0FD1E45ADE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A610BC0)

inline static constexpr unsigned int Class_1_BB62CC0FD1E45ADE_TypeDefinitionIndex = 40432;

class Class_1_BB62CC0FD1E45ADE : public ::System::Object
{
public:
	::System::String* BDACPPLKLGL; // 0x10
	::System::Boolean CEJPJNBDMKP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB62CC0FD1E45ADE__CTOR_OFFSET))(this);
	}
};
