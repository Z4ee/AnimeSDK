#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirNodeInstance; }

#define RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC3AE730)
#define RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE___C__DISPLAYCLASS23_0__GETNODEINSTANCE_B__0_OFFSET UNITYSDK_OFFSET(0xC3AE7D0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirAreaInstance___c__DisplayClass23_0_TypeDefinitionIndex = 73634;

	class PixAirAreaInstance___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::UInt32 nodeID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetNodeInstance_b__0(::RPG::Client::PixAir::PixAirNodeInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PixAir::PixAirNodeInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE___C__DISPLAYCLASS23_0__GETNODEINSTANCE_B__0_OFFSET))(this, a1);
		}
	};
}
