#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1BDFDA30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1BDFDB10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYDATA_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x1BDFDB30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1BDFDB20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYDATA_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0x1BDFDC30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDFDAC0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyPassengerDiaryData_TypeDefinitionIndex = 74245;

	class TrainPartyPassengerDiaryData : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10
		::RPG::Client::TextID DescText; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYDATA__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::TrainParty::TrainPartyPassengerDiaryData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyPassengerDiaryData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYDATA_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYDATA_GET_ISNEW_OFFSET))(this);
		}

		::System::Void set_IsNew(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYDATA_SET_ISNEW_OFFSET))(this, a1);
		}
	};
}
