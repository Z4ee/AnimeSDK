#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_791;
namespace RPG::Client { class FateGameData; }
namespace RPG::Client { class IFateGameMasterInfoItem; }
namespace RPG::Client { class IFateGameRoundSettleDmgSourceItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEHELPER_BUILDDMGSOURCES_OFFSET UNITYSDK_OFFSET(0x1A5A62A0)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEHELPER__CREATEBUILDER_OFFSET UNITYSDK_OFFSET(0x1A5A6410)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameRoundSettleDmgSourceHelper_TypeDefinitionIndex = 61142;

	class FateGameRoundSettleDmgSourceHelper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::IFateGameRoundSettleDmgSourceItem*>* BuildDmgSources(::RPG::Client::IFateGameMasterInfoItem* a1, ::RPG::Client::FateGameData* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IFateGameRoundSettleDmgSourceItem*>*(*)(::RPG::Client::IFateGameMasterInfoItem*, ::RPG::Client::FateGameData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEHELPER_BUILDDMGSOURCES_OFFSET))(a1, a2);
		}

		static ::Class_0_16E4307DCC419505_791* _CreateBuilder(::RPG::Client::IFateGameMasterInfoItem* a1)
		{
			return ((::Class_0_16E4307DCC419505_791*(*)(::RPG::Client::IFateGameMasterInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEHELPER__CREATEBUILDER_OFFSET))(a1);
		}
	};
}
