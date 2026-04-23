#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhoneMessagePlayMode.h"
#include "unitysdk/System/ValueType.h"

#define RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x59D0)
#define RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_GET_PLAYMODE_OFFSET UNITYSDK_OFFSET(0xD240)
#define RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_GET_WITHNOTICE_OFFSET UNITYSDK_OFFSET(0xE21D0)
#define RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x299E0)
#define RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_SET_PLAYMODE_OFFSET UNITYSDK_OFFSET(0xD250)
#define RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_SET_WITHNOTICE_OFFSET UNITYSDK_OFFSET(0xE21E0)
#define RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xE21F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhoneNoticeShowAdaptiveInfo_TypeDefinitionIndex = 48297;

	struct alignas(4) PhoneNoticeShowAdaptiveInfo
	{
		::System::UInt32 _GroupID; // 0x10
		::System::Boolean _WithNotice; // 0x14
		::RPG::GameCore::PhoneMessagePlayMode _PlayMode; // 0x18

		::System::Void _ctor(::System::UInt32 groupID, ::System::Boolean withNotice, ::RPG::GameCore::PhoneMessagePlayMode playMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::RPG::GameCore::PhoneMessagePlayMode))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO__CTOR_OFFSET))(this, groupID, withNotice, playMode);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_SET_GROUPID_OFFSET))(this, value);
		}

		::System::Boolean get_WithNotice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_GET_WITHNOTICE_OFFSET))(this);
		}

		::System::Void set_WithNotice(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_SET_WITHNOTICE_OFFSET))(this, value);
		}

		::RPG::GameCore::PhoneMessagePlayMode get_PlayMode()
		{
			return ((::RPG::GameCore::PhoneMessagePlayMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_GET_PLAYMODE_OFFSET))(this);
		}

		::System::Void set_PlayMode(::RPG::GameCore::PhoneMessagePlayMode value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhoneMessagePlayMode))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_SET_PLAYMODE_OFFSET))(this, value);
		}
	};
}
