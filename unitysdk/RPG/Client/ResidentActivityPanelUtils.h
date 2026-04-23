#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ResidentActivityPanelIndexKey.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IResidentActivityPanelData; }

#define RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_GETISSHOWFINISHED_OFFSET UNITYSDK_OFFSET(0xAFD7DF0)
#define RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_GETLATESTPLAYEDINDEXKEY_OFFSET UNITYSDK_OFFSET(0xAFD7C80)
#define RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_ISGRIDFIGHT_OFFSET UNITYSDK_OFFSET(0xAFD7700)
#define RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_ISROGUE_OFFSET UNITYSDK_OFFSET(0xAFD7C10)
#define RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_SETCHESSROGUEASLATESTPLAYED_OFFSET UNITYSDK_OFFSET(0xAFD7A30)
#define RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_SETISSHOWFINISHED_OFFSET UNITYSDK_OFFSET(0xAFD7E40)
#define RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_SETLATESTPLAYEDDATA_OFFSET UNITYSDK_OFFSET(0xAFD7CD0)
#define RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_SETROGUEMAGICASLATESTPLAYED_OFFSET UNITYSDK_OFFSET(0xAFD7AB0)
#define RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_SETROGUENOUSASLATESTPLAYED_OFFSET UNITYSDK_OFFSET(0xAFD7A70)
#define RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_SETSIMULATEDROGUEASLATESTPLAYED_OFFSET UNITYSDK_OFFSET(0xAFD7760)
#define RPG_CLIENT_RESIDENTACTIVITYPANELUTILS__SETLATESTPLAYEDINDEXKEY_OFFSET UNITYSDK_OFFSET(0xAFD7B00)
#define RPG_CLIENT_RESIDENTACTIVITYPANELUTILS__SETROGUEASLATESTPLAYED_OFFSET UNITYSDK_OFFSET(0xAFD77A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ResidentActivityPanelUtils_TypeDefinitionIndex = 56977;

	class ResidentActivityPanelUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsGridFight(::RPG::Client::IResidentActivityPanelData* panelData)
		{
			return ((::System::Boolean(*)(::RPG::Client::IResidentActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_ISGRIDFIGHT_OFFSET))(panelData);
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

		static ::System::Void _SetRogueAsLatestPlayed(::RPG::GameCore::RogueSubMode subMode)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELUTILS__SETROGUEASLATESTPLAYED_OFFSET))(subMode);
		}

		static ::System::Boolean IsRogue(::RPG::Client::IResidentActivityPanelData* panelData)
		{
			return ((::System::Boolean(*)(::RPG::Client::IResidentActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_ISROGUE_OFFSET))(panelData);
		}

		static ::RPG::Client::ResidentActivityPanelIndexKey GetLatestPlayedIndexKey()
		{
			return ((::RPG::Client::ResidentActivityPanelIndexKey(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_GETLATESTPLAYEDINDEXKEY_OFFSET))();
		}

		static ::System::Void SetLatestPlayedData(::RPG::Client::IResidentActivityPanelData* data)
		{
			return ((::System::Void(*)(::RPG::Client::IResidentActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_SETLATESTPLAYEDDATA_OFFSET))(data);
		}

		static ::System::Void _SetLatestPlayedIndexKey(::RPG::Client::ResidentActivityPanelIndexKey indexKey)
		{
			return ((::System::Void(*)(::RPG::Client::ResidentActivityPanelIndexKey))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELUTILS__SETLATESTPLAYEDINDEXKEY_OFFSET))(indexKey);
		}

		static ::System::Boolean GetIsShowFinished()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_GETISSHOWFINISHED_OFFSET))();
		}

		static ::System::Void SetIsShowFinished(::System::Boolean isShowFinished)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELUTILS_SETISSHOWFINISHED_OFFSET))(isShowFinished);
		}
	};
}
