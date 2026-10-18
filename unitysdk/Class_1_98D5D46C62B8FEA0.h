#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRacePlayerState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_98D5D46C62B8FEA0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7200D0)

inline static constexpr unsigned int Class_1_98D5D46C62B8FEA0_TypeDefinitionIndex = 37231;

class Class_1_98D5D46C62B8FEA0 : public ::System::Object
{
public:
	::RPG::Client::LittleGameShare::CakeRaceCore::CakeRacePlayerState MEPFOEEGBEA; // 0x10
	::System::Boolean KEOKEELBKHI; // 0x14
	::System::UInt32 LJMNNBMALLL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98D5D46C62B8FEA0__CTOR_OFFSET))(this);
	}
};
