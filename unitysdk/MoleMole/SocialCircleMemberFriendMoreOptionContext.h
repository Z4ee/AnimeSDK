#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FriendMoreOptionContext.h"

class Class_2_D02DABCF41CDA271;
class Class_2_E23E4CB2769CC93F;

#define MOLEMOLE_SOCIALCIRCLEMEMBERFRIENDMOREOPTIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10824C70)

namespace MoleMole
{
	inline static constexpr unsigned int SocialCircleMemberFriendMoreOptionContext_TypeDefinitionIndex = 67714;

	class SocialCircleMemberFriendMoreOptionContext : public ::MoleMole::FriendMoreOptionContext
	{
	public:
		::Class_2_E23E4CB2769CC93F* CircleData; // 0x48
		::Class_2_D02DABCF41CDA271* CircleMemberData; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SOCIALCIRCLEMEMBERFRIENDMOREOPTIONCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
