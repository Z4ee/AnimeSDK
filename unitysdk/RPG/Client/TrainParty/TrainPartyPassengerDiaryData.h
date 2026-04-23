#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB35C290)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xB35C370)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYDATA_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xB35C390)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xB35C380)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYDATA_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0xB35C490)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB35C320)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyPassengerDiaryData_TypeDefinitionIndex = 68613;

	class TrainPartyPassengerDiaryData : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10
		::RPG::Client::TextID DescText; // 0x18

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYDATA__CTOR_OFFSET))(this, id);
		}

		static ::RPG::Client::TrainParty::TrainPartyPassengerDiaryData* Create(::System::UInt32 ID)
		{
			return ((::RPG::Client::TrainParty::TrainPartyPassengerDiaryData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYDATA_CREATE_OFFSET))(ID);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYDATA_SET_ID_OFFSET))(this, value);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYDATA_GET_ISNEW_OFFSET))(this);
		}

		::System::Void set_IsNew(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYDATA_SET_ISNEW_OFFSET))(this, value);
		}
	};
}
