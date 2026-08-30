#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class VolumeFogOptVolumeMonoPlugin; }
namespace RPG::CustomRP { class VolumetricFogController; }
namespace UnityEngine { class Camera; }

#define RPG_CLIENT_VOLUMEFOGOPTVOLUMEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xE413910)
#define RPG_CLIENT_VOLUMEFOGOPTVOLUMEBEHAVIOR_METHOD_3_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0xE413780)
#define RPG_CLIENT_VOLUMEFOGOPTVOLUMEBEHAVIOR_METHOD_3_56365F029467F494_OFFSET UNITYSDK_OFFSET(0xE413990)
#define RPG_CLIENT_VOLUMEFOGOPTVOLUMEBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xE413E70)
#define RPG_CLIENT_VOLUMEFOGOPTVOLUMEBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xE413F00)
#define RPG_CLIENT_VOLUMEFOGOPTVOLUMEBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xE4141D0)

namespace RPG::Client
{
	inline static constexpr unsigned int VolumeFogOptVolumeBehavior_TypeDefinitionIndex = 70801;

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

		::System::Void Method_3_18982EFD3B740683()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMEFOGOPTVOLUMEBEHAVIOR_METHOD_3_18982EFD3B740683_OFFSET))(this);
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
	};
}
