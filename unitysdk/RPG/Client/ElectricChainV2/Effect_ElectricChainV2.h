#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/Effect_ElectricChainV2Behavior_DisplacementType.h"
#include "unitysdk/RPG/Client/ElectricChainV2/Effect_ElectricChainV2Behavior_SubChainCollection.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client::ElectricChainV2 { class Constraint; }
namespace RPG::Client::ElectricChainV2 { class Effect_ElectricChainV2Behavior; }
namespace RPG::Client::ElectricChainV2 { class Line; }
namespace RPG::Client::ElectricChainV2 { class RandomUpdater; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x18E11410)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0x18E112D0)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2_RESTART_OFFSET UNITYSDK_OFFSET(0x18E11120)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2__CTOR_OFFSET UNITYSDK_OFFSET(0x18E11460)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int Effect_ElectricChainV2_TypeDefinitionIndex = 70173;

	class Effect_ElectricChainV2 : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior*>
	{
	public:
		::RPG::Client::ElectricChainV2::Line* Line; // 0x30
		::RPG::Client::ElectricChainV2::Constraint* LineConstraint; // 0x38
		::UnityEngine::AnimationCurve* LineWidth; // 0x40
		::System::Single LineWidthMultiplier; // 0x48
		::UnityEngine::Gradient* Color; // 0x50
		::UnityEngine::Material* Material; // 0x58
		::System::Int32 SortingOrder; // 0x60
		::RPG::Client::ElectricChainV2::RandomUpdater* Updater; // 0x68
		::System::Single Detail; // 0x70
		::System::Single Displacement; // 0x74
		::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_DisplacementType DisplacementType; // 0x78
		::System::Boolean EnableSubChain; // 0x7C
		::System::Boolean HideMainChain; // 0x7D
		::System::Int32 MaxSubChains; // 0x80
		::System::Collections::Generic::List_1<::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChainCollection>* SubChainCollections; // 0x88
		::RPG::Client::ElectricChainV2::Constraint* SubChainLineConstraint; // 0x90
		::UnityEngine::AnimationCurve* SubChainLineWidth; // 0x98
		::System::Single SubChainLineWidthMultiplier; // 0xA0
		::UnityEngine::Gradient* SubChainColor; // 0xA8
		::UnityEngine::Material* SubChainMaterial; // 0xB0
		::System::Int32 SubChainSortingOrder; // 0xB8
		::System::Int32 MainChainPointNumbers; // 0xBC
		::Il2CppArray<::System::Int32>* SubChainPointNumbers; // 0xC0
		::System::Int32 TotalPointNumbers; // 0xC8
		::UnityEngine::LineRenderer* MainChain; // 0xD0
		::UnityEngine::Transform* SubChainsRoot; // 0xD8
		::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior* Field_7_26; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2__CTOR_OFFSET))(this);
		}

		::System::Void Restart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2_RESTART_OFFSET))(this);
		}

		::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior* get_Behavior()
		{
			return ((::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2_GET_BEHAVIOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
