#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarOutfit; }

#define RPG_CLIENT_PLAYEROUTFITHELPER_CHECKSHOWPLAYEROUTFITINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xC4A8450)
#define RPG_CLIENT_PLAYEROUTFITHELPER_GETPLAYEROUTFIT_OFFSET UNITYSDK_OFFSET(0xC4A83B0)
#define RPG_CLIENT_PLAYEROUTFITHELPER_SETSHOWPLAYEROUTFITINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xC4A8610)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerOutfitHelper_TypeDefinitionIndex = 58615;

	class PlayerOutfitHelper : public ::System::Object
	{
	public:
		static ::RPG::Client::AvatarOutfit* GetPlayerOutfit()
		{
			return ((::RPG::Client::AvatarOutfit*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYEROUTFITHELPER_GETPLAYEROUTFIT_OFFSET))();
		}

		static ::System::Boolean CheckShowPlayerOutfitInPerformance()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYEROUTFITHELPER_CHECKSHOWPLAYEROUTFITINPERFORMANCE_OFFSET))();
		}

		static ::System::Void SetShowPlayerOutfitInPerformance(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYEROUTFITHELPER_SETSHOWPLAYEROUTFITINPERFORMANCE_OFFSET))(a1);
		}
	};
}
