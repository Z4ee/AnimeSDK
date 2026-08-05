#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x180B00D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssBackstageRelicInfoPopContext_TypeDefinitionIndex = 88500;

	class UIAbyssBackstageRelicInfoPopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 relicID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
