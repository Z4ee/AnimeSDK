#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowItemOptionsUpGradeControllerContext.h"

#define MOLEMOLE_UIHOLLOWRELICOPTIONSUPGRADECONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18F076E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowRelicOptionsUpGradeControllerContext_TypeDefinitionIndex = 79536;

	class UIHollowRelicOptionsUpGradeControllerContext : public ::MoleMole::UIHollowItemOptionsUpGradeControllerContext
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRELICOPTIONSUPGRADECONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
