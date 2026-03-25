#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_E9AF3B207BAC03C2;

#define RPG_CLIENT_EFFECT_FLAREOCCLUSION_AWAKE_OFFSET UNITYSDK_OFFSET(0x9549FD0)
#define RPG_CLIENT_EFFECT_FLAREOCCLUSION_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x954A130)
#define RPG_CLIENT_EFFECT_FLAREOCCLUSION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x954A040)
#define RPG_CLIENT_EFFECT_FLAREOCCLUSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x954A0E0)
#define RPG_CLIENT_EFFECT_FLAREOCCLUSION__CTOR_OFFSET UNITYSDK_OFFSET(0x954A1A0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_FlareOcclusion_TypeDefinitionIndex = 57709;

	class Effect_FlareOcclusion : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single EnableRange; // 0x18
		::Class_2_E9AF3B207BAC03C2* Field_5_1; // 0x20

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
