#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F4CDE062CC14CF12.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UICINEMAPREPV2PAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1869A830)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaPrepV2PageContext_TypeDefinitionIndex = 78071;

	class UICinemaPrepV2PageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_F4CDE062CC14CF12 cinemaJumpState; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPREPV2PAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
