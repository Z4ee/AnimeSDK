#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGachaPoolData.h"

#define RPG_CLIENT_LIMITEDGACHAPOOLDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0xBDBAC80)
#define RPG_CLIENT_LIMITEDGACHAPOOLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBDBAC70)
#define RPG_CLIENT_LIMITEDGACHAPOOLDATA___IFIXBASEPROXY_ISVALID_OFFSET UNITYSDK_OFFSET(0xBDBAD70)

namespace RPG::Client
{
	inline static constexpr unsigned int LimitedGachaPoolData_TypeDefinitionIndex = 60105;

	class LimitedGachaPoolData : public ::RPG::Client::BaseGachaPoolData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMITEDGACHAPOOLDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMITEDGACHAPOOLDATA_ISVALID_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMITEDGACHAPOOLDATA___IFIXBASEPROXY_ISVALID_OFFSET))(this);
		}
	};
}
