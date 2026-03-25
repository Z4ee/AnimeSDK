#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGachaPoolData.h"

#define RPG_CLIENT_LIMITEDGACHAPOOLDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0x997FCA0)
#define RPG_CLIENT_LIMITEDGACHAPOOLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x997FC90)
#define RPG_CLIENT_LIMITEDGACHAPOOLDATA___IFIXBASEPROXY_ISVALID_OFFSET UNITYSDK_OFFSET(0x997FD90)

namespace RPG::Client
{
	inline static constexpr unsigned int LimitedGachaPoolData_TypeDefinitionIndex = 52219;

	class LimitedGachaPoolData : public ::RPG::Client::BaseGachaPoolData
	{
	public:
		::System::Void _ctor(::System::UInt32 gachaID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMITEDGACHAPOOLDATA__CTOR_OFFSET))(this, gachaID);
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
