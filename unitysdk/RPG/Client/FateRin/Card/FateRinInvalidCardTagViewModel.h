#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace System { class String; }

#define RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDTAGVIEWMODEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CBEBF60)
#define RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDTAGVIEWMODEL_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1CBEBEC0)
#define RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDTAGVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CBEBFB0)
#define RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDTAGVIEWMODEL_GET_UISTATE_OFFSET UNITYSDK_OFFSET(0x1CBEC020)
#define RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDTAGVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBEBEB0)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinInvalidCardTagViewModel_TypeDefinitionIndex = 79839;

	class FateRinInvalidCardTagViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		static ::RPG::Client::FateRin::Card::FateRinInvalidCardTagViewModel** StaticGet__Instance()
		{
			return (::RPG::Client::FateRin::Card::FateRinInvalidCardTagViewModel**)Il2CppClass::FromTypeDefinitionIndex(FateRinInvalidCardTagViewModel_TypeDefinitionIndex)->GetStaticField(0x3A30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDTAGVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::FateRin::Card::FateRinInvalidCardTagViewModel* get_Instance()
		{
			return ((::RPG::Client::FateRin::Card::FateRinInvalidCardTagViewModel*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDTAGVIEWMODEL_GET_INSTANCE_OFFSET))();
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDTAGVIEWMODEL_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDTAGVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::System::String* get_UIState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDTAGVIEWMODEL_GET_UISTATE_OFFSET))(this);
		}
	};
}
