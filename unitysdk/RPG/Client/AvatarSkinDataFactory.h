#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class DisplayAvatarDetailInfo; }
namespace RPG::Client { class IAvatarSkinData; }
namespace RPG::GameCore { class IAvatarCommonRowWrap; }

#define RPG_CLIENT_AVATARSKINDATAFACTORY_CREATEBYADVPLAYERID_OFFSET UNITYSDK_OFFSET(0x19ECC330)
#define RPG_CLIENT_AVATARSKINDATAFACTORY_CREATEBYAVATARID_OFFSET UNITYSDK_OFFSET(0x19ECBD20)
#define RPG_CLIENT_AVATARSKINDATAFACTORY_CREATEBYAVATARROWWRAP_OFFSET UNITYSDK_OFFSET(0x19ECBCA0)
#define RPG_CLIENT_AVATARSKINDATAFACTORY_CREATEBYAVATARSKINDATA_OFFSET UNITYSDK_OFFSET(0x19ECC1C0)
#define RPG_CLIENT_AVATARSKINDATAFACTORY_CREATEBYAVATARSKINID_OFFSET UNITYSDK_OFFSET(0x19ECBDD0)
#define RPG_CLIENT_AVATARSKINDATAFACTORY_CREATEBYDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0x19ECC0C0)
#define RPG_CLIENT_AVATARSKINDATAFACTORY_CREATEBYSPECIALAVATARID_OFFSET UNITYSDK_OFFSET(0x19ECC130)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarSkinDataFactory_TypeDefinitionIndex = 62565;

	class AvatarSkinDataFactory : public ::System::Object
	{
	public:
		static ::RPG::Client::IAvatarSkinData* CreateByAvatarRowWrap(::RPG::GameCore::IAvatarCommonRowWrap* a1)
		{
			return ((::RPG::Client::IAvatarSkinData*(*)(::RPG::GameCore::IAvatarCommonRowWrap*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKINDATAFACTORY_CREATEBYAVATARROWWRAP_OFFSET))(a1);
		}

		static ::RPG::Client::IAvatarSkinData* CreateByAvatarId(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::IAvatarSkinData*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKINDATAFACTORY_CREATEBYAVATARID_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::IAvatarSkinData* CreateByDisplayInfo(::Proto::DisplayAvatarDetailInfo* a1)
		{
			return ((::RPG::Client::IAvatarSkinData*(*)(::Proto::DisplayAvatarDetailInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKINDATAFACTORY_CREATEBYDISPLAYINFO_OFFSET))(a1);
		}

		static ::RPG::Client::IAvatarSkinData* CreateBySpecialAvatarId(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::IAvatarSkinData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKINDATAFACTORY_CREATEBYSPECIALAVATARID_OFFSET))(a1, a2);
		}

		static ::RPG::Client::IAvatarSkinData* CreateByAvatarSkinId(::System::UInt32 a1)
		{
			return ((::RPG::Client::IAvatarSkinData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKINDATAFACTORY_CREATEBYAVATARSKINID_OFFSET))(a1);
		}

		static ::RPG::Client::IAvatarSkinData* CreateByAvatarSkinData(::RPG::Client::IAvatarSkinData* a1)
		{
			return ((::RPG::Client::IAvatarSkinData*(*)(::RPG::Client::IAvatarSkinData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKINDATAFACTORY_CREATEBYAVATARSKINDATA_OFFSET))(a1);
		}

		static ::RPG::Client::IAvatarSkinData* CreateByAdvPlayerId(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::IAvatarSkinData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKINDATAFACTORY_CREATEBYADVPLAYERID_OFFSET))(a1, a2);
		}
	};
}
