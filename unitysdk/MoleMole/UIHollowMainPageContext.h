#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIHOLLOWMAINPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15A3B1C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageContext_TypeDefinitionIndex = 82496;

	class UIHollowMainPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 fromBattle; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
