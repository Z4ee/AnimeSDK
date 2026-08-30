#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class OptimzieVolumeBaseMonoPlugin; }
namespace UnityEngine { class Camera; }

#define RPG_CLIENT_OPTIMIZEVOLUMEBASEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x191F8F00)
#define RPG_CLIENT_OPTIMIZEVOLUMEBASEBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x191F92F0)
#define RPG_CLIENT_OPTIMIZEVOLUMEBASEBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x191F9290)
#define RPG_CLIENT_OPTIMIZEVOLUMEBASEBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x191F8FC0)
#define RPG_CLIENT_OPTIMIZEVOLUMEBASEBEHAVIOR_METHOD_3_B6AF0B902BD08637_OFFSET UNITYSDK_OFFSET(0x191F8B00)
#define RPG_CLIENT_OPTIMIZEVOLUMEBASEBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x191F8F80)
#define RPG_CLIENT_OPTIMIZEVOLUMEBASEBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x191F9050)
#define RPG_CLIENT_OPTIMIZEVOLUMEBASEBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x191F9350)

namespace RPG::Client
{
	inline static constexpr unsigned int OptimizeVolumeBaseBehavior_TypeDefinitionIndex = 70794;

	class OptimizeVolumeBaseBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::Camera* _MainCamera; // 0x38
		::System::Single _FadeDuration; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZEVOLUMEBASEBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_3_B6AF0B902BD08637(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZEVOLUMEBASEBEHAVIOR_METHOD_3_B6AF0B902BD08637_OFFSET))(this, a1);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZEVOLUMEBASEBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZEVOLUMEBASEBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZEVOLUMEBASEBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZEVOLUMEBASEBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZEVOLUMEBASEBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::RPG::Client::OptimzieVolumeBaseMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::OptimzieVolumeBaseMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZEVOLUMEBASEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}
	};
}
