#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBubbleTips.h"

#define MOLEMOLE_UITIMEREGIONSWITCHING_ONPROCESS_OFFSET UNITYSDK_OFFSET(0xF626FC0)
#define MOLEMOLE_UITIMEREGIONSWITCHING__CTOR_OFFSET UNITYSDK_OFFSET(0xF626F80)
#define MOLEMOLE_UITIMEREGIONSWITCHING___BASE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0xF627120)

namespace MoleMole
{
	inline static constexpr unsigned int UITimeRegionSwitching_TypeDefinitionIndex = 72074;

	class UITimeRegionSwitching : public ::MoleMole::UIBubbleTips
	{
	public:
		::System::Void _ctor(::System::Int32 tipid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITIMEREGIONSWITCHING__CTOR_OFFSET))(this, tipid);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITIMEREGIONSWITCHING_ONPROCESS_OFFSET))(this);
		}

		::System::Void __base_OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITIMEREGIONSWITCHING___BASE_ONPROCESS_OFFSET))(this);
		}
	};
}
