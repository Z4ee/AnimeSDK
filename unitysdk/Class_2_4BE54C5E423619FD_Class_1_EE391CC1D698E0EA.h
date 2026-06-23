#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_2_4BE54C5E423619FD_CLASS_1_EE391CC1D698E0EA__CTOR_OFFSET UNITYSDK_OFFSET(0xB7DB0B0)

inline static constexpr unsigned int Class_2_4BE54C5E423619FD_Class_1_EE391CC1D698E0EA_TypeDefinitionIndex = 84065;

class Class_2_4BE54C5E423619FD_Class_1_EE391CC1D698E0EA : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_3; // 0x20
	::System::Boolean Field_1_4; // 0x28
	::System::Int32 Field_1_0; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_CLASS_1_EE391CC1D698E0EA__CTOR_OFFSET))(this);
	}
};
