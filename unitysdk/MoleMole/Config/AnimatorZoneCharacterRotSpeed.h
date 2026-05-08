#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AvatarSteerType.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_677CEA8C88AC78AB;
class Class_2_240A31303D7EB320;
class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0xF96C9C0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_GET_ISUPDATEONEFRAME_OFFSET UNITYSDK_OFFSET(0xF96BF70)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xF96C520)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xF96BF80)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xF96C410)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_SAMPLECURVEVAL_OFFSET UNITYSDK_OFFSET(0xF96C770)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_SETROOTMOTIONROTATIONMUTED_OFFSET UNITYSDK_OFFSET(0xF96C250)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED__CTOR_OFFSET UNITYSDK_OFFSET(0xF96CA50)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0xF96CA60)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xF96CB30)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xF96CBF0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xF96CCA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneCharacterRotSpeed_TypeDefinitionIndex = 43292;

	class AnimatorZoneCharacterRotSpeed : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::UnityEngine::AnimationCurve* RotSpeedCurve; // 0x50
		::UnityEngine::AnimationCurve* rotSpeedCurve; // 0x58
		::System::Single rotSpeedFactor; // 0x60
		::MoleMole::AvatarSteerType steerType; // 0x64
		::System::Boolean AllowRootMotionRotation; // 0x65

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isUpdateOneFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_GET_ISUPDATEONEFRAME_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::System::Single SampleCurveVal(::System::Single animNormalizedTime, ::Class_2_240A31303D7EB320* zoneInfo, ::UnityEngine::AnimatorStateInfo curStateInfo, ::Class_3_F33F9DC5F4112336* animatorComponent)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::Class_2_240A31303D7EB320*, ::UnityEngine::AnimatorStateInfo, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_SAMPLECURVEVAL_OFFSET))(this, animNormalizedTime, zoneInfo, curStateInfo, animatorComponent);
		}

		::Class_1_677CEA8C88AC78AB* CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void SetRootMotionRotationMuted(::MoleMole::Battle::Entity* entity, ::System::Boolean isMute)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_SETROOTMOTIONROTATIONMUTED_OFFSET))(this, entity, isMute);
		}

		::Class_1_677CEA8C88AC78AB* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
