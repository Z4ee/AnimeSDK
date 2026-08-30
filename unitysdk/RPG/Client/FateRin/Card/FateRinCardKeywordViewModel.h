#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_B3CB0277F28E93FA;

#define RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDVIEWMODEL_GET_DESC_OFFSET UNITYSDK_OFFSET(0xCFE2F40)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDVIEWMODEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xCFE2E90)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCFE2EE0)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCFE2E10)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinCardKeywordViewModel_TypeDefinitionIndex = 79819;

	class FateRinCardKeywordViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::Class_1_B3CB0277F28E93FA* _Model; // 0x20

		::System::Void _ctor(::Class_1_B3CB0277F28E93FA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B3CB0277F28E93FA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDVIEWMODEL_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDVIEWMODEL_GET_DESC_OFFSET))(this);
		}
	};
}
