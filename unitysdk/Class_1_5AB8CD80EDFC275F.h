#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RestaurantNormalEventType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_5AB8CD80EDFC275F__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE2EC90)

inline static constexpr unsigned int Class_1_5AB8CD80EDFC275F_TypeDefinitionIndex = 40523;

class Class_1_5AB8CD80EDFC275F : public ::System::Object
{
public:
	::System::Int32 GKJBKEDFHIB; // 0x10
	::RPG::GameCore::RestaurantNormalEventType LAOACNPDOLD; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5AB8CD80EDFC275F__CTOR_OFFSET))(this);
	}
};
