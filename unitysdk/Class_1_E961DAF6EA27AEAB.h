#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2F9111B69E79DBBA;
namespace System { class Action; }

#define CLASS_1_E961DAF6EA27AEAB__CTOR_OFFSET UNITYSDK_OFFSET(0xBAD11D0)

inline static constexpr unsigned int Class_1_E961DAF6EA27AEAB_TypeDefinitionIndex = 66443;

class Class_1_E961DAF6EA27AEAB : public ::System::Object
{
public:
	::Class_1_2F9111B69E79DBBA* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E961DAF6EA27AEAB__CTOR_OFFSET))(this);
	}
};
