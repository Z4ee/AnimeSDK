#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ParticleRecorder { class BackwardParticlesInfoSO; }
namespace RPG::Client { class TimeRewindControlManager_TimeRewindEffBackwardSOAssetInfo; }

#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB2EC3A0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER___C__DISPLAYCLASS14_0___TICKCACHEDASSET_B__0_OFFSET UNITYSDK_OFFSET(0xB2EC3B0)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeRewindControlManager___c__DisplayClass14_0_TypeDefinitionIndex = 56089;

	class TimeRewindControlManager___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::RPG::Client::TimeRewindControlManager_TimeRewindEffBackwardSOAssetInfo* assetInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void __TickCachedAsset_b__0(::ParticleRecorder::BackwardParticlesInfoSO* effSo)
		{
			return ((::System::Void(*)(::PVOID, ::ParticleRecorder::BackwardParticlesInfoSO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER___C__DISPLAYCLASS14_0___TICKCACHEDASSET_B__0_OFFSET))(this, effSo);
		}
	};
}
