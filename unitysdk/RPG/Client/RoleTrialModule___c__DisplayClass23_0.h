#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RoleTrialEntranceData; }

#define RPG_CLIENT_ROLETRIALMODULE___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDFD3D40)
#define RPG_CLIENT_ROLETRIALMODULE___C__DISPLAYCLASS23_0__GETROLETRIALENTRANCEDATA_B__0_OFFSET UNITYSDK_OFFSET(0xDFD4C80)

namespace RPG::Client
{
	inline static constexpr unsigned int RoleTrialModule___c__DisplayClass23_0_TypeDefinitionIndex = 67884;

	class RoleTrialModule___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::UInt32 avatarID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRoleTrialEntranceData_b__0(::RPG::Client::RoleTrialEntranceData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RoleTrialEntranceData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALMODULE___C__DISPLAYCLASS23_0__GETROLETRIALENTRANCEDATA_B__0_OFFSET))(this, a1);
		}
	};
}
