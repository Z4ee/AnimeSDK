#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/System/Object.h"

class Class_1_7AB88D713F5121B3_55;
namespace RPG::Client { class RogueTournModule; }
namespace RPG::Client { template <typename T> class RPGHttpPlatformActResponse_1; }

#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB0D96F0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS39_0__SENDSETROGUETOURNBUILDREFLIKEHTTPREQ_B__2_OFFSET UNITYSDK_OFFSET(0xB0E7EE0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournModule___c__DisplayClass39_0_TypeDefinitionIndex = 62494;

	class RogueTournModule___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournModule* __4__this; // 0x10
		::RPG::Client::MongoObjectId buildRefID; // 0x18
		::System::Boolean isLike; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
		}

		::System::Void _SendSetRogueTournBuildRefLikeHttpReq_b__2(::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_55*>* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_55*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS39_0__SENDSETROGUETOURNBUILDREFLIKEHTTPREQ_B__2_OFFSET))(this, rsp);
		}
	};
}
