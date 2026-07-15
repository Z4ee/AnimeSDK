#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"

namespace RPG::Client::FateRin::Avatar { class IFateRinAvatarViewModel; }
namespace System { class String; }

#define RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDOWNERVIEWMODEL_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0x1B4A80E0)
#define RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDOWNERVIEWMODEL_GET_DECKSIZELIMIT_OFFSET UNITYSDK_OFFSET(0x1B4A80A0)
#define RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDOWNERVIEWMODEL_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B4A7EA0)
#define RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDOWNERVIEWMODEL_GET_ISNEUTRAL_OFFSET UNITYSDK_OFFSET(0x1B4A8060)
#define RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDOWNERVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B4A7FF0)
#define RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDOWNERVIEWMODEL_GET_OWNERMARKERICONPATH_OFFSET UNITYSDK_OFFSET(0x1B4A8120)
#define RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDOWNERVIEWMODEL_GET_TYPENUMBER_OFFSET UNITYSDK_OFFSET(0x1B4A7F80)
#define RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDOWNERVIEWMODEL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B4A7F40)
#define RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDOWNERVIEWMODEL_GET_UICOLORSTATE_OFFSET UNITYSDK_OFFSET(0x1B4A8160)
#define RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDOWNERVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4A7E90)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinInvalidCardOwnerViewModel_TypeDefinitionIndex = 76208;

	class FateRinInvalidCardOwnerViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		static ::RPG::Client::FateRin::Card::FateRinInvalidCardOwnerViewModel** StaticGet__Instance()
		{
			return (::RPG::Client::FateRin::Card::FateRinInvalidCardOwnerViewModel**)Il2CppClass::FromTypeDefinitionIndex(FateRinInvalidCardOwnerViewModel_TypeDefinitionIndex)->GetStaticField(0x9270);
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
