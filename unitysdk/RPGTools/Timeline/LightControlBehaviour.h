#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/LightParameter.h"
#include "unitysdk/RPGTools/Timeline/RecoverablePlayableBehaviour.h"
#include "unitysdk/RPGTools/Timeline/RimLightParameter.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class EnvironmentSystem; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_GET_ISCLOSECHARACTERSHADOW_OFFSET UNITYSDK_OFFSET(0x19A67BF0)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_METHOD_3_637DBA7901C3991A_OFFSET UNITYSDK_OFFSET(0x19A62FE0)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_METHOD_3_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x19A66150)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x19A62DB0)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_METHOD_3_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x19A66000)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_METHOD_3_A3C36642AA77866E_OFFSET UNITYSDK_OFFSET(0x19A647C0)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_METHOD_3_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x19A62F30)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_METHOD_3_C982C8295D29DA97_OFFSET UNITYSDK_OFFSET(0x19A67AE0)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_METHOD_3_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19A661A0)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x19A66070)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x19A62D10)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x19A62E50)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x19A67C10)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int LightControlBehaviour_TypeDefinitionIndex = 46650;

	class LightControlBehaviour : public ::RPGTools::Timeline::RecoverablePlayableBehaviour
	{
	public:
		static ::System::Boolean* StaticGet__LightControlBehaviourActive()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LightControlBehaviour_TypeDefinitionIndex)->GetStaticField(0x14700);
		}
		::System::Boolean enableDisableLocalMainLight; // 0x18
		::System::Single disableLocalMainLight; // 0x1C
		::System::Single _OriginDisableLocalMainLight; // 0x20
		::RPGTools::Timeline::LightParameter lightParameter; // 0x24
		::RPGTools::Timeline::LightParameter _OriginParameter; // 0x54
		::RPGTools::Timeline::RimLightParameter RimParameter; // 0x84
		::RPGTools::Timeline::RimLightParameter _OriginRimParameter; // 0xBC
		::UnityEngine::Vector3 _OriginMonsterDir; // 0xF4
		::System::Single CharacterShadowFactor; // 0x100
		::System::Boolean CharacterShadowFactorEnableInShaowProbe; // 0x104
		::System::Single _OriCharacterShadowFactor; // 0x108
		::System::Single CharacterAngleLimit; // 0x10C
		::System::Single _OriCharacterAngleLimit; // 0x110
		::System::Boolean _FirstFrame; // 0x114
		::RPG::Client::EnvironmentSystem* _EnvSystem; // 0x118
		::System::Int32 _TargetPriority; // 0x120
		::System::Boolean AutoReset; // 0x124
		::UnityEngine::Vector3 position; // 0x128
		::UnityEngine::GameObject* _CharacterGo; // 0x138

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_B877181B6123B7F6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_METHOD_3_B877181B6123B7F6_OFFSET))(this);
		}

		::System::Void Method_3_A27DC2C5A103933A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_METHOD_3_A27DC2C5A103933A_OFFSET))(this);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_8D61BE16C9463302()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_METHOD_3_8D61BE16C9463302_OFFSET))(this);
		}

		::System::Void Method_3_A3C36642AA77866E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_METHOD_3_A3C36642AA77866E_OFFSET))(this);
		}

		::System::Void Method_3_637DBA7901C3991A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_METHOD_3_637DBA7901C3991A_OFFSET))(this);
		}

		::System::Void Method_3_DE52BD42C4B0B772()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_METHOD_3_DE52BD42C4B0B772_OFFSET))(this);
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Boolean Method_3_C982C8295D29DA97()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_METHOD_3_C982C8295D29DA97_OFFSET))(this);
		}

		::System::Boolean get_IsCloseCharacterShadow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_GET_ISCLOSECHARACTERSHADOW_OFFSET))(this);
		}
	};
}
