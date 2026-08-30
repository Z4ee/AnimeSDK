#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ACTIVITYINVITEUTILS_ISACTIVITYINVITING_OFFSET UNITYSDK_OFFSET(0xC6155B0)
#define RPG_CLIENT_ACTIVITYINVITEUTILS_ISDISABLEINVITE_OFFSET UNITYSDK_OFFSET(0xC615450)
#define RPG_CLIENT_ACTIVITYINVITEUTILS_SETDISABLEINVITE_OFFSET UNITYSDK_OFFSET(0xC6154E0)
#define RPG_CLIENT_ACTIVITYINVITEUTILS_SETISACTIVITYINVITING_OFFSET UNITYSDK_OFFSET(0xC615640)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityInviteUtils_TypeDefinitionIndex = 61648;

	class ActivityInviteUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsDisableInvite()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYINVITEUTILS_ISDISABLEINVITE_OFFSET))();
		}

		static ::System::Void SetDisableInvite(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYINVITEUTILS_SETDISABLEINVITE_OFFSET))(a1);
		}

		static ::System::Boolean IsActivityInviting()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYINVITEUTILS_ISACTIVITYINVITING_OFFSET))();
		}

		static ::System::Void SetIsActivityInviting(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYINVITEUTILS_SETISACTIVITYINVITING_OFFSET))(a1);
		}
	};
}
