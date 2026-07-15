#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChain_DisplaceType.h"
#include "unitysdk/RPG/Client/ElectricChain_LineControlMode.h"
#include "unitysdk/RPG/Client/ElectricChain_UpdateType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class AnimationCurve; }

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_ElectricChainAnimationSupport_ElectricChainAnimationSupport_TypeDefinitionIndex = 67297;

	struct alignas(8) Effect_ElectricChainAnimationSupport_ElectricChainAnimationSupport
	{
		::System::Single detail; // 0x10
		::RPG::Client::ElectricChain_DisplaceType displaceType; // 0x14
		::System::Single displacement; // 0x18
		::RPG::Client::ElectricChain_LineControlMode lineControlMode; // 0x1C
		::System::Single lineControlConstant; // 0x20
		::UnityEngine::AnimationCurve* lineControlCurve; // 0x28
		::UnityEngine::Vector4 lineControlDistribution; // 0x30
		::System::Boolean lineControlDistributionInverse; // 0x40
		::System::Single updateInterval; // 0x44
		::RPG::Client::ElectricChain_UpdateType updateType; // 0x48
	};
}
