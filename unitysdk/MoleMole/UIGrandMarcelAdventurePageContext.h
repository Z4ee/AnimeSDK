#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIGrandMarcelAdventurePageContext_RoomType.h"

#define MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19F087E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGrandMarcelAdventurePageContext_TypeDefinitionIndex = 48044;

	class UIGrandMarcelAdventurePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 GroupID; // 0x28
		::MoleMole::UIGrandMarcelAdventurePageContext_RoomType Type; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
