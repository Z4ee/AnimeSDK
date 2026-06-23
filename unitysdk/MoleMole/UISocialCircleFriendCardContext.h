#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIFriendCardContext.h"

class Class_2_D02DABCF41CDA271;
class Class_2_DF2C726EEEEC912D;

#define MOLEMOLE_UISOCIALCIRCLEFRIENDCARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16DBC700)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleFriendCardContext_TypeDefinitionIndex = 54744;

	class UISocialCircleFriendCardContext : public ::MoleMole::UIFriendCardContext
	{
	public:
		::Class_2_DF2C726EEEEC912D* CircleData; // 0x60
		::Class_2_D02DABCF41CDA271* CircleMemberData; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEFRIENDCARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
