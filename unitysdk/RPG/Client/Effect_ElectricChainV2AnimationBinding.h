#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class Effect_ElectricChainV2AnimationBindingBehavior; }
namespace RPG::Client::ElectricChainV2 { class Effect_ElectricChainV2; }
namespace System { class String; }

#define RPG_CLIENT_EFFECT_ELECTRICCHAINV2ANIMATIONBINDING_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x150E75C0)
#define RPG_CLIENT_EFFECT_ELECTRICCHAINV2ANIMATIONBINDING__CTOR_OFFSET UNITYSDK_OFFSET(0x150E7610)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_ElectricChainV2AnimationBinding_TypeDefinitionIndex = 67307;

	class Effect_ElectricChainV2AnimationBinding : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::Effect_ElectricChainV2AnimationBindingBehavior*>
	{
	public:
		::RPG::Client::ElectricChainV2::Effect_ElectricChainV2* Target; // 0x30
		::System::Single Interval; // 0x38
		::System::Single Detail; // 0x3C
		::System::Single Displacement; // 0x40
		::System::Single LineWidthMultiplier; // 0x44
		::System::Single SubChainLineWidthMultiplier; // 0x48
		::UnityEngine::Vector4 GaussianConstraintDistribution; // 0x4C
		::System::Boolean GaussianConstraintInverse; // 0x5C
		::UnityEngine::Vector4 SubChainGaussianConstraintDistribution; // 0x60
		::System::Boolean SubChainGaussianConstraintInverse; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ELECTRICCHAINV2ANIMATIONBINDING__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ELECTRICCHAINV2ANIMATIONBINDING_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
