#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_31489150B8B5483E;
namespace System { class Action; }

#define CLASS_1_E961DAF6EA27AEAB__CTOR_OFFSET UNITYSDK_OFFSET(0x158BE1D0)

inline static constexpr unsigned int Class_1_E961DAF6EA27AEAB_TypeDefinitionIndex = 64362;

class Class_1_E961DAF6EA27AEAB : public ::System::Object
{
public:
	::Class_1_31489150B8B5483E* Field_1_7; // 0x10
	::System::Action* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E961DAF6EA27AEAB__CTOR_OFFSET))(this);
	}
};
