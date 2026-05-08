#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG_ISINUPDATE_OFFSET UNITYSDK_OFFSET(0x186C2540)
#define MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG_ISPOSTEND_OFFSET UNITYSDK_OFFSET(0x186C25D0)
#define MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG_ISPOSTSTART_OFFSET UNITYSDK_OFFSET(0x186C24B0)
#define MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x186C2640)
#define MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG__ONFRAMECHANGED_OFFSET UNITYSDK_OFFSET(0x186C2430)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EffectTimeSegmentConfig_TypeDefinitionIndex = 78034;

	class EffectTimeSegmentConfig : public ::System::Object
	{
	public:
		::System::Single StartNormalizedTime; // 0x10
		::System::Single EndNormalizedTime; // 0x14
		::System::Int32 StartFrame; // 0x18
		::System::Action_1<::MoleMole::Config::EffectTimeSegmentConfig*>* valueChangedCallback; // 0x20
		::System::Int32 EndFrame; // 0x28
		::System::Boolean isTimeMethod; // 0x2C
		::System::Single StartTime; // 0x30
		::System::Single EndTime; // 0x34
		::System::Boolean IsHideEndType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void _OnFrameChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG__ONFRAMECHANGED_OFFSET))(this);
		}

		::System::Boolean IsPostStart(::System::Int32 frameCount, ::System::Single currentTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG_ISPOSTSTART_OFFSET))(this, frameCount, currentTime);
		}

		::System::Boolean IsInUpdate(::System::Int32 frameCount, ::System::Single currentTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG_ISINUPDATE_OFFSET))(this, frameCount, currentTime);
		}

		::System::Boolean IsPostEnd(::System::Int32 frameCount, ::System::Single currentTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG_ISPOSTEND_OFFSET))(this, frameCount, currentTime);
		}
	};
}
