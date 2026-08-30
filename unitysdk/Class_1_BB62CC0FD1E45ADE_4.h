#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_BB62CC0FD1E45ADE_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBE0400)

inline static constexpr unsigned int Class_1_BB62CC0FD1E45ADE_4_TypeDefinitionIndex = 41270;

class Class_1_BB62CC0FD1E45ADE_4 : public ::System::Object
{
public:
	::System::String* GFNAPNFFGPJ; // 0x10
	::System::Boolean MEBCGCKPOBH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB62CC0FD1E45ADE_4__CTOR_OFFSET))(this);
	}
};
