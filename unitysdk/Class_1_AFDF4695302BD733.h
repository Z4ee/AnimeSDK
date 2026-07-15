#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/TeamTowersBrickModifierType.h"
#include "unitysdk/System/Object.h"

class Class_1_7AB88D713F5121B3_1;

#define CLASS_1_AFDF4695302BD733__CTOR_OFFSET UNITYSDK_OFFSET(0x17B101B0)

inline static constexpr unsigned int Class_1_AFDF4695302BD733_TypeDefinitionIndex = 35627;

class Class_1_AFDF4695302BD733 : public ::System::Object
{
public:
	::Class_1_7AB88D713F5121B3_1* Field_1_0; // 0x10
	::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickModifierType Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFDF4695302BD733__CTOR_OFFSET))(this);
	}
};
