#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EarlyAccessContent; }

#define RPG_CLIENT_EARLYACCESSMODULE___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB82F940)
#define RPG_CLIENT_EARLYACCESSMODULE___C__DISPLAYCLASS13_0__GETMISSIONCONTENTID_B__0_OFFSET UNITYSDK_OFFSET(0xB831280)

namespace RPG::Client
{
	inline static constexpr unsigned int EarlyAccessModule___c__DisplayClass13_0_TypeDefinitionIndex = 59573;

	class EarlyAccessModule___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::UInt32 mainMissionID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMissionContentID_b__0(::RPG::Client::EarlyAccessContent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EarlyAccessContent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE___C__DISPLAYCLASS13_0__GETMISSIONCONTENTID_B__0_OFFSET))(this, a1);
		}
	};
}
