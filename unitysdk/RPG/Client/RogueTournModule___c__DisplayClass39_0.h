#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/System/Object.h"

class Class_1_7AB88D713F5121B3_57;
namespace RPG::Client { class RogueTournModule; }
namespace RPG::Client { template <typename T> class RPGHttpPlatformActResponse_1; }

#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA57820)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS39_0__SENDSETROGUETOURNBUILDREFLIKEHTTPREQ_B__2_OFFSET UNITYSDK_OFFSET(0x1AA57830)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournModule___c__DisplayClass39_0_TypeDefinitionIndex = 64794;

	class RogueTournModule___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournModule* __4__this; // 0x10
		::System::Boolean isLike; // 0x18
		::RPG::Client::MongoObjectId buildRefID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
		}

		::System::Void _SendSetRogueTournBuildRefLikeHttpReq_b__2(::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_57*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_57*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS39_0__SENDSETROGUETOURNBUILDREFLIKEHTTPREQ_B__2_OFFSET))(this, a1);
		}
	};
}
