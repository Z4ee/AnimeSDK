#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ResidentActivityPanelIndexKey.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IResidentActivityPanelData; }

#define RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_GETISSHOWFINISHED_OFFSET UNITYSDK_OFFSET(0xC71B990)
#define RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_GETLATESTPLAYEDINDEXKEY_OFFSET UNITYSDK_OFFSET(0xC71B830)
#define RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_ISGRIDFIGHT_OFFSET UNITYSDK_OFFSET(0xC71B380)
#define RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_ISROGUE_OFFSET UNITYSDK_OFFSET(0xC71B7B0)
#define RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_SETCHESSROGUEASLATESTPLAYED_OFFSET UNITYSDK_OFFSET(0xC71B5A0)
#define RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_SETISSHOWFINISHED_OFFSET UNITYSDK_OFFSET(0xC71B9E0)
#define RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_SETLATESTPLAYEDDATA_OFFSET UNITYSDK_OFFSET(0xC71B880)
#define RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_SETROGUEMAGICASLATESTPLAYED_OFFSET UNITYSDK_OFFSET(0xC71B620)
#define RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_SETROGUENOUSASLATESTPLAYED_OFFSET UNITYSDK_OFFSET(0xC71B5E0)
#define RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_SETROGUETOURNASLATESTPLAYED_OFFSET UNITYSDK_OFFSET(0xC71B660)
#define RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_SETSIMULATEDROGUEASLATESTPLAYED_OFFSET UNITYSDK_OFFSET(0xC71B3E0)
#define RPG_CLIENT_RESIDENTACTIVITYPANELUTILS__SETLATESTPLAYEDINDEXKEY_OFFSET UNITYSDK_OFFSET(0xC71B6A0)
#define RPG_CLIENT_RESIDENTACTIVITYPANELUTILS__SETROGUEASLATESTPLAYED_OFFSET UNITYSDK_OFFSET(0xC71B420)

namespace RPG::Client
{
	inline static constexpr unsigned int ResidentActivityPanelUtils_TypeDefinitionIndex = 57765;

	class ResidentActivityPanelUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsGridFight(::RPG::Client::IResidentActivityPanelData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IResidentActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_ISGRIDFIGHT_OFFSET))(a1);
		}

		static ::System::Void SetSimulatedRogueAsLatestPlayed()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_SETSIMULATEDROGUEASLATESTPLAYED_OFFSET))();
		}

		static ::System::Void SetChessRogueAsLatestPlayed()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_SETCHESSROGUEASLATESTPLAYED_OFFSET))();
		}

		static ::System::Void SetRogueNousAsLatestPlayed()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_SETROGUENOUSASLATESTPLAYED_OFFSET))();
		}

		static ::System::Void SetRogueMagicAsLatestPlayed()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_SETROGUEMAGICASLATESTPLAYED_OFFSET))();
		}

		static ::System::Void SetRogueTournAsLatestPlayed()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_SETROGUETOURNASLATESTPLAYED_OFFSET))();
		}

		static ::System::Void _SetRogueAsLatestPlayed(::RPG::GameCore::RogueSubMode a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELUTILS__SETROGUEASLATESTPLAYED_OFFSET))(a1);
		}

		static ::System::Boolean IsRogue(::RPG::Client::IResidentActivityPanelData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IResidentActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_ISROGUE_OFFSET))(a1);
		}

		static ::RPG::Client::ResidentActivityPanelIndexKey GetLatestPlayedIndexKey()
		{
			return ((::RPG::Client::ResidentActivityPanelIndexKey(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_GETLATESTPLAYEDINDEXKEY_OFFSET))();
		}

		static ::System::Void SetLatestPlayedData(::RPG::Client::IResidentActivityPanelData* a1)
		{
			return ((::System::Void(*)(::RPG::Client::IResidentActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_SETLATESTPLAYEDDATA_OFFSET))(a1);
		}

		static ::System::Void _SetLatestPlayedIndexKey(::RPG::Client::ResidentActivityPanelIndexKey a1)
		{
			return ((::System::Void(*)(::RPG::Client::ResidentActivityPanelIndexKey))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELUTILS__SETLATESTPLAYEDINDEXKEY_OFFSET))(a1);
		}

		static ::System::Boolean GetIsShowFinished()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_GETISSHOWFINISHED_OFFSET))();
		}

		static ::System::Void SetIsShowFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_SETISSHOWFINISHED_OFFSET))(a1);
		}
	};
}
