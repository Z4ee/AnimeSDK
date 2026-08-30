#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_CLIENT_MULTIPLEDROPTIMESDATA_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0xD8EC5B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MultipleDropTimesData_TypeDefinitionIndex = 66357;

	struct alignas(4) MultipleDropTimesData
	{
		::System::UInt32 TotalTimes; // 0x10
		::System::UInt32 RemainTimes; // 0x14

		static ::RPG::Client::MultipleDropTimesData op_Addition(::RPG::Client::MultipleDropTimesData a1, ::RPG::Client::MultipleDropTimesData a2)
		{
			return ((::RPG::Client::MultipleDropTimesData(*)(::RPG::Client::MultipleDropTimesData, ::RPG::Client::MultipleDropTimesData))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPTIMESDATA_OP_ADDITION_OFFSET))(a1, a2);
		}
	};
}
