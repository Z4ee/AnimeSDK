#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_831FF41FA9AE2628;

#define RPG_CLIENT_EFFECT_FLAREOCCLUSION_AWAKE_OFFSET UNITYSDK_OFFSET(0x15E5B8B0)
#define RPG_CLIENT_EFFECT_FLAREOCCLUSION_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x15E5BA10)
#define RPG_CLIENT_EFFECT_FLAREOCCLUSION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15E5B920)
#define RPG_CLIENT_EFFECT_FLAREOCCLUSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x15E5B9C0)
#define RPG_CLIENT_EFFECT_FLAREOCCLUSION__CTOR_OFFSET UNITYSDK_OFFSET(0x15E5BA80)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_FlareOcclusion_TypeDefinitionIndex = 70438;

	class Effect_FlareOcclusion : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single EnableRange; // 0x18
		::Class_2_831FF41FA9AE2628* EIGCKKONNIO; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FLAREOCCLUSION__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FLAREOCCLUSION_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FLAREOCCLUSION_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FLAREOCCLUSION_UPDATE_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FLAREOCCLUSION_ONDRAWGIZMOS_OFFSET))(this);
		}
	};
}
