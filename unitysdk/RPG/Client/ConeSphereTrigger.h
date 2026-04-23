#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ConeSphereTrigger_TriggerPattern.h"
#include "unitysdk/Struct_2_984AA94FB23486F9_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_594;
namespace RPG::Client { class ConeCollider; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class MeshCollider; }
namespace UnityEngine { class SphereCollider; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CONESPHERETRIGGER_FOLLOWCHANGE_OFFSET UNITYSDK_OFFSET(0xA0CC660)
#define RPG_CLIENT_CONESPHERETRIGGER_GET_PATTERN_OFFSET UNITYSDK_OFFSET(0xA0CC180)
#define RPG_CLIENT_CONESPHERETRIGGER_INIT_OFFSET UNITYSDK_OFFSET(0xA0CC1D0)
#define RPG_CLIENT_CONESPHERETRIGGER_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xA0CC9C0)
#define RPG_CLIENT_CONESPHERETRIGGER_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0xA0CCA70)
#define RPG_CLIENT_CONESPHERETRIGGER_SYNCLIGHTCONETRANSWHENFOLLOW_OFFSET UNITYSDK_OFFSET(0xA0CC7C0)
#define RPG_CLIENT_CONESPHERETRIGGER_SYNCLIGHTCONETRANS_OFFSET UNITYSDK_OFFSET(0xA0CC3B0)
#define RPG_CLIENT_CONESPHERETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA0CCB20)

namespace RPG::Client
{
	inline static constexpr unsigned int ConeSphereTrigger_TypeDefinitionIndex = 55799;

	class ConeSphereTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean IsFollowing; // 0x18
		::System::Boolean IsHitalbe; // 0x19
		::UnityEngine::MeshCollider* Field_5_2; // 0x20
		::RPG::Client::ConeCollider* Field_5_3; // 0x28
		::UnityEngine::SphereCollider* Field_5_4; // 0x30
		::UnityEngine::Transform* Field_5_5; // 0x38
		::System::Single Field_5_6; // 0x40
		::Class_0_16E4307DCC419505_594* Field_5_7; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONESPHERETRIGGER__CTOR_OFFSET))(this);
		}

		::RPG::Client::ConeSphereTrigger_TriggerPattern get_Pattern()
		{
			return ((::RPG::Client::ConeSphereTrigger_TriggerPattern(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONESPHERETRIGGER_GET_PATTERN_OFFSET))(this);
		}

		::System::Void Init(::Class_0_16E4307DCC419505_594* a1, ::UnityEngine::Transform* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_594*, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONESPHERETRIGGER_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SyncLightConeTrans(::Struct_2_984AA94FB23486F9_1 a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_984AA94FB23486F9_1, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONESPHERETRIGGER_SYNCLIGHTCONETRANS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FollowChange(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONESPHERETRIGGER_FOLLOWCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void SyncLightConeTransWhenFollow(::Struct_2_984AA94FB23486F9_1 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_984AA94FB23486F9_1, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONESPHERETRIGGER_SYNCLIGHTCONETRANSWHENFOLLOW_OFFSET))(this, a1, a2);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONESPHERETRIGGER_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONESPHERETRIGGER_ONTRIGGEREXIT_OFFSET))(this, a1);
		}
	};
}
