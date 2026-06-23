#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISUMMERFISHINGCOLLECTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x156C2BC0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishingCollectContext_TypeDefinitionIndex = 56159;

	class UISummerFishingCollectContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean isOpenByNpc; // 0x28
		::System::Int32 defaultTabID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHINGCOLLECTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
