#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_SHOPUTIL_ADDRECOMMENDTABSKINVIDEOTOBATLIST_OFFSET UNITYSDK_OFFSET(0xA47C780)
#define RPG_CLIENT_SHOPUTIL_CHECKISRECOMMENDTABSKINVIDEOEXIST_OFFSET UNITYSDK_OFFSET(0xA47C6A0)
#define RPG_CLIENT_SHOPUTIL_REDDOTISAVATARSKINGOODSNEW_OFFSET UNITYSDK_OFFSET(0xA47C3B0)
#define RPG_CLIENT_SHOPUTIL_REDDOTSETAVATARSKINSEEN_OFFSET UNITYSDK_OFFSET(0xA47C550)

namespace RPG::Client
{
	inline static constexpr unsigned int ShopUtil_TypeDefinitionIndex = 55449;

	class ShopUtil : public ::System::Object
	{
	public:
		static ::System::Boolean RedDotIsAvatarSkinGoodsNew(::System::UInt32 skinId)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPUTIL_REDDOTISAVATARSKINGOODSNEW_OFFSET))(skinId);
		}

		static ::System::Void RedDotSetAvatarSkinSeen(::System::UInt32 skinId)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPUTIL_REDDOTSETAVATARSKINSEEN_OFFSET))(skinId);
		}

		static ::System::Boolean CheckIsRecommendTabSkinVideoExist(::System::UInt32 skinId)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPUTIL_CHECKISRECOMMENDTABSKINVIDEOEXIST_OFFSET))(skinId);
		}

		static ::System::Void AddRecommendTabSkinVideoToBatList(::System::UInt32 skinId)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPUTIL_ADDRECOMMENDTABSKINVIDEOTOBATLIST_OFFSET))(skinId);
		}
	};
}
