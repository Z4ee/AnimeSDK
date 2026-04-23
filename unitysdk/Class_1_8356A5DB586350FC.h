#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Expression/Precedence.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_8356A5DB586350FC__CTOR_OFFSET UNITYSDK_OFFSET(0x1838DEA0)

inline static constexpr unsigned int Class_1_8356A5DB586350FC_TypeDefinitionIndex = 10047;

class Class_1_8356A5DB586350FC : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18
	::RPG::Expression::Precedence Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8356A5DB586350FC__CTOR_OFFSET))(this);
	}
};
