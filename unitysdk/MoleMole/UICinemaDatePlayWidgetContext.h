#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_1AEF5DFE7F1C8F89;

#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12F7BFE0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaDatePlayWidgetContext_TypeDefinitionIndex = 55809;

	class UICinemaDatePlayWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_1AEF5DFE7F1C8F89* datePlayController; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
