#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelFloor.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelRotation.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelCell.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

class Class_1_06AB2BCBCFDFE141;

#define CLASS_1_F31115D5F56C5F10_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1C507B50)
#define CLASS_1_F31115D5F56C5F10__CTOR_OFFSET UNITYSDK_OFFSET(0x1C507B90)

inline static constexpr unsigned int Class_1_F31115D5F56C5F10_TypeDefinitionIndex = 41211;

class Class_1_F31115D5F56C5F10 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCell IDALAPNIBNC; // 0x10
	::Class_1_06AB2BCBCFDFE141* CEOOOMFMKFO; // 0x30
	::RPG::Client::LittleGame::ETimelineControlGameLevelRotation KCCKBDKEMDC; // 0x38
	::UnityEngine::Vector2Int EOICNLEGJKN; // 0x3C
	::UnityEngine::Vector3Int NHJHOGFKNNA; // 0x44
	::RPG::Client::LittleGame::ETimelineControlGameLevelFloor MIAFMBHCMOG; // 0x50
	::UnityEngine::Vector3Int BBFOLEOPPPL; // 0x54
	::System::Single IJDBBLIFBMM; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F31115D5F56C5F10__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F31115D5F56C5F10_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
