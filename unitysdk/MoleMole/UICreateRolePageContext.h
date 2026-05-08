#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_30798CA871D0A37F;

#define MOLEMOLE_UICREATEROLEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x157D5F10)

namespace MoleMole
{
	inline static constexpr unsigned int UICreateRolePageContext_TypeDefinitionIndex = 74399;

	class UICreateRolePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_30798CA871D0A37F* procedureConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
