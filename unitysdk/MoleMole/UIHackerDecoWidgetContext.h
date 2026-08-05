#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIHACKERDECOWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19F09EC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHackerDecoWidgetContext_TypeDefinitionIndex = 78794;

	class UIHackerDecoWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 Idx; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERDECOWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
