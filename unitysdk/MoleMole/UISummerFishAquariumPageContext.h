#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISUMMERFISHAQUARIUMPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14811270)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishAquariumPageContext_TypeDefinitionIndex = 61015;

	class UISummerFishAquariumPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean IsFromNpc; // 0x28
		::System::Boolean IsLeftCamera; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHAQUARIUMPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
