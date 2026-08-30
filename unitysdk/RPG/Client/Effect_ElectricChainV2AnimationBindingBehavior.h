#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

namespace RPG::Client { class Effect_ElectricChainV2AnimationBinding; }
namespace RPG::Client::ElectricChainV2 { class GaussianConstraint; }

#define RPG_CLIENT_EFFECT_ELECTRICCHAINV2ANIMATIONBINDINGBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0x15E590E0)
#define RPG_CLIENT_EFFECT_ELECTRICCHAINV2ANIMATIONBINDINGBEHAVIOR_METHOD_3_1283EC0876EAAACF_OFFSET UNITYSDK_OFFSET(0x15E58A60)
#define RPG_CLIENT_EFFECT_ELECTRICCHAINV2ANIMATIONBINDINGBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15E589F0)
#define RPG_CLIENT_EFFECT_ELECTRICCHAINV2ANIMATIONBINDINGBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x15E59160)
#define RPG_CLIENT_EFFECT_ELECTRICCHAINV2ANIMATIONBINDINGBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x15E59540)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_ElectricChainV2AnimationBindingBehavior_TypeDefinitionIndex = 70430;

	class Effect_ElectricChainV2AnimationBindingBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::RPG::Client::ElectricChainV2::GaussianConstraint* _GaussianConstraint; // 0x38
		::RPG::Client::ElectricChainV2::GaussianConstraint* _SubChainGaussianConstraint; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ELECTRICCHAINV2ANIMATIONBINDINGBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ELECTRICCHAINV2ANIMATIONBINDINGBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_1283EC0876EAAACF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ELECTRICCHAINV2ANIMATIONBINDINGBEHAVIOR_METHOD_3_1283EC0876EAAACF_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ELECTRICCHAINV2ANIMATIONBINDINGBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::RPG::Client::Effect_ElectricChainV2AnimationBinding* get__Owner()
		{
			return ((::RPG::Client::Effect_ElectricChainV2AnimationBinding*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ELECTRICCHAINV2ANIMATIONBINDINGBEHAVIOR_GET__OWNER_OFFSET))(this);
		}
	};
}
