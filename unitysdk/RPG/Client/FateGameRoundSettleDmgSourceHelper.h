#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_614;
namespace RPG::Client { class FateGameData; }
namespace RPG::Client { class IFateGameMasterInfoItem; }
namespace RPG::Client { class IFateGameRoundSettleDmgSourceItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEHELPER_BUILDDMGSOURCES_OFFSET UNITYSDK_OFFSET(0x96892E0)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEHELPER__CREATEBUILDER_OFFSET UNITYSDK_OFFSET(0x9689400)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameRoundSettleDmgSourceHelper_TypeDefinitionIndex = 51978;

	class FateGameRoundSettleDmgSourceHelper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::IFateGameRoundSettleDmgSourceItem*>* BuildDmgSources(::RPG::Client::IFateGameMasterInfoItem* master, ::RPG::Client::FateGameData* gameData)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IFateGameRoundSettleDmgSourceItem*>*(*)(::RPG::Client::IFateGameMasterInfoItem*, ::RPG::Client::FateGameData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEHELPER_BUILDDMGSOURCES_OFFSET))(master, gameData);
		}

		static ::Class_0_16E4307DCC419505_614* _CreateBuilder(::RPG::Client::IFateGameMasterInfoItem* master)
		{
			return ((::Class_0_16E4307DCC419505_614*(*)(::RPG::Client::IFateGameMasterInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEHELPER__CREATEBUILDER_OFFSET))(master);
		}
	};
}
