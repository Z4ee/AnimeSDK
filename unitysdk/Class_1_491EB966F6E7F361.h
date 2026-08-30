#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameCharacterVisionConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_491EB966F6E7F361__CTOR_OFFSET UNITYSDK_OFFSET(0x1D03E970)

inline static constexpr unsigned int Class_1_491EB966F6E7F361_TypeDefinitionIndex = 41205;

class Class_1_491EB966F6E7F361 : public ::System::Object
{
public:
	::UnityEngine::Vector3 NEKCGBPLMLB; // 0x10
	::RPG::Client::LittleGame::TimelineControlGameCharacterVisionConfig NLILBJJCGEJ; // 0x1C
	::System::Single LNEHAJPFGPN; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_491EB966F6E7F361__CTOR_OFFSET))(this);
	}
};
