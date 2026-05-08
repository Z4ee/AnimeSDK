#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIHOLLOWROLEDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15268FA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowRoleDialogContext_TypeDefinitionIndex = 81398;

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
