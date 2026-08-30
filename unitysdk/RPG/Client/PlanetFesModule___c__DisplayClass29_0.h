#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesActiveBuff; }

#define RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2BBEF0)
#define RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS29_0__GETACTIVEBUFFBYID_B__0_OFFSET UNITYSDK_OFFSET(0x1C2BBF00)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesModule___c__DisplayClass29_0_TypeDefinitionIndex = 66682;

	class PlanetFesModule___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetActiveBuffByID_b__0(::RPG::Client::PlanetFesActiveBuff* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesActiveBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS29_0__GETACTIVEBUFFBYID_B__0_OFFSET))(this, a1);
		}
	};
}
