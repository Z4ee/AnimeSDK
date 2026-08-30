#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"

namespace RPG::Client::FateRin::Avatar { class IFateRinAvatarViewModel; }
namespace System { class String; }

#define RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDOWNERVIEWMODEL_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0x1CBEBDF0)
#define RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDOWNERVIEWMODEL_GET_DECKSIZELIMIT_OFFSET UNITYSDK_OFFSET(0x1CBEBDB0)
#define RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDOWNERVIEWMODEL_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1CBEBBB0)
#define RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDOWNERVIEWMODEL_GET_ISNEUTRAL_OFFSET UNITYSDK_OFFSET(0x1CBEBD70)
#define RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDOWNERVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CBEBD00)
#define RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDOWNERVIEWMODEL_GET_OWNERMARKERICONPATH_OFFSET UNITYSDK_OFFSET(0x1CBEBE30)
#define RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDOWNERVIEWMODEL_GET_TYPENUMBER_OFFSET UNITYSDK_OFFSET(0x1CBEBC90)
#define RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDOWNERVIEWMODEL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1CBEBC50)
#define RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDOWNERVIEWMODEL_GET_UICOLORSTATE_OFFSET UNITYSDK_OFFSET(0x1CBEBE70)
#define RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDOWNERVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBEBBA0)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinInvalidCardOwnerViewModel_TypeDefinitionIndex = 79841;

	class FateRinInvalidCardOwnerViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		static ::RPG::Client::FateRin::Card::FateRinInvalidCardOwnerViewModel** StaticGet__Instance()
		{
			return (::RPG::Client::FateRin::Card::FateRinInvalidCardOwnerViewModel**)Il2CppClass::FromTypeDefinitionIndex(FateRinInvalidCardOwnerViewModel_TypeDefinitionIndex)->GetStaticField(0x39D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDOWNERVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::FateRin::Card::FateRinInvalidCardOwnerViewModel* get_Instance()
		{
			return ((::RPG::Client::FateRin::Card::FateRinInvalidCardOwnerViewModel*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDOWNERVIEWMODEL_GET_INSTANCE_OFFSET))();
		}

		::RPG::GameCore::FateRinHouguOwnerType get_Type()
		{
			return ((::RPG::GameCore::FateRinHouguOwnerType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDOWNERVIEWMODEL_GET_TYPE_OFFSET))(this);
		}

		::System::UInt32 get_TypeNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDOWNERVIEWMODEL_GET_TYPENUMBER_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDOWNERVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::System::Boolean get_IsNeutral()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDOWNERVIEWMODEL_GET_ISNEUTRAL_OFFSET))(this);
		}

		::System::UInt32 get_DeckSizeLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDOWNERVIEWMODEL_GET_DECKSIZELIMIT_OFFSET))(this);
		}

		::RPG::Client::FateRin::Avatar::IFateRinAvatarViewModel* get_Avatar()
		{
			return ((::RPG::Client::FateRin::Avatar::IFateRinAvatarViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDOWNERVIEWMODEL_GET_AVATAR_OFFSET))(this);
		}

		::System::String* get_OwnerMarkerIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDOWNERVIEWMODEL_GET_OWNERMARKERICONPATH_OFFSET))(this);
		}

		::System::String* get_UIColorState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDOWNERVIEWMODEL_GET_UICOLORSTATE_OFFSET))(this);
		}
	};
}
