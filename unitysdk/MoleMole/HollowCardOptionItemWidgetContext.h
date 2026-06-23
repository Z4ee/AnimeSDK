#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_HOLLOWCARDOPTIONITEMWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17E82DA0)

namespace MoleMole
{
	inline static constexpr unsigned int HollowCardOptionItemWidgetContext_TypeDefinitionIndex = 63951;

	class HollowCardOptionItemWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean canSelected; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCARDOPTIONITEMWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
