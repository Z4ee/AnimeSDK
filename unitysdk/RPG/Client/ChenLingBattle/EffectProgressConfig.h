#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHENLINGBATTLE_EFFECTPROGRESSCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0xB5C01E0)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECTPROGRESSCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0xB5C0320)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECTPROGRESSCONFIG_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xB5C0340)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECTPROGRESSCONFIG_SET_ID_OFFSET UNITYSDK_OFFSET(0xB5C0330)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECTPROGRESSCONFIG_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xB5C0350)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECTPROGRESSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB5C0310)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int EffectProgressConfig_TypeDefinitionIndex = 70933;

	class EffectProgressConfig : public ::System::Object
	{
	public:
		::System::UInt32 _Progress_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECTPROGRESSCONFIG__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChenLingBattle::EffectProgressConfig* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChenLingBattle::EffectProgressConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECTPROGRESSCONFIG_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECTPROGRESSCONFIG_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECTPROGRESSCONFIG_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Progress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECTPROGRESSCONFIG_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void set_Progress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECTPROGRESSCONFIG_SET_PROGRESS_OFFSET))(this, a1);
		}
	};
}
