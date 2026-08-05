#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_912CABDA75E684D1.h"
#include "unitysdk/Enum_3_C96DD177C1F2A967.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/Nullable_1.h"

#define MOLEMOLE_UIZENKOVPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15B12240)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovPageController_Context_TypeDefinitionIndex = 76756;

	class UIZenkovPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean InitOpenMissionPage; // 0x28
		::Enum_3_912CABDA75E684D1 InitBuildingType; // 0x2C
		::System::Int32 NewbieID; // 0x30
		::System::Int32 InitDungeonId; // 0x34
		::System::Nullable_1<::Enum_3_C96DD177C1F2A967> InitDelegateSubType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
