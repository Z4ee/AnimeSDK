#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FriendMoreOptionContext.h"

class Class_2_D02DABCF41CDA271;
class Class_2_DF2C726EEEEC912D;

#define MOLEMOLE_SOCIALCIRCLEMEMBERFRIENDMOREOPTIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12FB00E0)

namespace MoleMole
{
	inline static constexpr unsigned int SocialCircleMemberFriendMoreOptionContext_TypeDefinitionIndex = 74775;

	class SocialCircleMemberFriendMoreOptionContext : public ::MoleMole::FriendMoreOptionContext
	{
	public:
		::Class_2_DF2C726EEEEC912D* CircleData; // 0x48
		::Class_2_D02DABCF41CDA271* CircleMemberData; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SOCIALCIRCLEMEMBERFRIENDMOREOPTIONCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
