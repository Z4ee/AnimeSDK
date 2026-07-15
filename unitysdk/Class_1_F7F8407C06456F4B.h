#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirPlaneType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_F7F8407C06456F4B__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1827A0)

inline static constexpr unsigned int Class_1_F7F8407C06456F4B_TypeDefinitionIndex = 41086;

class Class_1_F7F8407C06456F4B : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::RPG::Client::LittleGame::PixAir::PixAirPlaneType Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7F8407C06456F4B__CTOR_OFFSET))(this);
	}
};
