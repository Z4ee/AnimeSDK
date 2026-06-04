#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_831FF41FA9AE2628;

#define RPG_CLIENT_EFFECT_FLAREOCCLUSION_AWAKE_OFFSET UNITYSDK_OFFSET(0xB84FE10)
#define RPG_CLIENT_EFFECT_FLAREOCCLUSION_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0xB84FF70)
#define RPG_CLIENT_EFFECT_FLAREOCCLUSION_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB84FE80)
#define RPG_CLIENT_EFFECT_FLAREOCCLUSION_UPDATE_OFFSET UNITYSDK_OFFSET(0xB84FF20)
#define RPG_CLIENT_EFFECT_FLAREOCCLUSION__CTOR_OFFSET UNITYSDK_OFFSET(0xB84FFE0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_FlareOcclusion_TypeDefinitionIndex = 65899;

	class Effect_FlareOcclusion : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single EnableRange; // 0x18
		::Class_2_831FF41FA9AE2628* Field_5_1; // 0x20

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
