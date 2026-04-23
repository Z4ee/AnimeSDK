#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RestaurantSuperEventType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_19B5D38B2EEC8C76__CTOR_OFFSET UNITYSDK_OFFSET(0x17E08300)

inline static constexpr unsigned int Class_1_19B5D38B2EEC8C76_TypeDefinitionIndex = 38101;

class Class_1_19B5D38B2EEC8C76 : public ::System::Object
{
public:
	::RPG::GameCore::RestaurantSuperEventType Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x14
	::System::Boolean Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19B5D38B2EEC8C76__CTOR_OFFSET))(this);
	}
};
