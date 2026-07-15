#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournDifficultyWithDivision; }
namespace RPG::Client { class RogueTournDivisionData; }

#define RPG_CLIENT_ROGUETOURNDIVISIONDATAEXT_CORRESPONDINGDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x19C21D40)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournDivisionDataExt_TypeDefinitionIndex = 64598;

	class RogueTournDivisionDataExt : public ::System::Object
	{
	public:
		static ::RPG::Client::IRogueTournDifficultyWithDivision* CorrespondingDifficulty(::RPG::Client::RogueTournDivisionData* a1)
		{
			return ((::RPG::Client::IRogueTournDifficultyWithDivision*(*)(::RPG::Client::RogueTournDivisionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDATAEXT_CORRESPONDINGDIFFICULTY_OFFSET))(a1);
		}
	};
}
