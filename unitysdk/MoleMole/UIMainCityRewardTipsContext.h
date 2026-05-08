#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_0D6706375CDAAE8C;

#define MOLEMOLE_UIMAINCITYREWARDTIPSCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x163CF290)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityRewardTipsContext_TypeDefinitionIndex = 66360;

	class UIMainCityRewardTipsContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_0D6706375CDAAE8C* itemData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
