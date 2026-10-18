#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"

class Class_1_C85C4DAB350DD5FC_2;
namespace System { class String; }

#define RPG_CLIENT_FATERIN_CARD_FATERINCARDMANACOSTVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCEE8460)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDMANACOSTVIEWMODEL_GET_MANACOST_OFFSET UNITYSDK_OFFSET(0xCEE84A0)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDMANACOSTVIEWMODEL_GET_UISTATE_OFFSET UNITYSDK_OFFSET(0xCEE84F0)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDMANACOSTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCEE8440)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinCardManaCostViewModel_TypeDefinitionIndex = 81145;

	class FateRinCardManaCostViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::Class_1_C85C4DAB350DD5FC_2* _Model; // 0x20

		::System::Void _ctor(::Class_1_C85C4DAB350DD5FC_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C85C4DAB350DD5FC_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDMANACOSTVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDMANACOSTVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Int32 get_ManaCost()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDMANACOSTVIEWMODEL_GET_MANACOST_OFFSET))(this);
		}

		::System::String* get_UIState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDMANACOSTVIEWMODEL_GET_UISTATE_OFFSET))(this);
		}
	};
}
