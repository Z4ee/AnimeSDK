#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F4CDE062CC14CF12.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UICINEMAPREPPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x176F5440)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaPrepPageContext_TypeDefinitionIndex = 63623;

	class UICinemaPrepPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_F4CDE062CC14CF12 cinemaJumpState; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPREPPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
