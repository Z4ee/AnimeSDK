#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/RPG/Client/TAUtils/SimpleTransform.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class Effect_InstanceArrayBehavior; }
namespace RPG::Client { class Effect_InstanceArrayBehavior_AnimationPropertyFloat; }
namespace RPG::Client { class Effect_InstanceArrayBehavior_AnimationPropertyVector; }
namespace RPG::Client { class Effect_InstanceArrayBehavior_Class_0_16E7307DCC43CB2C_19; }
namespace RPG::Client { class Effect_InstanceArrayBehavior_PossiblePropertyFloat; }
namespace RPG::Client { class Effect_InstanceArrayBehavior_PossiblePropertyVector; }
namespace RPG::Client { class Effect_InstanceArrayBehavior_RendererPackage; }
namespace RPG::Client::TAUtils { class QuaternionTransformAnimationCurve; }
namespace RPG::Client::TAUtils { class Vector3AnimationCurve; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_EFFECT_INSTANCEARRAYMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xA1D6D90)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_InstanceArrayMonoPlugin_TypeDefinitionIndex = 65108;

	class Effect_InstanceArrayMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::Effect_InstanceArrayBehavior*>
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Effect_InstanceArrayBehavior_RendererPackage*>* RendererPackages; // 0x30
		::RPG::Client::TAUtils::SimpleTransform RelativeTransform; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::Effect_InstanceArrayBehavior_Class_0_16E7307DCC43CB2C_19*>* AdditionalTransformers; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::Effect_InstanceArrayBehavior_PossiblePropertyFloat*>* PossiblePropertiesFloat; // 0x68
		::System::Collections::Generic::List_1<::RPG::Client::Effect_InstanceArrayBehavior_PossiblePropertyVector*>* PossiblePropertiesVector; // 0x70
		::System::Boolean EnableAnimation; // 0x78
		::System::Single AnimationTime; // 0x7C
		::System::Single AnimationDuration; // 0x80
		::RPG::Client::TAUtils::Vector3AnimationCurve* AnimationTranslation; // 0x88
		::RPG::Client::TAUtils::Vector3AnimationCurve* AnimationRotation; // 0x90
		::RPG::Client::TAUtils::Vector3AnimationCurve* AnimationScale; // 0x98
		::System::Collections::Generic::List_1<::RPG::Client::Effect_InstanceArrayBehavior_AnimationPropertyFloat*>* AnimationPropertyFloat; // 0xA0
		::System::Collections::Generic::List_1<::RPG::Client::Effect_InstanceArrayBehavior_AnimationPropertyVector*>* AnimationPropertyVector; // 0xA8
		::System::Boolean AutoPlay; // 0xB0
		::System::Single AutoPlaySpeed; // 0xB4
		::System::Boolean AutoPlayLoop; // 0xB8
		::UnityEngine::Vector2 AutoPlayLoopRange; // 0xBC
		::System::Boolean UseRandomSeed; // 0xC4
		::System::Int32 RandomSeed; // 0xC8
		::System::Collections::Generic::List_1<::RPG::Client::TAUtils::SimpleTransform>* InitialTransforms; // 0xD0
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* InitialTransformProxies; // 0xD8
		::System::Collections::Generic::List_1<::RPG::Client::TAUtils::QuaternionTransformAnimationCurve*>* InitialTransformAnimations; // 0xE0
		::System::Collections::Generic::List_1<::System::Single>* InitialAnimationDelays; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
