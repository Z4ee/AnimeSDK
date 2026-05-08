#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYAETHERXROLEPOOLDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11E20E50)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityAetherXRolePoolDialogContext_TypeDefinitionIndex = 60636;

	class UIActivityAetherXRolePoolDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 RoleIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXROLEPOOLDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
