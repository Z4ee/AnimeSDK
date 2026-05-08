#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13788320)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuidePageContext_TypeDefinitionIndex = 47638;

	class UIStrategyGuidePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean IsPreviewMode; // 0x28
		::System::UInt32 AvatarID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
