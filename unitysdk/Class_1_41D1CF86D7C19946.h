#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceBubbleState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_41D1CF86D7C19946__CTOR_OFFSET UNITYSDK_OFFSET(0x1C077E70)

inline static constexpr unsigned int Class_1_41D1CF86D7C19946_TypeDefinitionIndex = 36144;

class Class_1_41D1CF86D7C19946 : public ::System::Object
{
public:
	::System::Boolean FLNGPNCFBAK; // 0x10
	::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceBubbleState MEPFOEEGBEA; // 0x14
	::System::Single KIPAGNCANAJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41D1CF86D7C19946__CTOR_OFFSET))(this);
	}
};
