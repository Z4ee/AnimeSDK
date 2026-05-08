#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_BE6BF7909AD9D940;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIINGAMEINVITEFRIENDROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x162F02B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInGameInviteFriendRowContext_TypeDefinitionIndex = 41057;

	class UIInGameInviteFriendRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_BE6BF7909AD9D940* friendBriefInfo; // 0x28
		::System::Action_1<::Class_1_BE6BF7909AD9D940*>* OnClickFriend; // 0x30
		::System::Boolean IsFriendInRoom; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINGAMEINVITEFRIENDROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
