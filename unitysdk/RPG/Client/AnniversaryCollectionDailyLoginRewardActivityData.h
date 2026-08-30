#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DailyLoginRewardActivityData.h"

#define RPG_CLIENT_ANNIVERSARYCOLLECTIONDAILYLOGINREWARDACTIVITYDATA_ISEXTRACONDSATISFY_OFFSET UNITYSDK_OFFSET(0xC76B870)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONDAILYLOGINREWARDACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC76B860)

namespace RPG::Client
{
	inline static constexpr unsigned int AnniversaryCollectionDailyLoginRewardActivityData_TypeDefinitionIndex = 61685;

	class AnniversaryCollectionDailyLoginRewardActivityData : public ::RPG::Client::DailyLoginRewardActivityData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONDAILYLOGINREWARDACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsExtraCondSatisfy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONDAILYLOGINREWARDACTIVITYDATA_ISEXTRACONDSATISFY_OFFSET))(this);
		}
	};
}
