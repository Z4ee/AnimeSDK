#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/MatchThreeOpponentLiveState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_B312821CA289B388__CTOR_OFFSET UNITYSDK_OFFSET(0x1C43D470)

inline static constexpr unsigned int Class_1_B312821CA289B388_TypeDefinitionIndex = 40953;

class Class_1_B312821CA289B388 : public ::System::Object
{
public:
	::System::Int32 AMMPNOLLCIN; // 0x10
	::System::Int32 OGOADCDDCIG; // 0x14
	::System::Int32 BPEHFMHGHAC; // 0x18
	::System::Int32 GLANPLEGMPG; // 0x1C
	::RPG::Client::LittleGame::Match3::MatchThreeOpponentLiveState KGDEJHBLAGP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B312821CA289B388__CTOR_OFFSET))(this);
	}
};
