#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/MatchThreeGameMode.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_7D5E6D8946E8D475__CTOR_OFFSET UNITYSDK_OFFSET(0x1C43D440)

inline static constexpr unsigned int Class_1_7D5E6D8946E8D475_TypeDefinitionIndex = 40954;

class Class_1_7D5E6D8946E8D475 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::Match3::MatchThreeGameMode HKEACDBJCOD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D5E6D8946E8D475__CTOR_OFFSET))(this);
	}
};
