#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_DA3A8DDFF1297CFF;

#define MOLEMOLE_UICREATEROLEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x166B7160)

namespace MoleMole
{
	inline static constexpr unsigned int UICreateRolePageContext_TypeDefinitionIndex = 57154;

	class UICreateRolePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_DA3A8DDFF1297CFF* procedureConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
