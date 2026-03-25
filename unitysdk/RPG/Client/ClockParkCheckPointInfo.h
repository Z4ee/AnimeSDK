#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ClockParkAttributeType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ClockParkCheckPointType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ClockParkCheckPointRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CLOCKPARKCHECKPOINTINFO_GET_CHECKPOINTDESC_OFFSET UNITYSDK_OFFSET(0x93EE980)
#define RPG_CLIENT_CLOCKPARKCHECKPOINTINFO_GET_CHECKPOINTID_OFFSET UNITYSDK_OFFSET(0x93EE940)
#define RPG_CLIENT_CLOCKPARKCHECKPOINTINFO_GET_CHECKPOINTTYPE_OFFSET UNITYSDK_OFFSET(0x93EE6A0)
#define RPG_CLIENT_CLOCKPARKCHECKPOINTINFO_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x93EE960)
#define RPG_CLIENT_CLOCKPARKCHECKPOINTINFO_GET_HASCHECK_OFFSET UNITYSDK_OFFSET(0x93EE6C0)
#define RPG_CLIENT_CLOCKPARKCHECKPOINTINFO_GET_HASMULTICHECKSINGLEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x93EE720)
#define RPG_CLIENT_CLOCKPARKCHECKPOINTINFO_REFRESHCHECKPOINTSTATUS_OFFSET UNITYSDK_OFFSET(0x93EE2C0)
#define RPG_CLIENT_CLOCKPARKCHECKPOINTINFO_SET_CHECKPOINTID_OFFSET UNITYSDK_OFFSET(0x93EE950)
#define RPG_CLIENT_CLOCKPARKCHECKPOINTINFO_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x93EE970)
#define RPG_CLIENT_CLOCKPARKCHECKPOINTINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x93EDCB0)
#define RPG_CLIENT_CLOCKPARKCHECKPOINTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x93EE050)
#define RPG_CLIENT_CLOCKPARKCHECKPOINTINFO__FILLCHECKPOINTPARAM_OFFSET UNITYSDK_OFFSET(0x93EE300)
#define RPG_CLIENT_CLOCKPARKCHECKPOINTINFO__ONCHECKPOINTIDCHANGED_OFFSET UNITYSDK_OFFSET(0x93EE250)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkCheckPointInfo_TypeDefinitionIndex = 49883;

	class ClockParkCheckPointInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::ClockParkAttributeType, ::System::UInt32>* CheckSingleAttributeDict; // 0x10
		::RPG::GameCore::ClockParkCheckPointRow* _Config_k__BackingField; // 0x18
		::RPG::Client::ClockParkAttributeType CheckSingleAttributeType; // 0x20
		::System::UInt32 CheckBuffID; // 0x24
		::System::UInt32 CheckTotalAttributeValue; // 0x28
		::System::UInt32 _CheckPointID_k__BackingField; // 0x2C
		::System::UInt32 CheckSingleAttributeValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHECKPOINTINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::System::UInt32 checkPointID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHECKPOINTINFO_SYNC_OFFSET))(this, checkPointID);
		}

		::System::Void RefreshCheckPointStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHECKPOINTINFO_REFRESHCHECKPOINTSTATUS_OFFSET))(this);
		}

		::System::Void _OnCheckPointIDChanged(::System::UInt32 checkPointID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHECKPOINTINFO__ONCHECKPOINTIDCHANGED_OFFSET))(this, checkPointID);
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

		::System::Void set_CheckPointID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHECKPOINTINFO_SET_CHECKPOINTID_OFFSET))(this, value);
		}

		::RPG::GameCore::ClockParkCheckPointRow* get_Config()
		{
			return ((::RPG::GameCore::ClockParkCheckPointRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHECKPOINTINFO_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::ClockParkCheckPointRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ClockParkCheckPointRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHECKPOINTINFO_SET_CONFIG_OFFSET))(this, value);
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
