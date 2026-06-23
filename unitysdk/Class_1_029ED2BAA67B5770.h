#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_029ED2BAA67B5770__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEA1E00)

inline static constexpr unsigned int Class_1_029ED2BAA67B5770_TypeDefinitionIndex = 87875;

class Class_1_029ED2BAA67B5770 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_029ED2BAA67B5770__CTOR_OFFSET))(this);
	}
};
