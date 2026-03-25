#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EPedestrianMemberSpecialTag.h"
#include "unitysdk/RPG/Client/IPedestrianMemberExternalConfig.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_PEDESTRIANMEMBEREXTERNALCONFIG_FLOATING_GET_SPECIALTAG_OFFSET UNITYSDK_OFFSET(0x9F209E0)
#define RPG_CLIENT_PEDESTRIANMEMBEREXTERNALCONFIG_FLOATING__CTOR_OFFSET UNITYSDK_OFFSET(0x9F209F0)

namespace RPG::Client
{
	inline static constexpr unsigned int PedestrianMemberExternalConfig_Floating_TypeDefinitionIndex = 56604;

	class PedestrianMemberExternalConfig_Floating : public ::RPG::Client::IPedestrianMemberExternalConfig
	{
	public:
		::System::Single Height; // 0x10
		::System::Single Length; // 0x14
		::Il2CppArray<::UnityEngine::AnimationCurve*>* FloatingCurves; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PEDESTRIANMEMBEREXTERNALCONFIG_FLOATING__CTOR_OFFSET))(this);
		}

		::RPG::Client::EPedestrianMemberSpecialTag get_SpecialTag()
		{
			return ((::RPG::Client::EPedestrianMemberSpecialTag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PEDESTRIANMEMBEREXTERNALCONFIG_FLOATING_GET_SPECIALTAG_OFFSET))(this);
		}
	};
}
