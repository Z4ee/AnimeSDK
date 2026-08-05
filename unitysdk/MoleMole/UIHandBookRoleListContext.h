#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIHANDBOOKROLELISTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18981760)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookRoleListContext_TypeDefinitionIndex = 84875;

	class UIHandBookRoleListContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 TargetItemID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKROLELISTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
