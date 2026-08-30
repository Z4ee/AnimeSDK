#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirGameState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_DA734452266AE0D0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C506BA0)

inline static constexpr unsigned int Class_1_DA734452266AE0D0_TypeDefinitionIndex = 42038;

class Class_1_DA734452266AE0D0 : public ::System::Object
{
public:
	::System::Boolean KBEJHKAFIIF; // 0x10
	::RPG::Client::LittleGame::PixAir::PixAirGameState MEPFOEEGBEA; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA734452266AE0D0__CTOR_OFFSET))(this);
	}
};
