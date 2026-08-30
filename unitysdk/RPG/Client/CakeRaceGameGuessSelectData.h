#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CAKERACEGAMEGUESSSELECTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C648790)
#define RPG_CLIENT_CAKERACEGAMEGUESSSELECTDATA_GET_CATID_OFFSET UNITYSDK_OFFSET(0x1C648770)
#define RPG_CLIENT_CAKERACEGAMEGUESSSELECTDATA_GET_COSTTICKETCOUNT_OFFSET UNITYSDK_OFFSET(0x1C648780)
#define RPG_CLIENT_CAKERACEGAMEGUESSSELECTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C648810)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceGameGuessSelectData_TypeDefinitionIndex = 63111;

	class CakeRaceGameGuessSelectData : public ::System::Object
	{
	public:
		::System::UInt32 _CostTicketCount_k__BackingField; // 0x10
		::System::UInt32 _CatID_k__BackingField; // 0x14

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSSELECTDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_CatID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSSELECTDATA_GET_CATID_OFFSET))(this);
		}

		::System::UInt32 get_CostTicketCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSSELECTDATA_GET_COSTTICKETCOUNT_OFFSET))(this);
		}

		static ::RPG::Client::CakeRaceGameGuessSelectData* Create(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::CakeRaceGameGuessSelectData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSSELECTDATA_CREATE_OFFSET))(a1, a2);
		}
	};
}
