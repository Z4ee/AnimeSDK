#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElfTakeOutState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }

#define CLASS_1_C2AB710A7A08881E__CTOR_OFFSET UNITYSDK_OFFSET(0x1C506330)

inline static constexpr unsigned int Class_1_C2AB710A7A08881E_TypeDefinitionIndex = 40516;

class Class_1_C2AB710A7A08881E : public ::System::Object
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* LPIINKCPJPO; // 0x10
	::RPG::GameCore::ElfTakeOutState MEPFOEEGBEA; // 0x18
	::System::Single LKKHEOOEGMG; // 0x1C
	::System::UInt32 CLDPGBHMEOB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2AB710A7A08881E__CTOR_OFFSET))(this);
	}
};
