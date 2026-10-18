#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_VORACITYINVASIONPROGRESSBUFFDATA_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0xE453200)
#define RPG_CLIENT_VORACITYINVASIONPROGRESSBUFFDATA_GET_PROGRESSPERCENT_OFFSET UNITYSDK_OFFSET(0xE453220)
#define RPG_CLIENT_VORACITYINVASIONPROGRESSBUFFDATA_SET_BUFFID_OFFSET UNITYSDK_OFFSET(0xE453210)
#define RPG_CLIENT_VORACITYINVASIONPROGRESSBUFFDATA_SET_PROGRESSPERCENT_OFFSET UNITYSDK_OFFSET(0xE453230)
#define RPG_CLIENT_VORACITYINVASIONPROGRESSBUFFDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE453240)

namespace RPG::Client
{
	inline static constexpr unsigned int VoracityInvasionProgressBuffData_TypeDefinitionIndex = 68266;

	class VoracityInvasionProgressBuffData : public ::System::Object
	{
	public:
		::System::Double _ProgressPercent_k__BackingField; // 0x10
		::System::UInt32 _BuffID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONPROGRESSBUFFDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_BuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONPROGRESSBUFFDATA_GET_BUFFID_OFFSET))(this);
		}

		::System::Void set_BuffID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONPROGRESSBUFFDATA_SET_BUFFID_OFFSET))(this, a1);
		}

		::System::Double get_ProgressPercent()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONPROGRESSBUFFDATA_GET_PROGRESSPERCENT_OFFSET))(this);
		}

		::System::Void set_ProgressPercent(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONPROGRESSBUFFDATA_SET_PROGRESSPERCENT_OFFSET))(this, a1);
		}
	};
}
