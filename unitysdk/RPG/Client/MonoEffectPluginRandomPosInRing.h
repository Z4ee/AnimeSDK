#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

class Class_2_42D78ECFC042780F;
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINRANDOMPOSINRING_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0x19136670)
#define RPG_CLIENT_MONOEFFECTPLUGINRANDOMPOSINRING_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0x19136730)
#define RPG_CLIENT_MONOEFFECTPLUGINRANDOMPOSINRING_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x19136890)
#define RPG_CLIENT_MONOEFFECTPLUGINRANDOMPOSINRING_GET_TARGETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x19136940)
#define RPG_CLIENT_MONOEFFECTPLUGINRANDOMPOSINRING_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0x19136630)
#define RPG_CLIENT_MONOEFFECTPLUGINRANDOMPOSINRING_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x191367F0)
#define RPG_CLIENT_MONOEFFECTPLUGINRANDOMPOSINRING_TICK_OFFSET UNITYSDK_OFFSET(0x191368D0)
#define RPG_CLIENT_MONOEFFECTPLUGINRANDOMPOSINRING__CTOR_OFFSET UNITYSDK_OFFSET(0x19136990)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginRandomPosInRing_TypeDefinitionIndex = 66960;

	class MonoEffectPluginRandomPosInRing : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::UnityEngine::ParticleSystem* Target; // 0x28
		::System::Single InnerRadius; // 0x30
		::System::Single OuterRadius; // 0x34
		::System::Single RandomInterval; // 0x38
		::System::Boolean EnableGroundCheck; // 0x3C
		::System::Single GroundCheckUp; // 0x40
		::System::Single GroundCheckDown; // 0x44
		::System::Boolean EnableNavmeshCheck; // 0x48
		::System::Single NavmeshCheckRadius; // 0x4C
		::System::Single LowSpeedEmissionRateMultiplier; // 0x50
		::System::Single HighSpeedEmissionRateMultiplier; // 0x54
		::Class_2_42D78ECFC042780F* Field_6_11; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINRANDOMPOSINRING__CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINRANDOMPOSINRING_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINRANDOMPOSINRING_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINRANDOMPOSINRING_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINRANDOMPOSINRING_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINRANDOMPOSINRING_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINRANDOMPOSINRING_TICK_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_TargetTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINRANDOMPOSINRING_GET_TARGETTRANSFORM_OFFSET))(this);
		}
	};
}
