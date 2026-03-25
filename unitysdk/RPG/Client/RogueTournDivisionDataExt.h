#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournDifficultyWithDivision; }
namespace RPG::Client { class RogueTournDivisionData; }

#define RPG_CLIENT_ROGUETOURNDIVISIONDATAEXT_CORRESPONDINGDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xA38AE70)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournDivisionDataExt_TypeDefinitionIndex = 55110;

	class RogueTournDivisionDataExt : public ::System::Object
	{
	public:
		static ::RPG::Client::IRogueTournDifficultyWithDivision* CorrespondingDifficulty(::RPG::Client::RogueTournDivisionData* division)
		{
			return ((::RPG::Client::IRogueTournDifficultyWithDivision*(*)(::RPG::Client::RogueTournDivisionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDATAEXT_CORRESPONDINGDIFFICULTY_OFFSET))(division);
		}
	};
}
