#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class VolumeFogOptVolumeMonoPlugin; }
namespace RPG::CustomRP { class VolumetricFogController; }
namespace UnityEngine { class Camera; }

#define RPG_CLIENT_VOLUMEFOGOPTVOLUMEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xA77DD40)
#define RPG_CLIENT_VOLUMEFOGOPTVOLUMEBEHAVIOR_METHOD_3_56365F029467F494_OFFSET UNITYSDK_OFFSET(0xA77DDB0)
#define RPG_CLIENT_VOLUMEFOGOPTVOLUMEBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA77E510)
#define RPG_CLIENT_VOLUMEFOGOPTVOLUMEBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA77E1A0)
#define RPG_CLIENT_VOLUMEFOGOPTVOLUMEBEHAVIOR_METHOD_3_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0xA77DBC0)
#define RPG_CLIENT_VOLUMEFOGOPTVOLUMEBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xA77E230)
#define RPG_CLIENT_VOLUMEFOGOPTVOLUMEBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA77E500)
#define RPG_CLIENT_VOLUMEFOGOPTVOLUMEBEHAVIOR___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xA77E570)

namespace RPG::Client
{
	inline static constexpr unsigned int VolumeFogOptVolumeBehavior_TypeDefinitionIndex = 58037;

	class VolumeFogOptVolumeBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::RPG::CustomRP::VolumetricFogController* _FogLayer; // 0x38
		::System::Single _OriginDensity; // 0x40
		::UnityEngine::Camera* _MainCamera; // 0x48
		::System::Single _FadeDuration; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMEFOGOPTVOLUMEBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_C638E91FC0D3A13A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMEFOGOPTVOLUMEBEHAVIOR_METHOD_3_C638E91FC0D3A13A_OFFSET))(this);
		}

		::System::Boolean Method_3_56365F029467F494(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMEFOGOPTVOLUMEBEHAVIOR_METHOD_3_56365F029467F494_OFFSET))(this, a1);
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMEFOGOPTVOLUMEBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMEFOGOPTVOLUMEBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::RPG::Client::VolumeFogOptVolumeMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::VolumeFogOptVolumeMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMEFOGOPTVOLUMEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMEFOGOPTVOLUMEBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMEFOGOPTVOLUMEBEHAVIOR___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}
	};
}
