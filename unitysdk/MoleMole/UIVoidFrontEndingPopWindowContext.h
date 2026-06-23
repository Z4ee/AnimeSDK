#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIVOIDFRONTENDINGPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14906D40)

namespace MoleMole
{
	inline static constexpr unsigned int UIVoidFrontEndingPopWindowContext_TypeDefinitionIndex = 52015;

	class UIVoidFrontEndingPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean IsShowRecord; // 0x28
		::System::Int32 ID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTENDINGPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
