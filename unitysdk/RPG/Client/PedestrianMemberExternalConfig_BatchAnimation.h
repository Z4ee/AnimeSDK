#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EPedestrianMemberSpecialTag.h"
#include "unitysdk/RPG/Client/IPedestrianMemberExternalConfig.h"
#include "unitysdk/RPG/Client/PedestrianMemberExternalConfig_BatchAnimation_SpecialAnim.h"
#include "unitysdk/RVO/EAsyncNavMeshAgentPriority.h"

namespace System { class String; }
namespace UnityEngine { class ScriptableObject; }

#define RPG_CLIENT_PEDESTRIANMEMBEREXTERNALCONFIG_BATCHANIMATION_GET_SPECIALTAG_OFFSET UNITYSDK_OFFSET(0xAC45700)
#define RPG_CLIENT_PEDESTRIANMEMBEREXTERNALCONFIG_BATCHANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0xAC45710)

namespace RPG::Client
{
	inline static constexpr unsigned int PedestrianMemberExternalConfig_BatchAnimation_TypeDefinitionIndex = 63850;

	class PedestrianMemberExternalConfig_BatchAnimation : public ::RPG::Client::IPedestrianMemberExternalConfig
	{
	public:
		::System::String* IndependentQuality; // 0x10
		::System::String* BatchAnimationGroupPath; // 0x18
		::System::Int32 StandbyAnimIndex; // 0x20
		::System::Int32 Walk1AnimIndex; // 0x24
		::System::Int32 Walk2AnimIndex; // 0x28
		::System::Single ColliderRadius; // 0x2C
		::System::Single ModelScale; // 0x30
		::Il2CppArray<::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation_SpecialAnim>* SpecialAnims; // 0x38
		::UnityEngine::ScriptableObject* VariantCollection; // 0x40
		::System::Boolean UseDynamicWorldUp; // 0x48
		::RVO::EAsyncNavMeshAgentPriority NavMeshPriority; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PEDESTRIANMEMBEREXTERNALCONFIG_BATCHANIMATION__CTOR_OFFSET))(this);
		}

		::RPG::Client::EPedestrianMemberSpecialTag get_SpecialTag()
		{
			return ((::RPG::Client::EPedestrianMemberSpecialTag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PEDESTRIANMEMBEREXTERNALCONFIG_BATCHANIMATION_GET_SPECIALTAG_OFFSET))(this);
		}
	};
}
