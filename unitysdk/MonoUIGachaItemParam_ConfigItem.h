#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D5E55949F51D9DD0.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MONOUIGACHAITEMPARAM_CONFIGITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xF645DA0)

inline static constexpr unsigned int MonoUIGachaItemParam_ConfigItem_TypeDefinitionIndex = 77261;

class MonoUIGachaItemParam_ConfigItem : public ::System::Object
{
public:
	::Enum_3_D5E55949F51D9DD0 rarity; // 0x10
	::System::String* fadeInAnimName; // 0x18
	::System::String* activateAnimName; // 0x20
	::System::Single animInterval; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIGACHAITEMPARAM_CONFIGITEM__CTOR_OFFSET))(this);
	}
};
