#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowItemOptionsUpGradeControllerContext.h"

#define MOLEMOLE_UIHOLLOWRELICOPTIONSUPGRADECONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x150CCA60)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowRelicOptionsUpGradeControllerContext_TypeDefinitionIndex = 57600;

	class UIHollowRelicOptionsUpGradeControllerContext : public ::MoleMole::UIHollowItemOptionsUpGradeControllerContext
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRELICOPTIONSUPGRADECONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
