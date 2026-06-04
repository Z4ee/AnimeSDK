#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGachaPoolData.h"

#define RPG_CLIENT_STANDARDGACHAPOOLDATA_HAVETIMELIMIT_OFFSET UNITYSDK_OFFSET(0xC91C8C0)
#define RPG_CLIENT_STANDARDGACHAPOOLDATA_ISFEATURECLOSED_OFFSET UNITYSDK_OFFSET(0xC91C800)
#define RPG_CLIENT_STANDARDGACHAPOOLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC91C7F0)
#define RPG_CLIENT_STANDARDGACHAPOOLDATA___IFIXBASEPROXY_HAVETIMELIMIT_OFFSET UNITYSDK_OFFSET(0xC91C910)
#define RPG_CLIENT_STANDARDGACHAPOOLDATA___IFIXBASEPROXY_ISFEATURECLOSED_OFFSET UNITYSDK_OFFSET(0xC91C900)

namespace RPG::Client
{
	inline static constexpr unsigned int StandardGachaPoolData_TypeDefinitionIndex = 60104;

	class StandardGachaPoolData : public ::RPG::Client::BaseGachaPoolData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STANDARDGACHAPOOLDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsFeatureClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STANDARDGACHAPOOLDATA_ISFEATURECLOSED_OFFSET))(this);
		}

		::System::Boolean HaveTimeLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STANDARDGACHAPOOLDATA_HAVETIMELIMIT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsFeatureClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STANDARDGACHAPOOLDATA___IFIXBASEPROXY_ISFEATURECLOSED_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_HaveTimeLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STANDARDGACHAPOOLDATA___IFIXBASEPROXY_HAVETIMELIMIT_OFFSET))(this);
		}
	};
}
