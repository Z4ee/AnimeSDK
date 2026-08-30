#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IChimeraDuelChimeraLevelData; }
namespace RPG::Client { class IChimeraDuelSkillData; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS_TRYGETBATTLESKILLDATA_OFFSET UNITYSDK_OFFSET(0x198295B0)
#define RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS_TRYGETSHOPSKILLDATA_OFFSET UNITYSDK_OFFSET(0x19829460)
#define RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS_TRYGETSKILLDATAFORDISPLAY_OFFSET UNITYSDK_OFFSET(0x19829700)
#define RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS__TRYGETFIRSTSKILLDATA_OFFSET UNITYSDK_OFFSET(0x19829200)

namespace RPG::Client
{
	inline static constexpr unsigned int IChimeraDuelLevelDataExtensions_TypeDefinitionIndex = 63408;

	class IChimeraDuelLevelDataExtensions : public ::System::Object
	{
	public:
		static ::RPG::Client::IChimeraDuelSkillData* _TryGetFirstSkillData(::RPG::Client::IChimeraDuelChimeraLevelData* a1, ::System::Predicate_1<::RPG::Client::IChimeraDuelSkillData*>* a2)
		{
			return ((::RPG::Client::IChimeraDuelSkillData*(*)(::RPG::Client::IChimeraDuelChimeraLevelData*, ::System::Predicate_1<::RPG::Client::IChimeraDuelSkillData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS__TRYGETFIRSTSKILLDATA_OFFSET))(a1, a2);
		}

		static ::RPG::Client::IChimeraDuelSkillData* TryGetShopSkillData(::RPG::Client::IChimeraDuelChimeraLevelData* a1)
		{
			return ((::RPG::Client::IChimeraDuelSkillData*(*)(::RPG::Client::IChimeraDuelChimeraLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS_TRYGETSHOPSKILLDATA_OFFSET))(a1);
		}

		static ::RPG::Client::IChimeraDuelSkillData* TryGetBattleSkillData(::RPG::Client::IChimeraDuelChimeraLevelData* a1)
		{
			return ((::RPG::Client::IChimeraDuelSkillData*(*)(::RPG::Client::IChimeraDuelChimeraLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS_TRYGETBATTLESKILLDATA_OFFSET))(a1);
		}

		static ::RPG::Client::IChimeraDuelSkillData* TryGetSkillDataForDisplay(::RPG::Client::IChimeraDuelChimeraLevelData* a1)
		{
			return ((::RPG::Client::IChimeraDuelSkillData*(*)(::RPG::Client::IChimeraDuelChimeraLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS_TRYGETSKILLDATAFORDISPLAY_OFFSET))(a1);
		}
	};
}
