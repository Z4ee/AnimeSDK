#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimPlayerStateListenerConfig; }

#define CLASS_1_98AB265AB8F97BE4__CTOR_OFFSET UNITYSDK_OFFSET(0x1B10C6A0)

inline static constexpr unsigned int Class_1_98AB265AB8F97BE4_TypeDefinitionIndex = 40726;

class Class_1_98AB265AB8F97BE4 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimPlayerStateListenerConfig* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98AB265AB8F97BE4__CTOR_OFFSET))(this);
	}
};
