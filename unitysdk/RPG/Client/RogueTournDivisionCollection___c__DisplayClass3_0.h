#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournDivisionData; }

#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA389CF0)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION___C__DISPLAYCLASS3_0__GETDIVISIONDATA_B__0_OFFSET UNITYSDK_OFFSET(0xA38A8D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournDivisionCollection___c__DisplayClass3_0_TypeDefinitionIndex = 55108;

	class RogueTournDivisionCollection___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt32 divisionLevel; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetDivisionData_b__0(::RPG::Client::RogueTournDivisionData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournDivisionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION___C__DISPLAYCLASS3_0__GETDIVISIONDATA_B__0_OFFSET))(this, x);
		}
	};
}
