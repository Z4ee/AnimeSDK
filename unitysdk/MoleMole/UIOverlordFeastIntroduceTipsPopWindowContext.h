#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIOVERLORDFEASTINTRODUCETIPSPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17468630)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastIntroduceTipsPopWindowContext_TypeDefinitionIndex = 67077;

	class UIOverlordFeastIntroduceTipsPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 GameID; // 0x28
		::System::Int32 DishID; // 0x2C
		::System::Int32 GuestID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTINTRODUCETIPSPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
