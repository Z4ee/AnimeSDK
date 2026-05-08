#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIFORBIDDENAREATALENTLINKWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1698F8C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIForbiddenAreaTalentLinkWidgetContext_TypeDefinitionIndex = 48146;

	class UIForbiddenAreaTalentLinkWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 SecondTalentID; // 0x28
		::System::Int32 FirstTalentID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREATALENTLINKWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
