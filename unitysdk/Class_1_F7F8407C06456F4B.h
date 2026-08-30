#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirPlaneType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_F7F8407C06456F4B__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC9C5A0)

inline static constexpr unsigned int Class_1_F7F8407C06456F4B_TypeDefinitionIndex = 42046;

class Class_1_F7F8407C06456F4B : public ::System::Object
{
public:
	::RPG::Client::LittleGame::PixAir::PixAirPlaneType HMNDHAFDNAH; // 0x10
	::System::Int32 NJIOMOHBILM; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7F8407C06456F4B__CTOR_OFFSET))(this);
	}
};
