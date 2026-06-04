#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhoneMessagePlayMode.h"
#include "unitysdk/System/ValueType.h"

#define RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_GET_PLAYMODE_OFFSET UNITYSDK_OFFSET(0xDAD0)
#define RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_GET_WITHNOTICE_OFFSET UNITYSDK_OFFSET(0x147C60)
#define RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x2C4C0)
#define RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_SET_PLAYMODE_OFFSET UNITYSDK_OFFSET(0xDAE0)
#define RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_SET_WITHNOTICE_OFFSET UNITYSDK_OFFSET(0x147C70)
#define RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x147C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhoneNoticeShowAdaptiveInfo_TypeDefinitionIndex = 48923;

	struct alignas(4) PhoneNoticeShowAdaptiveInfo
	{
		::System::UInt32 _GroupID; // 0x10
		::System::Boolean _WithNotice; // 0x14
		::RPG::GameCore::PhoneMessagePlayMode _PlayMode; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2, ::RPG::GameCore::PhoneMessagePlayMode a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::RPG::GameCore::PhoneMessagePlayMode))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_SET_GROUPID_OFFSET))(this, a1);
		}

		::System::Boolean get_WithNotice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_GET_WITHNOTICE_OFFSET))(this);
		}

		::System::Void set_WithNotice(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_SET_WITHNOTICE_OFFSET))(this, a1);
		}

		::RPG::GameCore::PhoneMessagePlayMode get_PlayMode()
		{
			return ((::RPG::GameCore::PhoneMessagePlayMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_GET_PLAYMODE_OFFSET))(this);
		}

		::System::Void set_PlayMode(::RPG::GameCore::PhoneMessagePlayMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhoneMessagePlayMode))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_SET_PLAYMODE_OFFSET))(this, a1);
		}
	};
}
