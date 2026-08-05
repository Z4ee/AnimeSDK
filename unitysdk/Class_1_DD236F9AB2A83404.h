#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define CLASS_1_DD236F9AB2A83404__CTOR_OFFSET UNITYSDK_OFFSET(0x11FC5080)

inline static constexpr unsigned int Class_1_DD236F9AB2A83404_TypeDefinitionIndex = 59412;

class Class_1_DD236F9AB2A83404 : public ::System::Object
{
public:
	::System::Type* Field_1_0; // 0x10
	::System::Single Field_1_7; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD236F9AB2A83404__CTOR_OFFSET))(this);
	}
};
