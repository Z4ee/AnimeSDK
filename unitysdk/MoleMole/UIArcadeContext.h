#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F14353CDB5299CE3.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIARCADECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1600AC30)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeContext_TypeDefinitionIndex = 86147;

	class UIArcadeContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_F14353CDB5299CE3 JumpType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
