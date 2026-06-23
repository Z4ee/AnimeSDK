#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15F113B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastMessagePageContext_TypeDefinitionIndex = 72241;

	class UIOverlordFeastMessagePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 TargetDevID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
