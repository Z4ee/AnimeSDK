#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DE1F9F8297133D40.h"

namespace RPG::Client::ParkourGame { class ParkourSkillConfig_Fireworks; }

#define CLASS_3_1AA3B90FDD85D7A1_METHOD_3_15EA069EF488C01E_OFFSET UNITYSDK_OFFSET(0x1A434020)
#define CLASS_3_1AA3B90FDD85D7A1_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1A4340A0)
#define CLASS_3_1AA3B90FDD85D7A1_METHOD_3_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x1A433E10)
#define CLASS_3_1AA3B90FDD85D7A1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4340E0)

inline static constexpr unsigned int Class_3_1AA3B90FDD85D7A1_TypeDefinitionIndex = 74083;

class Class_3_1AA3B90FDD85D7A1 : public ::Class_2_DE1F9F8297133D40
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1AA3B90FDD85D7A1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1AA3B90FDD85D7A1_METHOD_3_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Boolean Method_3_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1AA3B90FDD85D7A1_METHOD_3_391A84BCD9F51317_OFFSET))(this);
	}

	::RPG::Client::ParkourGame::ParkourSkillConfig_Fireworks* Method_3_15EA069EF488C01E()
	{
		return ((::RPG::Client::ParkourGame::ParkourSkillConfig_Fireworks*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1AA3B90FDD85D7A1_METHOD_3_15EA069EF488C01E_OFFSET))(this);
	}
};
