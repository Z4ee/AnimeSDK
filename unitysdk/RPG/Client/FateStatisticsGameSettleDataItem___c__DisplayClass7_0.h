#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F1F83A16E5B8B459_1;
namespace RPG::Client { class FateBuffSlotData; }

#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x969F1D0)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM___C__DISPLAYCLASS7_0___SYNCBUFF_B__0_OFFSET UNITYSDK_OFFSET(0x969F720)

namespace RPG::Client
{
	inline static constexpr unsigned int FateStatisticsGameSettleDataItem___c__DisplayClass7_0_TypeDefinitionIndex = 52047;

	class FateStatisticsGameSettleDataItem___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::Class_1_F1F83A16E5B8B459_1* proto; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Int32 __SyncBuff_b__0(::RPG::Client::FateBuffSlotData* x, ::RPG::Client::FateBuffSlotData* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateBuffSlotData*, ::RPG::Client::FateBuffSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM___C__DISPLAYCLASS7_0___SYNCBUFF_B__0_OFFSET))(this, x, y);
		}
	};
}
