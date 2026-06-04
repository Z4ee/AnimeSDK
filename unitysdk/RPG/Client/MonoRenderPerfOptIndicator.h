#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EnviroCharaType.h"
#include "unitysdk/RPG/CustomRP/EObjectFeature.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MONORENDERPERFOPTINDICATOR_METHOD_5_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0xC140D60)
#define RPG_CLIENT_MONORENDERPERFOPTINDICATOR_METHOD_5_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xC140EC0)
#define RPG_CLIENT_MONORENDERPERFOPTINDICATOR_METHOD_5_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xC140C90)
#define RPG_CLIENT_MONORENDERPERFOPTINDICATOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC140FD0)
#define RPG_CLIENT_MONORENDERPERFOPTINDICATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC140F70)
#define RPG_CLIENT_MONORENDERPERFOPTINDICATOR_REFRESH_OFFSET UNITYSDK_OFFSET(0xC140C20)
#define RPG_CLIENT_MONORENDERPERFOPTINDICATOR_SETRENDERERLAYERMASKWITHPOSM_OFFSET UNITYSDK_OFFSET(0xC140AD0)
#define RPG_CLIENT_MONORENDERPERFOPTINDICATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xC141020)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoRenderPerfOptIndicator_TypeDefinitionIndex = 64198;

	class MonoRenderPerfOptIndicator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean IsSceneObject; // 0x18
		::System::Boolean NeedShadow; // 0x19
		::System::Boolean IsFrequencyMove; // 0x1A
		::System::Boolean OverrideShadowExtent; // 0x1B
		::System::Single ShadowExtent; // 0x1C
		::System::Int32 POSMPriority; // 0x20
		::System::Boolean ShadowProbe; // 0x24
		::System::Boolean OverridePosition; // 0x25
		::RPG::Client::EnviroCharaType EnviroChara; // 0x28
		::RPG::CustomRP::EObjectFeature Field_5_9; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORENDERPERFOPTINDICATOR__CTOR_OFFSET))(this);
		}

		::System::Void SetRendererLayerMaskWithPOSM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORENDERPERFOPTINDICATOR_SETRENDERERLAYERMASKWITHPOSM_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORENDERPERFOPTINDICATOR_REFRESH_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORENDERPERFOPTINDICATOR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORENDERPERFOPTINDICATOR_ONDISABLE_OFFSET))(this);
		}

		::System::Void Method_5_18982EFD3B740683()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORENDERPERFOPTINDICATOR_METHOD_5_18982EFD3B740683_OFFSET))(this);
		}

		::System::Void Method_5_25DEA5C65A602671()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORENDERPERFOPTINDICATOR_METHOD_5_25DEA5C65A602671_OFFSET))(this);
		}

		::System::Void Method_5_AA169839CB93802A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORENDERPERFOPTINDICATOR_METHOD_5_AA169839CB93802A_OFFSET))(this);
		}
	};
}
