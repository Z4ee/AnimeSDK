#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CAKERACEGAMEGUESSSELECTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9F02A00)
#define RPG_CLIENT_CAKERACEGAMEGUESSSELECTDATA_GET_CATID_OFFSET UNITYSDK_OFFSET(0x9F029E0)
#define RPG_CLIENT_CAKERACEGAMEGUESSSELECTDATA_GET_COSTTICKETCOUNT_OFFSET UNITYSDK_OFFSET(0x9F029F0)
#define RPG_CLIENT_CAKERACEGAMEGUESSSELECTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F02A80)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceGameGuessSelectData_TypeDefinitionIndex = 58076;

	class CakeRaceGameGuessSelectData : public ::System::Object
	{
	public:
		::System::UInt32 _CatID_k__BackingField; // 0x10
		::System::UInt32 _CostTicketCount_k__BackingField; // 0x14

		::System::Void _ctor(::System::UInt32 catID, ::System::UInt32 costTicketCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSSELECTDATA__CTOR_OFFSET))(this, catID, costTicketCount);
		}

		::System::UInt32 get_CatID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSSELECTDATA_GET_CATID_OFFSET))(this);
		}

		::System::UInt32 get_CostTicketCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSSELECTDATA_GET_COSTTICKETCOUNT_OFFSET))(this);
		}

		static ::RPG::Client::CakeRaceGameGuessSelectData* Create(::System::UInt32 catID, ::System::UInt32 costTicketCount)
		{
			return ((::RPG::Client::CakeRaceGameGuessSelectData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSSELECTDATA_CREATE_OFFSET))(catID, costTicketCount);
		}
	};
}
