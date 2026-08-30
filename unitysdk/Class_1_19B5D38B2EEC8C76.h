#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RestaurantSuperEventType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_19B5D38B2EEC8C76__CTOR_OFFSET UNITYSDK_OFFSET(0x1C33B1D0)

inline static constexpr unsigned int Class_1_19B5D38B2EEC8C76_TypeDefinitionIndex = 40524;

class Class_1_19B5D38B2EEC8C76 : public ::System::Object
{
public:
	::System::Int32 GKJBKEDFHIB; // 0x10
	::RPG::GameCore::RestaurantSuperEventType LAOACNPDOLD; // 0x14
	::System::Boolean KEOKEELBKHI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19B5D38B2EEC8C76__CTOR_OFFSET))(this);
	}
};
