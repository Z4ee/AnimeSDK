#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIFriendCardContext.h"

class Class_2_D02DABCF41CDA271;
class Class_2_E23E4CB2769CC93F;

#define MOLEMOLE_UISOCIALCIRCLEFRIENDCARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18472910)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleFriendCardContext_TypeDefinitionIndex = 65230;

	class UISocialCircleFriendCardContext : public ::MoleMole::UIFriendCardContext
	{
	public:
		::Class_2_D02DABCF41CDA271* CircleMemberData; // 0x68
		::Class_2_E23E4CB2769CC93F* CircleData; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEFRIENDCARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
