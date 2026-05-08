#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIFORBIDDENAREAPREPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15F77410)

namespace MoleMole
{
	inline static constexpr unsigned int UIForbiddenAreaPrepContext_TypeDefinitionIndex = 51825;

	class UIForbiddenAreaPrepContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREAPREPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
