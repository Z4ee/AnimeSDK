#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_C605C4E21DB9EBC4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17AC4610)

inline static constexpr unsigned int Class_2_C605C4E21DB9EBC4_1_TypeDefinitionIndex = 52349;

class Class_2_C605C4E21DB9EBC4_1 : public ::System::Attribute
{
public:
	::System::String* KLAEFBPMEDP; // 0x10
	::System::String* PMBDDEGGHBA; // 0x18
	::System::String* MBIAPFKCBDN; // 0x20
	::System::String* DHIPFJBEJPI; // 0x28
	::System::String* AECMLMGHCGK; // 0x30
	::System::String* PFKOBAOBELI; // 0x38
	::System::Boolean IPNEAGOMGGC; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C605C4E21DB9EBC4_1__CTOR_OFFSET))(this);
	}
};
