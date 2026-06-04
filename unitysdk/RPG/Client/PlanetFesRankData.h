#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesRankDataItem; }
namespace RPG::Client { class PlanetFesRankData_IServerAgent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESRANKDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC479E70)
#define RPG_CLIENT_PLANETFESRANKDATA_GET_PERSONALRANK_OFFSET UNITYSDK_OFFSET(0xC479F30)
#define RPG_CLIENT_PLANETFESRANKDATA_GET_SORTEDRANK_OFFSET UNITYSDK_OFFSET(0xC479EE0)
#define RPG_CLIENT_PLANETFESRANKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC479ED0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesRankData_TypeDefinitionIndex = 62319;

	class PlanetFesRankData : public ::System::Object
	{
	public:
		::RPG::Client::PlanetFesRankData_IServerAgent* _Agent; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESRANKDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesRankData* Create(::RPG::Client::PlanetFesRankData_IServerAgent* a1)
		{
			return ((::RPG::Client::PlanetFesRankData*(*)(::RPG::Client::PlanetFesRankData_IServerAgent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESRANKDATA_CREATE_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesRankDataItem*>* get_SortedRank()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesRankDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESRANKDATA_GET_SORTEDRANK_OFFSET))(this);
		}

		::RPG::Client::PlanetFesRankDataItem* get_PersonalRank()
		{
			return ((::RPG::Client::PlanetFesRankDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESRANKDATA_GET_PERSONALRANK_OFFSET))(this);
		}
	};
}
