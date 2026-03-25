#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_RAIDFINISHINFO_GET_ISFIRSTFINISH_OFFSET UNITYSDK_OFFSET(0xA279B00)
#define RPG_CLIENT_RAIDFINISHINFO_GET_RAIDID_OFFSET UNITYSDK_OFFSET(0xA279AE0)
#define RPG_CLIENT_RAIDFINISHINFO_SET_ISFIRSTFINISH_OFFSET UNITYSDK_OFFSET(0xA279B10)
#define RPG_CLIENT_RAIDFINISHINFO_SET_RAIDID_OFFSET UNITYSDK_OFFSET(0xA279AF0)
#define RPG_CLIENT_RAIDFINISHINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA279AD0)

namespace RPG::Client
{
	inline static constexpr unsigned int RaidFinishInfo_TypeDefinitionIndex = 54328;

	class RaidFinishInfo : public ::System::Object
	{
	public:
		::System::UInt32 _RaidID_k__BackingField; // 0x10
		::System::Boolean _IsFirstFinish_k__BackingField; // 0x14

		::System::Void _ctor(::System::UInt32 raidID, ::System::Boolean isFirstFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDFINISHINFO__CTOR_OFFSET))(this, raidID, isFirstFinish);
		}

		::System::UInt32 get_RaidID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDFINISHINFO_GET_RAIDID_OFFSET))(this);
		}

		::System::Void set_RaidID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDFINISHINFO_SET_RAIDID_OFFSET))(this, value);
		}

		::System::Boolean get_IsFirstFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDFINISHINFO_GET_ISFIRSTFINISH_OFFSET))(this);
		}

		::System::Void set_IsFirstFinish(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDFINISHINFO_SET_ISFIRSTFINISH_OFFSET))(this, value);
		}
	};
}
