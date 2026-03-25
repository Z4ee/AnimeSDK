#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_PLAYERRETURNINVITEACTIVITYDATA_ISEXTRACONDSATISFY_OFFSET UNITYSDK_OFFSET(0x9FEE790)
#define RPG_CLIENT_PLAYERRETURNINVITEACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x9FEE830)
#define RPG_CLIENT_PLAYERRETURNINVITEACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9FEE780)
#define RPG_CLIENT_PLAYERRETURNINVITEACTIVITYDATA___IFIXBASEPROXY_ISEXTRACONDSATISFY_OFFSET UNITYSDK_OFFSET(0x9FEE910)
#define RPG_CLIENT_PLAYERRETURNINVITEACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x9FEE980)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerReturnInviteActivityData_TypeDefinitionIndex = 50013;

	class PlayerReturnInviteActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNINVITEACTIVITYDATA__CTOR_OFFSET))(this, id);
		}

		::System::Boolean IsExtraCondSatisfy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNINVITEACTIVITYDATA_ISEXTRACONDSATISFY_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNINVITEACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsExtraCondSatisfy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNINVITEACTIVITYDATA___IFIXBASEPROXY_ISEXTRACONDSATISFY_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNINVITEACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET))(this);
		}
	};
}
