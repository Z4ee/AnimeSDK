#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SettingEntry.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PLAYEROUTFITHELPER_CHECKSHOWPLAYEROUTFITINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xAD67340)
#define RPG_CLIENT_PLAYEROUTFITHELPER_SETSHOWPLAYEROUTFITINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xAD67500)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerOutfitHelper_TypeDefinitionIndex = 57793;

	class PlayerOutfitHelper : public ::System::Object
	{
	public:
		static ::System::Boolean CheckShowPlayerOutfitInPerformance()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYEROUTFITHELPER_CHECKSHOWPLAYEROUTFITINPERFORMANCE_OFFSET))();
		}

		static ::System::Void SetShowPlayerOutfitInPerformance(::System::Boolean value, ::RPG::Client::SettingEntry entry)
		{
			return ((::System::Void(*)(::System::Boolean, ::RPG::Client::SettingEntry))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYEROUTFITHELPER_SETSHOWPLAYEROUTFITINPERFORMANCE_OFFSET))(value, entry);
		}
	};
}
