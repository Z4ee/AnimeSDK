#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RestaurantNormalEventType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_5AB8CD80EDFC275F__CTOR_OFFSET UNITYSDK_OFFSET(0x180A8080)

inline static constexpr unsigned int Class_1_5AB8CD80EDFC275F_TypeDefinitionIndex = 38100;

class Class_1_5AB8CD80EDFC275F : public ::System::Object
{
public:
	::RPG::GameCore::RestaurantNormalEventType Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5AB8CD80EDFC275F__CTOR_OFFSET))(this);
	}
};
