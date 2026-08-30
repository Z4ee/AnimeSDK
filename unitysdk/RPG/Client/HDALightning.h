#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Material; }

#define RPG_CLIENT_HDALIGHTNING_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A0440A0)
#define RPG_CLIENT_HDALIGHTNING_LATETICK_OFFSET UNITYSDK_OFFSET(0x1A044290)
#define RPG_CLIENT_HDALIGHTNING_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A044200)
#define RPG_CLIENT_HDALIGHTNING_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A044170)
#define RPG_CLIENT_HDALIGHTNING__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0444C0)

namespace RPG::Client
{
	inline static constexpr unsigned int HDALightning_TypeDefinitionIndex = 70571;

	class HDALightning : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Color MainColor; // 0x18
		::UnityEngine::Color BloomColor; // 0x28
		::System::Single BloomIntensity; // 0x38
		::System::Boolean UseDissolve; // 0x3C
		::System::Single DissolveValue; // 0x40
		::System::Boolean Show; // 0x44
		::UnityEngine::Material* IMOHCDHKBAJ; // 0x48
		::System::Boolean NIJFGCPDBIC; // 0x50
		::System::Boolean CCLHPIFFMCP; // 0x51

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HDALIGHTNING__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HDALIGHTNING_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HDALIGHTNING_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HDALIGHTNING_ONDISABLE_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_HDALIGHTNING_LATETICK_OFFSET))(this, a1);
		}
	};
}
