#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_CC4E0266200BC27D;

#define MOLEMOLE_UIAREASHOPROLEWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13EFA780)

namespace MoleMole
{
	inline static constexpr unsigned int UIAreaShopRoleWidgetContext_TypeDefinitionIndex = 51697;

	class UIAreaShopRoleWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_CC4E0266200BC27D* DBattleFighter; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPROLEWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
