#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/System/Object.h"

class Class_1_7AB88D713F5121B3_56;
namespace RPG::Client { class RogueTournModule; }
namespace RPG::Client { template <typename T> class RPGHttpPlatformActResponse_1; }

#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB0D9DD0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS40_0__SENDSETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__2_OFFSET UNITYSDK_OFFSET(0xB0E7F30)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournModule___c__DisplayClass40_0_TypeDefinitionIndex = 62495;

	class RogueTournModule___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournModule* __4__this; // 0x10
		::System::Boolean isFavorite; // 0x18
		::RPG::Client::MongoObjectId buildRefID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Void _SendSetRogueTournBuildRefFavoriteHttpReq_b__2(::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_56*>* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_56*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS40_0__SENDSETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__2_OFFSET))(this, rsp);
		}
	};
}
