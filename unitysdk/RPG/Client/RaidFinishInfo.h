#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_RAIDFINISHINFO_GET_ISFIRSTFINISH_OFFSET UNITYSDK_OFFSET(0xC6AD830)
#define RPG_CLIENT_RAIDFINISHINFO_GET_RAIDID_OFFSET UNITYSDK_OFFSET(0xC6AD810)
#define RPG_CLIENT_RAIDFINISHINFO_SET_ISFIRSTFINISH_OFFSET UNITYSDK_OFFSET(0xC6AD840)
#define RPG_CLIENT_RAIDFINISHINFO_SET_RAIDID_OFFSET UNITYSDK_OFFSET(0xC6AD820)
#define RPG_CLIENT_RAIDFINISHINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC6AD800)

namespace RPG::Client
{
	inline static constexpr unsigned int RaidFinishInfo_TypeDefinitionIndex = 62424;

	class RaidFinishInfo : public ::System::Object
	{
	public:
		::System::Boolean _IsFirstFinish_k__BackingField; // 0x10
		::System::UInt32 _RaidID_k__BackingField; // 0x14

		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDFINISHINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_RaidID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDFINISHINFO_GET_RAIDID_OFFSET))(this);
		}

		::System::Void set_RaidID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDFINISHINFO_SET_RAIDID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFirstFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDFINISHINFO_GET_ISFIRSTFINISH_OFFSET))(this);
		}

		::System::Void set_IsFirstFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDFINISHINFO_SET_ISFIRSTFINISH_OFFSET))(this, a1);
		}
	};
}
