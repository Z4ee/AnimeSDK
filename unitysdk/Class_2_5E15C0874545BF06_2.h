#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_5E15C0874545BF06_2__CTOR_OFFSET UNITYSDK_OFFSET(0x179571E0)

inline static constexpr unsigned int Class_2_5E15C0874545BF06_2_TypeDefinitionIndex = 22832;

class Class_2_5E15C0874545BF06_2 : public ::System::Attribute
{
public:
	::System::String* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E15C0874545BF06_2__CTOR_OFFSET))(this);
	}
};
