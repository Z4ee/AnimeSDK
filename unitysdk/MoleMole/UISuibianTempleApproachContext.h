#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISUIBIANTEMPLEAPPROACHCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x157A7D70)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleApproachContext_TypeDefinitionIndex = 64652;

	class UISuibianTempleApproachContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 GroupID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEAPPROACHCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
