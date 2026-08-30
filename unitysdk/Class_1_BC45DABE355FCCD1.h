#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournRelicCocoonTeamSaveType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_BC45DABE355FCCD1__CTOR_OFFSET UNITYSDK_OFFSET(0x18B87740)

inline static constexpr unsigned int Class_1_BC45DABE355FCCD1_TypeDefinitionIndex = 67772;

class Class_1_BC45DABE355FCCD1 : public ::System::Object
{
public:
	::RPG::Client::RogueTournRelicCocoonTeamSaveType HOPKBCJIOCD; // 0x10
	::System::UInt32 ACCJKGEKHKP; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC45DABE355FCCD1__CTOR_OFFSET))(this);
	}
};
