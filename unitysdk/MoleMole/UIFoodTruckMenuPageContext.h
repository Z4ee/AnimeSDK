#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18804970)

namespace MoleMole
{
	inline static constexpr unsigned int UIFoodTruckMenuPageContext_TypeDefinitionIndex = 64765;

	class UIFoodTruckMenuPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Boolean>* OnClose; // 0x28
		::System::Int32 GameId; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
