#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IdleLiveGiftSenderRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_CAPTAINDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9B24820)
#define RPG_CLIENT_ACTIVITYIDLELIVE_CAPTAINDATA_GET_ICON_OFFSET UNITYSDK_OFFSET(0x9B247E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_CAPTAINDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9B247F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_CAPTAINDATA_GET_SENDERID_OFFSET UNITYSDK_OFFSET(0x9B247D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_CAPTAINDATA_GET_TOTALDONATECOUNT_OFFSET UNITYSDK_OFFSET(0x9B24800)
#define RPG_CLIENT_ACTIVITYIDLELIVE_CAPTAINDATA_SETTOTALSCCOUNT_OFFSET UNITYSDK_OFFSET(0x9B24970)
#define RPG_CLIENT_ACTIVITYIDLELIVE_CAPTAINDATA_SET_TOTALDONATECOUNT_OFFSET UNITYSDK_OFFSET(0x9B24810)
#define RPG_CLIENT_ACTIVITYIDLELIVE_CAPTAINDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B24940)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int CaptainData_TypeDefinitionIndex = 69195;

	class CaptainData : public ::System::Object
	{
	public:
		::System::String* _Icon_k__BackingField; // 0x10
		::RPG::Client::TextID _Name_k__BackingField; // 0x18
		::System::UInt32 _SenderId_k__BackingField; // 0x28
		::System::UInt32 _TotalDonateCount_k__BackingField; // 0x2C

		::System::Void _ctor(::RPG::GameCore::IdleLiveGiftSenderRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveGiftSenderRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CAPTAINDATA__CTOR_OFFSET))(this, row);
		}

		::System::UInt32 get_SenderId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CAPTAINDATA_GET_SENDERID_OFFSET))(this);
		}

		::System::String* get_Icon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CAPTAINDATA_GET_ICON_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CAPTAINDATA_GET_NAME_OFFSET))(this);
		}

		::System::UInt32 get_TotalDonateCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CAPTAINDATA_GET_TOTALDONATECOUNT_OFFSET))(this);
		}

		::System::Void set_TotalDonateCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CAPTAINDATA_SET_TOTALDONATECOUNT_OFFSET))(this, value);
		}

		static ::RPG::Client::ActivityIdleLive::CaptainData* Create(::System::UInt32 id)
		{
			return ((::RPG::Client::ActivityIdleLive::CaptainData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CAPTAINDATA_CREATE_OFFSET))(id);
		}

		::System::Void SetTotalScCount(::System::UInt32 totalScCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CAPTAINDATA_SETTOTALSCCOUNT_OFFSET))(this, totalScCount);
		}
	};
}
