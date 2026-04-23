#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ITEMCOMPOSEMODULE___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA65B420)
#define RPG_CLIENT_ITEMCOMPOSEMODULE___C__DISPLAYCLASS31_0___REFRESHUNLOCKMAINTYPEVIEWED_B__0_OFFSET UNITYSDK_OFFSET(0xA65B7F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemComposeModule___c__DisplayClass31_0_TypeDefinitionIndex = 60535;

	class ItemComposeModule___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::System::UInt32 typeID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __RefreshUnlockMainTypeViewed_b__0(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE___C__DISPLAYCLASS31_0___REFRESHUNLOCKMAINTYPEVIEWED_B__0_OFFSET))(this, id);
		}
	};
}
