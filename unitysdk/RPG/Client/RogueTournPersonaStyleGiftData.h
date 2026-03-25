#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaStyleGiftDataBase.h"

namespace RPG::Client { template <typename T1, typename T2> class RogueInstanceCacheManager_2; }

#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0xA3C7890)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xA3C7AB0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATA__CREATEDATA_OFFSET UNITYSDK_OFFSET(0xA3C7920)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA3C7870)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaStyleGiftData_TypeDefinitionIndex = 55259;

	class RogueTournPersonaStyleGiftData : public ::RPG::Client::RogueTournPersonaStyleGiftDataBase
	{
	public:
		static ::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournPersonaStyleGiftData*>** StaticGet__CacheManager()
		{
			return (::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournPersonaStyleGiftData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaStyleGiftData_TypeDefinitionIndex)->GetStaticField(0x1F650);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATA__CCTOR_OFFSET))();
		}

		static ::RPG::Client::RogueTournPersonaStyleGiftData* GetData(::System::UInt32 giftID)
		{
			return ((::RPG::Client::RogueTournPersonaStyleGiftData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATA_GETDATA_OFFSET))(giftID);
		}

		static ::RPG::Client::RogueTournPersonaStyleGiftData* _CreateData(::System::UInt32 giftID)
		{
			return ((::RPG::Client::RogueTournPersonaStyleGiftData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATA__CREATEDATA_OFFSET))(giftID);
		}
	};
}
