#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AlleyEventInfo.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ALLEYMODULE___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9CFC8C0)
#define RPG_CLIENT_ALLEYMODULE___C__DISPLAYCLASS24_0__PRINTEVENTINFO_B__0_OFFSET UNITYSDK_OFFSET(0x9D16370)
#define RPG_CLIENT_ALLEYMODULE___C__DISPLAYCLASS24_0__PRINTEVENTINFO_B__1_OFFSET UNITYSDK_OFFSET(0x9D16390)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyModule___c__DisplayClass24_0_TypeDefinitionIndex = 57421;

	class AlleyModule___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::System::UInt32 eventID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYMODULE___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _PrintEventInfo_b__0(::RPG::Client::AlleyEventInfo evt)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AlleyEventInfo))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYMODULE___C__DISPLAYCLASS24_0__PRINTEVENTINFO_B__0_OFFSET))(this, evt);
		}

		::System::Boolean _PrintEventInfo_b__1(::RPG::Client::AlleyEventInfo evt)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AlleyEventInfo))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYMODULE___C__DISPLAYCLASS24_0__PRINTEVENTINFO_B__1_OFFSET))(this, evt);
		}
	};
}
