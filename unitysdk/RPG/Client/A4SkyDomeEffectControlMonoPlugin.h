#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class A4SkyDomeEffectControlBehavior; }
namespace RPG::Client { class A4SkyDomeEffectControlBehavior_SkyDomeControlData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_A4SKYDOMEEFFECTCONTROLMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xC499CF0)
#define RPG_CLIENT_A4SKYDOMEEFFECTCONTROLMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xC499D40)

namespace RPG::Client
{
	inline static constexpr unsigned int A4SkyDomeEffectControlMonoPlugin_TypeDefinitionIndex = 70837;

	class A4SkyDomeEffectControlMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::A4SkyDomeEffectControlBehavior*>
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* WeatherMats; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::A4SkyDomeEffectControlBehavior_SkyDomeControlData*>* AreaWeatherControlData; // 0x38
		::System::Int32 A0_WeatherID; // 0x40
		::System::Int32 A1_WeatherID; // 0x44
		::System::Int32 A2_WeatherID; // 0x48
		::System::Int32 A3_WeatherID; // 0x4C
		::System::Int32 A4_WeatherID; // 0x50
		::System::Int32 A0_TargetWeatherID; // 0x54
		::System::Int32 A1_TargetWeatherID; // 0x58
		::System::Int32 A2_TargetWeatherID; // 0x5C
		::System::Int32 A3_TargetWeatherID; // 0x60
		::System::Int32 A4_TargetWeatherID; // 0x64
		::System::Single A0_TransitionDuration; // 0x68
		::System::Single A1_TransitionDuration; // 0x6C
		::System::Single A2_TransitionDuration; // 0x70
		::System::Single A3_TransitionDuration; // 0x74
		::System::Single A4_TransitionDuration; // 0x78
		::System::Single A0_LaserHit; // 0x7C
		::System::Single A1_LaserHit; // 0x80
		::System::Single A2_LaserHit; // 0x84
		::System::Single A3_LaserHit; // 0x88
		::System::Single A4_LaserHit; // 0x8C
		::UnityEngine::Vector3 HitPosPolar; // 0x90
		::UnityEngine::Vector2 ChangeRangeScale; // 0x9C
		::UnityEngine::Vector3 SunPosition; // 0xA4
		::System::Single FlipRatio; // 0xB0
		::System::Single ArrowRatio; // 0xB4
		::UnityEngine::Vector3 LookAt; // 0xB8
		::System::Single MarkScale; // 0xC4
		::System::Boolean EnableClipHole; // 0xC8
		::UnityEngine::Texture2D* ClipHoleMap; // 0xD0
		::System::Single TriangleSize; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_A4SKYDOMEEFFECTCONTROLMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_A4SKYDOMEEFFECTCONTROLMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
