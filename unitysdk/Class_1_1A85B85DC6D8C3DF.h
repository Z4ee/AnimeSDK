#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_1A85B85DC6D8C3DF__CTOR_OFFSET UNITYSDK_OFFSET(0x1298A3B0)

inline static constexpr unsigned int Class_1_1A85B85DC6D8C3DF_TypeDefinitionIndex = 76680;

class Class_1_1A85B85DC6D8C3DF : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::System::Action* Field_1_0; // 0x18
	::System::Action* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A85B85DC6D8C3DF__CTOR_OFFSET))(this);
	}
};
