#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EarlyAccessContent; }

#define RPG_CLIENT_EARLYACCESSMODULE___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17724450)
#define RPG_CLIENT_EARLYACCESSMODULE___C__DISPLAYCLASS16_0__GETMISSIONCONTENTID_B__0_OFFSET UNITYSDK_OFFSET(0x17726F80)

namespace RPG::Client
{
	inline static constexpr unsigned int EarlyAccessModule___c__DisplayClass16_0_TypeDefinitionIndex = 60858;

	class EarlyAccessModule___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::UInt32 mainMissionID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMissionContentID_b__0(::RPG::Client::EarlyAccessContent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EarlyAccessContent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE___C__DISPLAYCLASS16_0__GETMISSIONCONTENTID_B__0_OFFSET))(this, a1);
		}
	};
}
