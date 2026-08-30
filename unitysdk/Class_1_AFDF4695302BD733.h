#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/TeamTowersBrickModifierType.h"
#include "unitysdk/System/Object.h"

class Class_1_7AB88D713F5121B3_1;

#define CLASS_1_AFDF4695302BD733__CTOR_OFFSET UNITYSDK_OFFSET(0x1970FF20)

inline static constexpr unsigned int Class_1_AFDF4695302BD733_TypeDefinitionIndex = 36488;

class Class_1_AFDF4695302BD733 : public ::System::Object
{
public:
	::Class_1_7AB88D713F5121B3_1* BLOPONOMFBD; // 0x10
	::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickModifierType JMNJLFACCLM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFDF4695302BD733__CTOR_OFFSET))(this);
	}
};
