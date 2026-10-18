#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/MatchThreeOpponentLiveState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_2BC4C797B07A85AD__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA33050)

inline static constexpr unsigned int Class_1_2BC4C797B07A85AD_TypeDefinitionIndex = 42240;

class Class_1_2BC4C797B07A85AD : public ::System::Object
{
public:
	::System::Int32 BPEHFMHGHAC; // 0x10
	::RPG::Client::LittleGame::Match3::MatchThreeOpponentLiveState KGDEJHBLAGP; // 0x14
	::System::Boolean EOJMKPPFNHN; // 0x18
	::System::Int32 OGOADCDDCIG; // 0x1C
	::System::Int32 LPEHHMHPCMG; // 0x20
	::System::Int32 GLANPLEGMPG; // 0x24
	::System::Int32 AMMPNOLLCIN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BC4C797B07A85AD__CTOR_OFFSET))(this);
	}
};
