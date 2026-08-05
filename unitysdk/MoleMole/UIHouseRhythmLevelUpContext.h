#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIHOUSERHYTHMLEVELUPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1899C730)

namespace MoleMole
{
	inline static constexpr unsigned int UIHouseRhythmLevelUpContext_TypeDefinitionIndex = 82054;

	class UIHouseRhythmLevelUpContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 headid; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMLEVELUPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
