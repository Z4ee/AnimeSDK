#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_681;

#define RPG_CLIENT_MONOPOLYOPTIONALEVENTDISPLAYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x19549040)
#define RPG_CLIENT_MONOPOLYOPTIONALEVENTDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x195490D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyOptionalEventDisplayData_TypeDefinitionIndex = 63341;

	class MonopolyOptionalEventDisplayData : public ::System::Object
	{
	public:
		::System::UInt32 EventID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYOPTIONALEVENTDISPLAYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MonopolyOptionalEventDisplayData* Create(::Class_1_D17272E82AE804C2_681* a1)
		{
			return ((::RPG::Client::MonopolyOptionalEventDisplayData*(*)(::Class_1_D17272E82AE804C2_681*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYOPTIONALEVENTDISPLAYDATA_CREATE_OFFSET))(a1);
		}
	};
}
