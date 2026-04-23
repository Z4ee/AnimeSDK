#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCStatus.h"
#include "unitysdk/RPG/GameCore/UnitStatus.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_D53E479D0BDA3C41_METHOD_1_E0A332DC1AD357D9_1_OFFSET UNITYSDK_OFFSET(0x98D3630)
#define CLASS_1_D53E479D0BDA3C41_METHOD_1_E0A332DC1AD357D9_OFFSET UNITYSDK_OFFSET(0x98D3570)

inline static constexpr unsigned int Class_1_D53E479D0BDA3C41_TypeDefinitionIndex = 53058;

class Class_1_D53E479D0BDA3C41 : public ::System::Object
{
public:
	static ::RPG::GameCore::UnitStatus Method_1_E0A332DC1AD357D9(::RPG::GameCore::NPCStatus a1)
	{
		return ((::RPG::GameCore::UnitStatus(*)(::RPG::GameCore::NPCStatus))((::PBYTE)hIl2Cpp + CLASS_1_D53E479D0BDA3C41_METHOD_1_E0A332DC1AD357D9_OFFSET))(a1);
	}

	static ::RPG::GameCore::NPCStatus Method_1_E0A332DC1AD357D9_1(::RPG::GameCore::UnitStatus a1)
	{
		return ((::RPG::GameCore::NPCStatus(*)(::RPG::GameCore::UnitStatus))((::PBYTE)hIl2Cpp + CLASS_1_D53E479D0BDA3C41_METHOD_1_E0A332DC1AD357D9_1_OFFSET))(a1);
	}
};
