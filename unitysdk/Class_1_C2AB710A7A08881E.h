#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElfTakeOutState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }

#define CLASS_1_C2AB710A7A08881E__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE5BE0)

inline static constexpr unsigned int Class_1_C2AB710A7A08881E_TypeDefinitionIndex = 38834;

class Class_1_C2AB710A7A08881E : public ::System::Object
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::RPG::GameCore::ElfTakeOutState Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2AB710A7A08881E__CTOR_OFFSET))(this);
	}
};
