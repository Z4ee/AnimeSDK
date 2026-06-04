#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTDESTINATIONRINGCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC0895C0)
#define RPG_CLIENT_MONOEFFECTDESTINATIONRINGCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0xC089950)
#define RPG_CLIENT_MONOEFFECTDESTINATIONRINGCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC089D30)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectDestinationRingControl_TypeDefinitionIndex = 66148;

	class MonoEffectDestinationRingControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Renderer* TargetRenderer; // 0x18
		::UnityEngine::Color lineColor; // 0x20
		::System::Single mainIntensity; // 0x30
		::System::Single _AngelAccele; // 0x34
		::System::Single Field_5_4; // 0x38
		::System::Int32 Field_5_5; // 0x3C
		::System::Single Field_5_6; // 0x40
		::System::Int32 Field_5_7; // 0x44
		::System::Single Field_5_8; // 0x48
		::System::Int32 Field_5_9; // 0x4C
		::System::Single Field_5_10; // 0x50
		::System::Int32 Field_5_11; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTDESTINATIONRINGCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTDESTINATIONRINGCONTROL_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTDESTINATIONRINGCONTROL_UPDATE_OFFSET))(this);
		}
	};
}
