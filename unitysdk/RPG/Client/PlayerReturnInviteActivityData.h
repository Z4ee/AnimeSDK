#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_PLAYERRETURNINVITEACTIVITYDATA_ISEXTRACONDSATISFY_OFFSET UNITYSDK_OFFSET(0xDBB2940)
#define RPG_CLIENT_PLAYERRETURNINVITEACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xDBB29E0)
#define RPG_CLIENT_PLAYERRETURNINVITEACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDBB2930)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerReturnInviteActivityData_TypeDefinitionIndex = 61742;

	class PlayerReturnInviteActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNINVITEACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsExtraCondSatisfy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNINVITEACTIVITYDATA_ISEXTRACONDSATISFY_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNINVITEACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}
	};
}
