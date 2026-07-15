#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_Transform_RotateType.h"
#include "unitysdk/RPG/Client/RotateAxis.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class Effect_Transform; }

#define RPG_GAMECORE_TIMELINEOVERRIDEEFFECTTRANSFORMROTATEPARAMS_METHOD_1_9E3F716220C7A711_OFFSET UNITYSDK_OFFSET(0x10667F40)
#define RPG_GAMECORE_TIMELINEOVERRIDEEFFECTTRANSFORMROTATEPARAMS_METHOD_1_FF12EDFB6B41BDC9_OFFSET UNITYSDK_OFFSET(0x10667E40)
#define RPG_GAMECORE_TIMELINEOVERRIDEEFFECTTRANSFORMROTATEPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x10667F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimelineOverrideEffectTransformRotateParams_TypeDefinitionIndex = 54794;

	class TimelineOverrideEffectTransformRotateParams : public ::System::Object
	{
	public:
		::RPG::Client::Effect_Transform_RotateType TransRotateType; // 0x10
		::System::Boolean UseLoopRotate; // 0x14
		::System::Boolean RotateObjectSpace; // 0x15
		::System::Boolean IsTimeSetAngle; // 0x16
		::RPG::Client::RotateAxis RotAxis; // 0x18
		::System::Single RotateSpeed; // 0x1C
		::System::Single RotateFrequency; // 0x20
		::System::Single RotateNoise3DSpeed; // 0x24
		::System::Single WobbyScale; // 0x28
		::UnityEngine::Vector3 WobblyCenterOffset; // 0x2C
		::System::Single SwingAngle; // 0x38
		::System::Single SwingFrequency; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMELINEOVERRIDEEFFECTTRANSFORMROTATEPARAMS__CTOR_OFFSET))(this);
		}

		static ::RPG::GameCore::TimelineOverrideEffectTransformRotateParams* Method_1_FF12EDFB6B41BDC9(::RPG::Client::Effect_Transform* a1)
		{
			return ((::RPG::GameCore::TimelineOverrideEffectTransformRotateParams*(*)(::RPG::Client::Effect_Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMELINEOVERRIDEEFFECTTRANSFORMROTATEPARAMS_METHOD_1_FF12EDFB6B41BDC9_OFFSET))(a1);
		}

		::System::Void Method_1_9E3F716220C7A711(::RPG::Client::Effect_Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Effect_Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMELINEOVERRIDEEFFECTTRANSFORMROTATEPARAMS_METHOD_1_9E3F716220C7A711_OFFSET))(this, a1);
		}
	};
}
