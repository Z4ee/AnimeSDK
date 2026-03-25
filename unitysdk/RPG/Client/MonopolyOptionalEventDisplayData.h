#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_556;

#define RPG_CLIENT_MONOPOLYOPTIONALEVENTDISPLAYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9D757E0)
#define RPG_CLIENT_MONOPOLYOPTIONALEVENTDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9D75870)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyOptionalEventDisplayData_TypeDefinitionIndex = 53898;

	class MonopolyOptionalEventDisplayData : public ::System::Object
	{
	public:
		::System::UInt32 EventID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYOPTIONALEVENTDISPLAYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MonopolyOptionalEventDisplayData* Create(::Class_1_FA4F4A67B1C04320_556* contentInfo)
		{
			return ((::RPG::Client::MonopolyOptionalEventDisplayData*(*)(::Class_1_FA4F4A67B1C04320_556*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYOPTIONALEVENTDISPLAYDATA_CREATE_OFFSET))(contentInfo);
		}
	};
}
