#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSINVITEFRIENDVIEWMODEL___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1857DDC0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSINVITEFRIENDVIEWMODEL___C__DISPLAYCLASS1_0__UPDATEFRIENDDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1857EF90)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSINVITEFRIENDVIEWMODEL___C__DISPLAYCLASS1_0__UPDATEFRIENDDATA_B__1_OFFSET UNITYSDK_OFFSET(0x1857EFC0)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersInviteFriendViewModel___c__DisplayClass1_0_TypeDefinitionIndex = 75097;

	class TeamTowersInviteFriendViewModel___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSINVITEFRIENDVIEWMODEL___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateFriendData_b__0(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSINVITEFRIENDVIEWMODEL___C__DISPLAYCLASS1_0__UPDATEFRIENDDATA_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateFriendData_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSINVITEFRIENDVIEWMODEL___C__DISPLAYCLASS1_0__UPDATEFRIENDDATA_B__1_OFFSET))(this);
		}
	};
}
