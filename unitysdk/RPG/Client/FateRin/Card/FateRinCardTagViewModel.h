#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_B0F3210ABBBBF098;
namespace System { class String; }

#define RPG_CLIENT_FATERIN_CARD_FATERINCARDTAGVIEWMODEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xCFE34B0)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDTAGVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCFE3500)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDTAGVIEWMODEL_GET_UISTATE_OFFSET UNITYSDK_OFFSET(0xCFE3560)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDTAGVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCFDFF30)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinCardTagViewModel_TypeDefinitionIndex = 79829;

	class FateRinCardTagViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::Class_1_B0F3210ABBBBF098* _Model; // 0x20

		::System::Void _ctor(::Class_1_B0F3210ABBBBF098* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B0F3210ABBBBF098*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDTAGVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDTAGVIEWMODEL_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDTAGVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::System::String* get_UIState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDTAGVIEWMODEL_GET_UISTATE_OFFSET))(this);
		}
	};
}
