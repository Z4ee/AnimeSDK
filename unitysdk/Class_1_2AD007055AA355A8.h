#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_1_2AD007055AA355A8__CTOR_OFFSET UNITYSDK_OFFSET(0xCD78350)

inline static constexpr unsigned int Class_1_2AD007055AA355A8_TypeDefinitionIndex = 61821;

class Class_1_2AD007055AA355A8 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Boolean Field_1_6; // 0x18
	::System::Boolean Field_1_2; // 0x19
	::System::Boolean Field_1_5; // 0x1A
	::System::Single Field_1_4; // 0x1C
	::System::Int32 Field_1_1; // 0x20
	::UnityEngine::Vector3 Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AD007055AA355A8__CTOR_OFFSET))(this);
	}
};
