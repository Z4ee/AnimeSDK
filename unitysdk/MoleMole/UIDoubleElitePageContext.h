#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIDOUBLEELITEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1856D520)

namespace MoleMole
{
	inline static constexpr unsigned int UIDoubleElitePageContext_TypeDefinitionIndex = 46845;

	class UIDoubleElitePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 initChapterId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
