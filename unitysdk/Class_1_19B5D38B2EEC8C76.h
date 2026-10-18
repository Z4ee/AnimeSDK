#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RestaurantSuperEventType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_19B5D38B2EEC8C76__CTOR_OFFSET UNITYSDK_OFFSET(0x1C85D3A0)

inline static constexpr unsigned int Class_1_19B5D38B2EEC8C76_TypeDefinitionIndex = 42126;

class Class_1_19B5D38B2EEC8C76 : public ::System::Object
{
public:
	::RPG::GameCore::RestaurantSuperEventType LAOACNPDOLD; // 0x10
	::System::Int32 GKJBKEDFHIB; // 0x14
	::System::Boolean KEOKEELBKHI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19B5D38B2EEC8C76__CTOR_OFFSET))(this);
	}
};
