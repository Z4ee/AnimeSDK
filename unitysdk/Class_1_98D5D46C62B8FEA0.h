#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRacePlayerState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_98D5D46C62B8FEA0__CTOR_OFFSET UNITYSDK_OFFSET(0x18ACF8C0)

inline static constexpr unsigned int Class_1_98D5D46C62B8FEA0_TypeDefinitionIndex = 34901;

class Class_1_98D5D46C62B8FEA0 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x14
	::RPG::Client::LittleGameShare::CakeRaceCore::CakeRacePlayerState Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98D5D46C62B8FEA0__CTOR_OFFSET))(this);
	}
};
