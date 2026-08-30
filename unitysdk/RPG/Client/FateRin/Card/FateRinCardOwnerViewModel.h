#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"

class Class_0_16E4307DCC419505_1353;
class Class_1_DD62B922D9C7B62B;
class Class_1_F248B058F5A06B98;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client::FateRin::Avatar { class IFateRinAvatarViewModel; }
namespace System { class String; }

#define RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0xCFE32D0)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL_GET_DECKSIZELIMIT_OFFSET UNITYSDK_OFFSET(0xCFE3280)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL_GET_ISNEUTRAL_OFFSET UNITYSDK_OFFSET(0xCFE3240)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCFE31E0)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL_GET_OWNERMARKERICONPATH_OFFSET UNITYSDK_OFFSET(0xCFE32E0)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL_GET_TYPENUMBER_OFFSET UNITYSDK_OFFSET(0xCFE3160)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xCFE3110)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL_GET_UICOLORSTATE_OFFSET UNITYSDK_OFFSET(0xCFE3430)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCFE30A0)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinCardOwnerViewModel_TypeDefinitionIndex = 79824;

	class FateRinCardOwnerViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::RPG::Client::FateRin::Avatar::IFateRinAvatarViewModel* _Avatar_k__BackingField; // 0x20
		::RPG::AvatarSystem::IAvatar* _AvatarModel; // 0x28
		::Class_1_DD62B922D9C7B62B* _Model; // 0x30

		::System::Void _ctor(::Class_1_DD62B922D9C7B62B* a1, ::Class_1_F248B058F5A06B98* a2, ::Class_0_16E4307DCC419505_1353* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DD62B922D9C7B62B*, ::Class_1_F248B058F5A06B98*, ::Class_0_16E4307DCC419505_1353*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::FateRinHouguOwnerType get_Type()
		{
			return ((::RPG::GameCore::FateRinHouguOwnerType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL_GET_TYPE_OFFSET))(this);
		}

		::System::UInt32 get_TypeNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL_GET_TYPENUMBER_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::System::Boolean get_IsNeutral()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL_GET_ISNEUTRAL_OFFSET))(this);
		}

		::System::UInt32 get_DeckSizeLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL_GET_DECKSIZELIMIT_OFFSET))(this);
		}

		::RPG::Client::FateRin::Avatar::IFateRinAvatarViewModel* get_Avatar()
		{
			return ((::RPG::Client::FateRin::Avatar::IFateRinAvatarViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL_GET_AVATAR_OFFSET))(this);
		}

		::System::String* get_OwnerMarkerIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL_GET_OWNERMARKERICONPATH_OFFSET))(this);
		}

		::System::String* get_UIColorState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL_GET_UICOLORSTATE_OFFSET))(this);
		}
	};
}
