#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIFriendCardContext.h"

class Class_2_1E137DD457416AF2;
class Class_2_E23E4CB2769CC93F;

#define MOLEMOLE_UISOCIALCIRCLEAPPLYFRIENDCARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15F7ACB0)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleApplyFriendCardContext_TypeDefinitionIndex = 47041;

	class UISocialCircleApplyFriendCardContext : public ::MoleMole::UIFriendCardContext
	{
	public:
		::Class_2_1E137DD457416AF2* CircleMemberApplyData; // 0x68
		::Class_2_E23E4CB2769CC93F* CircleData; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEAPPLYFRIENDCARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
