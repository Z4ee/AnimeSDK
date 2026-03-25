#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IChimeraDuelChimeraLevelData; }
namespace RPG::Client { class IChimeraDuelSkillData; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS_TRYGETBATTLESKILLDATA_OFFSET UNITYSDK_OFFSET(0x9932000)
#define RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS_TRYGETSHOPSKILLDATA_OFFSET UNITYSDK_OFFSET(0x9931EE0)
#define RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS_TRYGETSKILLDATAFORDISPLAY_OFFSET UNITYSDK_OFFSET(0x9932120)
#define RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS__TRYGETFIRSTSKILLDATA_OFFSET UNITYSDK_OFFSET(0x9931D10)

namespace RPG::Client
{
	inline static constexpr unsigned int IChimeraDuelLevelDataExtensions_TypeDefinitionIndex = 51416;

	class IChimeraDuelLevelDataExtensions : public ::System::Object
	{
	public:
		static ::RPG::Client::IChimeraDuelSkillData* _TryGetFirstSkillData(::RPG::Client::IChimeraDuelChimeraLevelData* self, ::System::Predicate_1<::RPG::Client::IChimeraDuelSkillData*>* predicate)
		{
			return ((::RPG::Client::IChimeraDuelSkillData*(*)(::RPG::Client::IChimeraDuelChimeraLevelData*, ::System::Predicate_1<::RPG::Client::IChimeraDuelSkillData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS__TRYGETFIRSTSKILLDATA_OFFSET))(self, predicate);
		}

		static ::RPG::Client::IChimeraDuelSkillData* TryGetShopSkillData(::RPG::Client::IChimeraDuelChimeraLevelData* self)
		{
			return ((::RPG::Client::IChimeraDuelSkillData*(*)(::RPG::Client::IChimeraDuelChimeraLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS_TRYGETSHOPSKILLDATA_OFFSET))(self);
		}

		static ::RPG::Client::IChimeraDuelSkillData* TryGetBattleSkillData(::RPG::Client::IChimeraDuelChimeraLevelData* self)
		{
			return ((::RPG::Client::IChimeraDuelSkillData*(*)(::RPG::Client::IChimeraDuelChimeraLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS_TRYGETBATTLESKILLDATA_OFFSET))(self);
		}

		static ::RPG::Client::IChimeraDuelSkillData* TryGetSkillDataForDisplay(::RPG::Client::IChimeraDuelChimeraLevelData* self)
		{
			return ((::RPG::Client::IChimeraDuelSkillData*(*)(::RPG::Client::IChimeraDuelChimeraLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS_TRYGETSKILLDATAFORDISPLAY_OFFSET))(self);
		}
	};
}
