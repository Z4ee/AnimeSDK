#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_F7E58FEB09AEC901__CTOR_OFFSET UNITYSDK_OFFSET(0x15E0E970)

inline static constexpr unsigned int Class_1_F7E58FEB09AEC901_TypeDefinitionIndex = 39606;

class Class_1_F7E58FEB09AEC901 : public ::System::Object
{
public:
	::System::String* Field_1_3; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::MoleMole::Config::ScreenEffectType Field_1_2; // 0x1C
	::System::Int32 Field_1_1; // 0x20
	::System::Boolean Field_1_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7E58FEB09AEC901__CTOR_OFFSET))(this);
	}
};
