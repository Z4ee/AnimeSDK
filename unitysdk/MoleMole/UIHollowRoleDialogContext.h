#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIHOLLOWROLEDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17DBFE50)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowRoleDialogContext_TypeDefinitionIndex = 45517;

	class UIHollowRoleDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 avatarID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWROLEDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
