#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_602E5926BBE69120.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISDKLOGINCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17A2DB10)

namespace MoleMole
{
	inline static constexpr unsigned int UISDKLoginContext_TypeDefinitionIndex = 88958;

	class UISDKLoginContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_602E5926BBE69120 enterGameState; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISDKLOGINCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
