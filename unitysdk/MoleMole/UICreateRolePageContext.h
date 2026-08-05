#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_DC5B0B6094D33899;

#define MOLEMOLE_UICREATEROLEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x180429F0)

namespace MoleMole
{
	inline static constexpr unsigned int UICreateRolePageContext_TypeDefinitionIndex = 41816;

	class UICreateRolePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_DC5B0B6094D33899* procedureConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
