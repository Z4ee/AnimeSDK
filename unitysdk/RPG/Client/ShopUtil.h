#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_SHOPUTIL_ADDRECOMMENDTABSKINVIDEOTOBATLIST_OFFSET UNITYSDK_OFFSET(0xC8C0870)
#define RPG_CLIENT_SHOPUTIL_CHECKISRECOMMENDTABSKINVIDEOEXIST_OFFSET UNITYSDK_OFFSET(0xC8C0790)
#define RPG_CLIENT_SHOPUTIL_REDDOTISAVATARSKINGOODSNEW_OFFSET UNITYSDK_OFFSET(0xC8C0530)
#define RPG_CLIENT_SHOPUTIL_REDDOTSETAVATARSKINSEEN_OFFSET UNITYSDK_OFFSET(0xC8C0640)

namespace RPG::Client
{
	inline static constexpr unsigned int ShopUtil_TypeDefinitionIndex = 63575;

	class ShopUtil : public ::System::Object
	{
	public:
		static ::System::Boolean RedDotIsAvatarSkinGoodsNew(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPUTIL_REDDOTISAVATARSKINGOODSNEW_OFFSET))(a1);
		}

		static ::System::Void RedDotSetAvatarSkinSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPUTIL_REDDOTSETAVATARSKINSEEN_OFFSET))(a1);
		}

		static ::System::Boolean CheckIsRecommendTabSkinVideoExist(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPUTIL_CHECKISRECOMMENDTABSKINVIDEOEXIST_OFFSET))(a1);
		}

		static ::System::Void AddRecommendTabSkinVideoToBatList(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPUTIL_ADDRECOMMENDTABSKINVIDEOTOBATLIST_OFFSET))(a1);
		}
	};
}
