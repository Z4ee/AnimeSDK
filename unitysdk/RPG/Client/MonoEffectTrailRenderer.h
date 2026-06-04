#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class TrailRenderer; }

#define RPG_CLIENT_MONOEFFECTTRAILRENDERER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC0F8380)
#define RPG_CLIENT_MONOEFFECTTRAILRENDERER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC0F8770)
#define RPG_CLIENT_MONOEFFECTTRAILRENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC0F8450)
#define RPG_CLIENT_MONOEFFECTTRAILRENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC0F84B0)
#define RPG_CLIENT_MONOEFFECTTRAILRENDERER_UPDATE_OFFSET UNITYSDK_OFFSET(0xC0F8510)
#define RPG_CLIENT_MONOEFFECTTRAILRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0xC0F87C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectTrailRenderer_TypeDefinitionIndex = 65581;

	class MonoEffectTrailRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single WidthFact; // 0x18
		::UnityEngine::TrailRenderer* Field_5_1; // 0x20
		::System::Int32 Field_5_2; // 0x28
		::System::Single Field_5_3; // 0x2C
		::System::Single Field_5_4; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTTRAILRENDERER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTTRAILRENDERER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTTRAILRENDERER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTTRAILRENDERER_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTTRAILRENDERER_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTTRAILRENDERER_ONDESTROY_OFFSET))(this);
		}
	};
}
