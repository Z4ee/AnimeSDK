#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2924E454126F7D2D.h"
#include "unitysdk/Enum_3_FAB99F91A71685BE.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIHOLLOWITEMDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15CBFB20)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowItemDialogContext_TypeDefinitionIndex = 72277;

	class UIHollowItemDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* closeCallback; // 0x28
		::System::Action_2<::Enum_3_2924E454126F7D2D, ::System::Int32>* chooseCallback; // 0x30
		::System::Int32 newItemID; // 0x38
		::Enum_3_FAB99F91A71685BE type; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
