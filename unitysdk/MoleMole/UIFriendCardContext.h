#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E4F1098F508CC7DC_Enum_3_D311A4070E6E7A7A.h"
#include "unitysdk/Enum_3_F3B35B60B7BAFCAF_1.h"
#include "unitysdk/Enum_3_F79A436E91A3822C.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/Share/ENotificationBadgeType.h"

class Class_1_BE6BF7909AD9D940;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIFRIENDCARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15A66060)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendCardContext_TypeDefinitionIndex = 83464;

	class UIFriendCardContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_BE6BF7909AD9D940* info; // 0x28
		::NodeGraph::VariantUnion subKey; // 0x30
		::System::Action_1<::Class_1_BE6BF7909AD9D940*>* onClickSendMessage; // 0x40
		::System::Int32 ModuleID; // 0x48
		::Enum_3_F3B35B60B7BAFCAF_1 IdentityType; // 0x4C
		::Class_1_E4F1098F508CC7DC_Enum_3_D311A4070E6E7A7A FromModule; // 0x50
		::Share::ENotificationBadgeType notificationBadgeType; // 0x54
		::System::Boolean isShowingPlatform; // 0x58
		::Enum_3_F79A436E91A3822C DisplayTag; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
