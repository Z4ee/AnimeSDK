#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournDifficulty; }
namespace RPG::Client { class IRogueTournDifficultyWithDifficultyComp; }
namespace RPG::Client { class IRogueTournDifficultyWithDivision; }

#define RPG_CLIENT_ROGUETOURNDIFFICULTYEXT_ASDIFFCOMP_OFFSET UNITYSDK_OFFSET(0x1AF10EC0)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYEXT_ASDIVISION_OFFSET UNITYSDK_OFFSET(0x1AF10F30)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYEXT_DIFFICULTYCOMPLEVEL_OFFSET UNITYSDK_OFFSET(0x1AF06AA0)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYEXT_ISDIFFCOMP_OFFSET UNITYSDK_OFFSET(0x1AF06A30)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYEXT_ISDIVISION_OFFSET UNITYSDK_OFFSET(0x1AEED860)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournDifficultyExt_TypeDefinitionIndex = 67586;

	class RogueTournDifficultyExt : public ::System::Object
	{
	public:
		static ::System::Boolean IsDiffComp(::RPG::Client::IRogueTournDifficulty* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYEXT_ISDIFFCOMP_OFFSET))(a1);
		}

		static ::RPG::Client::IRogueTournDifficultyWithDifficultyComp* AsDiffComp(::RPG::Client::IRogueTournDifficulty* a1)
		{
			return ((::RPG::Client::IRogueTournDifficultyWithDifficultyComp*(*)(::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYEXT_ASDIFFCOMP_OFFSET))(a1);
		}

		static ::System::Boolean IsDivision(::RPG::Client::IRogueTournDifficulty* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYEXT_ISDIVISION_OFFSET))(a1);
		}

		static ::RPG::Client::IRogueTournDifficultyWithDivision* AsDivision(::RPG::Client::IRogueTournDifficulty* a1)
		{
			return ((::RPG::Client::IRogueTournDifficultyWithDivision*(*)(::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYEXT_ASDIVISION_OFFSET))(a1);
		}

		static ::System::UInt32 DifficultyCompLevel(::RPG::Client::IRogueTournDifficultyWithDifficultyComp* a1)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournDifficultyWithDifficultyComp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYEXT_DIFFICULTYCOMPLEVEL_OFFSET))(a1);
		}
	};
}
