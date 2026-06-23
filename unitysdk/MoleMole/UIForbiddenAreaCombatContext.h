#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIFORBIDDENAREACOMBATCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x175D3F90)

namespace MoleMole
{
	inline static constexpr unsigned int UIForbiddenAreaCombatContext_TypeDefinitionIndex = 78570;

	class UIForbiddenAreaCombatContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 ForbiddenID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREACOMBATCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
