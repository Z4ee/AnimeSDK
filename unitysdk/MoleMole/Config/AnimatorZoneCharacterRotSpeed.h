#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AvatarSteerType.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_8377BAB19A574A40;
class Class_2_6597FE8F1F8C9FEB;
class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x12EF2960)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_GET_ISUPDATEONEFRAME_OFFSET UNITYSDK_OFFSET(0x12EF1EE0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12EF24B0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x12EF1EF0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x12EF2390)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_SAMPLECURVEVAL_OFFSET UNITYSDK_OFFSET(0x12EF2700)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_SETROOTMOTIONROTATIONMUTED_OFFSET UNITYSDK_OFFSET(0x12EF21D0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED__CTOR_OFFSET UNITYSDK_OFFSET(0x12EF29F0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x12EF2A00)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12EF2AD0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x12EF2B90)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x12EF2C40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneCharacterRotSpeed_TypeDefinitionIndex = 41943;

	class AnimatorZoneCharacterRotSpeed : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::UnityEngine::AnimationCurve* rotSpeedCurve; // 0x50
		::UnityEngine::AnimationCurve* RotSpeedCurve; // 0x58
		::System::Boolean AllowRootMotionRotation; // 0x60
		::MoleMole::AvatarSteerType steerType; // 0x61
		::System::Single rotSpeedFactor; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isUpdateOneFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_GET_ISUPDATEONEFRAME_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::System::Single SampleCurveVal(::System::Single animNormalizedTime, ::Class_2_6597FE8F1F8C9FEB* zoneInfo, ::UnityEngine::AnimatorStateInfo curStateInfo, ::Class_3_F33F9DC5F4112336* animatorComponent)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::Class_2_6597FE8F1F8C9FEB*, ::UnityEngine::AnimatorStateInfo, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_SAMPLECURVEVAL_OFFSET))(this, animNormalizedTime, zoneInfo, curStateInfo, animatorComponent);
		}

		::Class_1_8377BAB19A574A40* CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void SetRootMotionRotationMuted(::MoleMole::Battle::Entity* entity, ::System::Boolean isMute)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_SETROOTMOTIONROTATIONMUTED_OFFSET))(this, entity, isMute);
		}

		::Class_1_8377BAB19A574A40* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
