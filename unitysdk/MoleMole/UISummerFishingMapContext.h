#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UISUMMERFISHINGMAPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1379B2A0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishingMapContext_TypeDefinitionIndex = 57679;

	class UISummerFishingMapContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* goFishingAction; // 0x28
		::System::Boolean isOpenByNpc; // 0x30
		::System::Boolean showMainBtn; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHINGMAPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
