#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIFORBIDDENAREATALENTBRANCHLINKWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x183F0D20)

namespace MoleMole
{
	inline static constexpr unsigned int UIForbiddenAreaTalentBranchLinkWidgetContext_TypeDefinitionIndex = 76956;

	class UIForbiddenAreaTalentBranchLinkWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 FirstTalentID; // 0x28
		::System::Int32 SecondTalentID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREATALENTBRANCHLINKWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
