#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2D58D21437466336.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_BE6BF7909AD9D940;
class Class_2_E23E4CB2769CC93F;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIARCADEFRIENDINVITECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x192875E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeFriendInviteContext_TypeDefinitionIndex = 80090;

	class UIArcadeFriendInviteContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::Class_1_BE6BF7909AD9D940*>* OnClickFriend; // 0x28
		::System::Action_1<::Class_2_E23E4CB2769CC93F*>* OnClickCircle; // 0x30
		::System::Int32 InitSelectTabIdx; // 0x38
		::Enum_3_2D58D21437466336 InteractType; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEFRIENDINVITECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
