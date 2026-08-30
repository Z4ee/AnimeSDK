#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelChimeraData; }

#define RPG_CLIENT_CHIMERADUELCHIMERAINFO___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1C2700)
#define RPG_CLIENT_CHIMERADUELCHIMERAINFO___C__DISPLAYCLASS5_0__GETDATAWITHINRARITY_B__0_OFFSET UNITYSDK_OFFSET(0x1C1C2920)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelChimeraInfo___c__DisplayClass5_0_TypeDefinitionIndex = 63405;

	class ChimeraDuelChimeraInfo___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::UInt32 maxRarity; // 0x10
		::System::UInt32 minRarity; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERAINFO___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetDataWithinRarity_b__0(::RPG::Client::ChimeraDuelChimeraData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraDuelChimeraData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERAINFO___C__DISPLAYCLASS5_0__GETDATAWITHINRARITY_B__0_OFFSET))(this, a1);
		}
	};
}
