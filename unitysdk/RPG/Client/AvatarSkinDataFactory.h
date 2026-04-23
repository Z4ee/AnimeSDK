#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class DisplayAvatarDetailInfo; }
namespace RPG::Client { class IAvatarSkinData; }
namespace RPG::GameCore { class IAvatarCommonRowWrap; }

#define RPG_CLIENT_AVATARSKINDATAFACTORY_CREATEBYADVPLAYERID_OFFSET UNITYSDK_OFFSET(0x9DBED10)
#define RPG_CLIENT_AVATARSKINDATAFACTORY_CREATEBYAVATARID_OFFSET UNITYSDK_OFFSET(0x9DBE6B0)
#define RPG_CLIENT_AVATARSKINDATAFACTORY_CREATEBYAVATARROWWRAP_OFFSET UNITYSDK_OFFSET(0x9DBE630)
#define RPG_CLIENT_AVATARSKINDATAFACTORY_CREATEBYAVATARSKINDATA_OFFSET UNITYSDK_OFFSET(0x9DBEC10)
#define RPG_CLIENT_AVATARSKINDATAFACTORY_CREATEBYAVATARSKINID_OFFSET UNITYSDK_OFFSET(0x9DBE8F0)
#define RPG_CLIENT_AVATARSKINDATAFACTORY_CREATEBYDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0x9DBEB00)
#define RPG_CLIENT_AVATARSKINDATAFACTORY_CREATEBYSPECIALAVATARID_OFFSET UNITYSDK_OFFSET(0x9DBEB70)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarSkinDataFactory_TypeDefinitionIndex = 57658;

	class AvatarSkinDataFactory : public ::System::Object
	{
	public:
		static ::RPG::Client::IAvatarSkinData* CreateByAvatarRowWrap(::RPG::GameCore::IAvatarCommonRowWrap* avatarRowWrap)
		{
			return ((::RPG::Client::IAvatarSkinData*(*)(::RPG::GameCore::IAvatarCommonRowWrap*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKINDATAFACTORY_CREATEBYAVATARROWWRAP_OFFSET))(avatarRowWrap);
		}

		static ::RPG::Client::IAvatarSkinData* CreateByAvatarId(::System::UInt32 realID, ::System::UInt32 enhancedID, ::System::UInt32 skinID)
		{
			return ((::RPG::Client::IAvatarSkinData*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKINDATAFACTORY_CREATEBYAVATARID_OFFSET))(realID, enhancedID, skinID);
		}

		static ::RPG::Client::IAvatarSkinData* CreateByDisplayInfo(::Proto::DisplayAvatarDetailInfo* displayAvatarDetailInfo)
		{
			return ((::RPG::Client::IAvatarSkinData*(*)(::Proto::DisplayAvatarDetailInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKINDATAFACTORY_CREATEBYDISPLAYINFO_OFFSET))(displayAvatarDetailInfo);
		}

		static ::RPG::Client::IAvatarSkinData* CreateBySpecialAvatarId(::System::UInt32 specialAvatarId, ::System::UInt32 worldLevel)
		{
			return ((::RPG::Client::IAvatarSkinData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKINDATAFACTORY_CREATEBYSPECIALAVATARID_OFFSET))(specialAvatarId, worldLevel);
		}

		static ::RPG::Client::IAvatarSkinData* CreateByAvatarSkinId(::System::UInt32 avatarSkinId)
		{
			return ((::RPG::Client::IAvatarSkinData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKINDATAFACTORY_CREATEBYAVATARSKINID_OFFSET))(avatarSkinId);
		}

		static ::RPG::Client::IAvatarSkinData* CreateByAvatarSkinData(::RPG::Client::IAvatarSkinData* avatarSkinData)
		{
			return ((::RPG::Client::IAvatarSkinData*(*)(::RPG::Client::IAvatarSkinData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKINDATAFACTORY_CREATEBYAVATARSKINDATA_OFFSET))(avatarSkinData);
		}

		static ::RPG::Client::IAvatarSkinData* CreateByAdvPlayerId(::System::UInt32 advPlayerID, ::System::UInt32 skinId)
		{
			return ((::RPG::Client::IAvatarSkinData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKINDATAFACTORY_CREATEBYADVPLAYERID_OFFSET))(advPlayerID, skinId);
		}
	};
}
