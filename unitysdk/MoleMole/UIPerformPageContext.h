#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_43BD383C98B4C0C5_68;

#define MOLEMOLE_UIPERFORMPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x145409C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPerformPageContext_TypeDefinitionIndex = 68588;

	class UIPerformPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_43BD383C98B4C0C5_68* performParam; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
