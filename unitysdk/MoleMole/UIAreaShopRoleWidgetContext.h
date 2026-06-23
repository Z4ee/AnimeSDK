#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_66C4D81440373C6E;

#define MOLEMOLE_UIAREASHOPROLEWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1733C2F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAreaShopRoleWidgetContext_TypeDefinitionIndex = 56567;

	class UIAreaShopRoleWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_66C4D81440373C6E* DBattleFighter; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPROLEWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
