#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DailyLoginRewardActivityData.h"

#define RPG_CLIENT_ANNIVERSARYCOLLECTIONDAILYLOGINREWARDACTIVITYDATA_ISEXTRACONDSATISFY_OFFSET UNITYSDK_OFFSET(0xB31A300)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONDAILYLOGINREWARDACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB31A2F0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONDAILYLOGINREWARDACTIVITYDATA___IFIXBASEPROXY_ISEXTRACONDSATISFY_OFFSET UNITYSDK_OFFSET(0xB31A510)

namespace RPG::Client
{
	inline static constexpr unsigned int AnniversaryCollectionDailyLoginRewardActivityData_TypeDefinitionIndex = 57592;

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

		::System::Boolean __iFixBaseProxy_IsExtraCondSatisfy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONDAILYLOGINREWARDACTIVITYDATA___IFIXBASEPROXY_ISEXTRACONDSATISFY_OFFSET))(this);
		}
	};
}
