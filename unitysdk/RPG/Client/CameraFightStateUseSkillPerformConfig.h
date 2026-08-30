#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraFightStateCommonConfig.h"

namespace RPG::Client { class NamedColliderOffsetForUseSkillPerform; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_CAMERAFIGHTSTATEUSESKILLPERFORMCONFIG_METHOD_4_A50116B0468F7AD5_OFFSET UNITYSDK_OFFSET(0x1C858DC0)
#define RPG_CLIENT_CAMERAFIGHTSTATEUSESKILLPERFORMCONFIG_METHOD_4_F512B22EFCB593CA_OFFSET UNITYSDK_OFFSET(0x1C858BF0)
#define RPG_CLIENT_CAMERAFIGHTSTATEUSESKILLPERFORMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C858E20)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraFightStateUseSkillPerformConfig_TypeDefinitionIndex = 69551;

	class CameraFightStateUseSkillPerformConfig : public ::RPG::Client::CameraFightStateCommonConfig
	{
	public:
		::UnityEngine::AnimationCurve* CommonTeamWidthOffsetXCurve; // 0x20
		::UnityEngine::AnimationCurve* CommonTeamWidthOffsetYCurve; // 0x28
		::UnityEngine::AnimationCurve* CommonTeamWidthOffsetZCurve; // 0x30
		::System::Single NamedOrSomatoDynamicAnchorOffsetScale; // 0x38
		::System::Single NamedOrSomatoDynamicAimOffsetScale; // 0x3C
		::System::Collections::Generic::List_1<::RPG::Client::NamedColliderOffsetForUseSkillPerform*>* NamedColliderOffset; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAFIGHTSTATEUSESKILLPERFORMCONFIG__CTOR_OFFSET))(this);
		}

		::RPG::Client::NamedColliderOffsetForUseSkillPerform* Method_4_F512B22EFCB593CA(::System::String* a1, ::System::Collections::Generic::List_1<::RPG::Client::NamedColliderOffsetForUseSkillPerform*>* a2)
		{
			return ((::RPG::Client::NamedColliderOffsetForUseSkillPerform*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::RPG::Client::NamedColliderOffsetForUseSkillPerform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAFIGHTSTATEUSESKILLPERFORMCONFIG_METHOD_4_F512B22EFCB593CA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::NamedColliderOffsetForUseSkillPerform* Method_4_A50116B0468F7AD5(::System::String* a1)
		{
			return ((::RPG::Client::NamedColliderOffsetForUseSkillPerform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAFIGHTSTATEUSESKILLPERFORMCONFIG_METHOD_4_A50116B0468F7AD5_OFFSET))(this, a1);
		}
	};
}
