#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_07BF77E88FF3817D;
namespace System { class Action; }

#define CLASS_1_E961DAF6EA27AEAB__CTOR_OFFSET UNITYSDK_OFFSET(0xA62A210)

inline static constexpr unsigned int Class_1_E961DAF6EA27AEAB_TypeDefinitionIndex = 67380;

class Class_1_E961DAF6EA27AEAB : public ::System::Object
{
public:
	::Class_1_07BF77E88FF3817D* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E961DAF6EA27AEAB__CTOR_OFFSET))(this);
	}
};
