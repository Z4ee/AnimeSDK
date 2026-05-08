#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_26F3F0BB91581A51_CLASS_1_379DA7F42CE93234__CTOR_OFFSET UNITYSDK_OFFSET(0x161AFB10)

inline static constexpr unsigned int Class_1_26F3F0BB91581A51_Class_1_379DA7F42CE93234_TypeDefinitionIndex = 41296;

class Class_1_26F3F0BB91581A51_Class_1_379DA7F42CE93234 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action* Field_1_3; // 0x18
	::System::Action* Field_1_2; // 0x20
	::System::Boolean Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26F3F0BB91581A51_CLASS_1_379DA7F42CE93234__CTOR_OFFSET))(this);
	}
};
