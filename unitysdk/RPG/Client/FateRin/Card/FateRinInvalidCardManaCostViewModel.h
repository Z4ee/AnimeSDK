#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"

namespace System { class String; }

#define RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDMANACOSTVIEWMODEL_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1CBEBA80)
#define RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDMANACOSTVIEWMODEL_GET_MANACOST_OFFSET UNITYSDK_OFFSET(0x1CBEBB20)
#define RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDMANACOSTVIEWMODEL_GET_UISTATE_OFFSET UNITYSDK_OFFSET(0x1CBEBB60)
#define RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDMANACOSTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBEBA70)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinInvalidCardManaCostViewModel_TypeDefinitionIndex = 79840;

	class FateRinInvalidCardManaCostViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		static ::RPG::Client::FateRin::Card::FateRinInvalidCardManaCostViewModel** StaticGet__Instance()
		{
			return (::RPG::Client::FateRin::Card::FateRinInvalidCardManaCostViewModel**)Il2CppClass::FromTypeDefinitionIndex(FateRinInvalidCardManaCostViewModel_TypeDefinitionIndex)->GetStaticField(0x39C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDMANACOSTVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::FateRin::Card::FateRinInvalidCardManaCostViewModel* get_Instance()
		{
			return ((::RPG::Client::FateRin::Card::FateRinInvalidCardManaCostViewModel*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDMANACOSTVIEWMODEL_GET_INSTANCE_OFFSET))();
		}

		::System::Int32 get_ManaCost()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDMANACOSTVIEWMODEL_GET_MANACOST_OFFSET))(this);
		}

		::System::String* get_UIState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDMANACOSTVIEWMODEL_GET_UISTATE_OFFSET))(this);
		}
	};
}
