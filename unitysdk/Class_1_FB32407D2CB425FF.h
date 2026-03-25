#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_FB32407D2CB425FF__CTOR_OFFSET UNITYSDK_OFFSET(0x115003E0)

inline static constexpr unsigned int Class_1_FB32407D2CB425FF_TypeDefinitionIndex = 45065;

class Class_1_FB32407D2CB425FF : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action* Field_1_0; // 0x18
	::System::Single Field_1_3; // 0x20
	::System::Single Field_1_4; // 0x24
	::System::Boolean Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB32407D2CB425FF__CTOR_OFFSET))(this);
	}
};
