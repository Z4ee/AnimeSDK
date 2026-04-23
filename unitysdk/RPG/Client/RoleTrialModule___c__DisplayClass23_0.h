#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RoleTrialEntranceData; }

#define RPG_CLIENT_ROLETRIALMODULE___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB12D7A0)
#define RPG_CLIENT_ROLETRIALMODULE___C__DISPLAYCLASS23_0__GETROLETRIALENTRANCEDATA_B__0_OFFSET UNITYSDK_OFFSET(0xB12E710)

namespace RPG::Client
{
	inline static constexpr unsigned int RoleTrialModule___c__DisplayClass23_0_TypeDefinitionIndex = 62577;

	class RoleTrialModule___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::UInt32 avatarID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRoleTrialEntranceData_b__0(::RPG::Client::RoleTrialEntranceData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RoleTrialEntranceData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE___C__DISPLAYCLASS23_0__GETROLETRIALENTRANCEDATA_B__0_OFFSET))(this, data);
		}
	};
}
