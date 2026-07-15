#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ClockParkAttributeType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ClockParkCheckPointType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ClockParkCheckPointRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CLOCKPARKCHECKPOINTINFO_GET_CHECKPOINTDESC_OFFSET UNITYSDK_OFFSET(0x1AE03A20)
#define RPG_CLIENT_CLOCKPARKCHECKPOINTINFO_GET_CHECKPOINTID_OFFSET UNITYSDK_OFFSET(0x1AE039E0)
#define RPG_CLIENT_CLOCKPARKCHECKPOINTINFO_GET_CHECKPOINTTYPE_OFFSET UNITYSDK_OFFSET(0x1AE03710)
#define RPG_CLIENT_CLOCKPARKCHECKPOINTINFO_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1AE03A00)
#define RPG_CLIENT_CLOCKPARKCHECKPOINTINFO_GET_HASCHECK_OFFSET UNITYSDK_OFFSET(0x1AE03760)
#define RPG_CLIENT_CLOCKPARKCHECKPOINTINFO_GET_HASMULTICHECKSINGLEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AE037E0)
#define RPG_CLIENT_CLOCKPARKCHECKPOINTINFO_REFRESHCHECKPOINTSTATUS_OFFSET UNITYSDK_OFFSET(0x1AE032D0)
#define RPG_CLIENT_CLOCKPARKCHECKPOINTINFO_SET_CHECKPOINTID_OFFSET UNITYSDK_OFFSET(0x1AE039F0)
#define RPG_CLIENT_CLOCKPARKCHECKPOINTINFO_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1AE03A10)
#define RPG_CLIENT_CLOCKPARKCHECKPOINTINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x1AE02CC0)
#define RPG_CLIENT_CLOCKPARKCHECKPOINTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE03060)
#define RPG_CLIENT_CLOCKPARKCHECKPOINTINFO__FILLCHECKPOINTPARAM_OFFSET UNITYSDK_OFFSET(0x1AE03310)
#define RPG_CLIENT_CLOCKPARKCHECKPOINTINFO__ONCHECKPOINTIDCHANGED_OFFSET UNITYSDK_OFFSET(0x1AE03260)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkCheckPointInfo_TypeDefinitionIndex = 58751;

	class ClockParkCheckPointInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::ClockParkCheckPointRow* _Config_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::Client::ClockParkAttributeType, ::System::UInt32>* CheckSingleAttributeDict; // 0x18
		::RPG::Client::ClockParkAttributeType CheckSingleAttributeType; // 0x20
		::System::UInt32 CheckSingleAttributeValue; // 0x24
		::System::UInt32 _CheckPointID_k__BackingField; // 0x28
		::System::UInt32 CheckBuffID; // 0x2C
		::System::UInt32 CheckTotalAttributeValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHECKPOINTINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHECKPOINTINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void RefreshCheckPointStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHECKPOINTINFO_REFRESHCHECKPOINTSTATUS_OFFSET))(this);
		}

		::System::Void _OnCheckPointIDChanged(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHECKPOINTINFO__ONCHECKPOINTIDCHANGED_OFFSET))(this, a1);
		}

		::System::Void _FillCheckPointParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHECKPOINTINFO__FILLCHECKPOINTPARAM_OFFSET))(this);
		}

		::System::Boolean get_HasCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHECKPOINTINFO_GET_HASCHECK_OFFSET))(this);
		}

		::System::Boolean get_HasMultiCheckSingleAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHECKPOINTINFO_GET_HASMULTICHECKSINGLEATTRIBUTE_OFFSET))(this);
		}

		::System::UInt32 get_CheckPointID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHECKPOINTINFO_GET_CHECKPOINTID_OFFSET))(this);
		}

		::System::Void set_CheckPointID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHECKPOINTINFO_SET_CHECKPOINTID_OFFSET))(this, a1);
		}

		::RPG::GameCore::ClockParkCheckPointRow* get_Config()
		{
			return ((::RPG::GameCore::ClockParkCheckPointRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHECKPOINTINFO_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::ClockParkCheckPointRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ClockParkCheckPointRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHECKPOINTINFO_SET_CONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::ClockParkCheckPointType get_CheckPointType()
		{
			return ((::RPG::GameCore::ClockParkCheckPointType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHECKPOINTINFO_GET_CHECKPOINTTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_CheckPointDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHECKPOINTINFO_GET_CHECKPOINTDESC_OFFSET))(this);
		}
	};
}
