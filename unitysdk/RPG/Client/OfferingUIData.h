#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class OfferingUIPageConfigRow; }

#define RPG_CLIENT_OFFERINGUIDATA_GET_COSTTITLE_OFFSET UNITYSDK_OFFSET(0xABE7170)
#define RPG_CLIENT_OFFERINGUIDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xABE6FF0)
#define RPG_CLIENT_OFFERINGUIDATA_GET_LEVELTITLE_OFFSET UNITYSDK_OFFSET(0xABE70F0)
#define RPG_CLIENT_OFFERINGUIDATA_GET_LONGTAILDESC_OFFSET UNITYSDK_OFFSET(0xABE72F0)
#define RPG_CLIENT_OFFERINGUIDATA_GET_LONGTAILTITLE_OFFSET UNITYSDK_OFFSET(0xABE7270)
#define RPG_CLIENT_OFFERINGUIDATA_GET_MAXTIP_OFFSET UNITYSDK_OFFSET(0xABE6270)
#define RPG_CLIENT_OFFERINGUIDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xABE7070)
#define RPG_CLIENT_OFFERINGUIDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xABE7010)
#define RPG_CLIENT_OFFERINGUIDATA_GET_SUBMITBTNNAME_OFFSET UNITYSDK_OFFSET(0xABE71F0)
#define RPG_CLIENT_OFFERINGUIDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xABE7000)
#define RPG_CLIENT_OFFERINGUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xABE40E0)

namespace RPG::Client
{
	inline static constexpr unsigned int OfferingUIData_TypeDefinitionIndex = 61151;

	class OfferingUIData : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGUIDATA__CTOR_OFFSET))(this, id);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGUIDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGUIDATA_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::OfferingUIPageConfigRow* get_Row()
		{
			return ((::RPG::GameCore::OfferingUIPageConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGUIDATA_GET_ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGUIDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_LevelTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGUIDATA_GET_LEVELTITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_CostTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGUIDATA_GET_COSTTITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_SubmitBtnName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGUIDATA_GET_SUBMITBTNNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_MaxTip()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGUIDATA_GET_MAXTIP_OFFSET))(this);
		}

		::RPG::Client::TextID get_LongTailTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGUIDATA_GET_LONGTAILTITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_LongTailDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGUIDATA_GET_LONGTAILDESC_OFFSET))(this);
		}
	};
}
