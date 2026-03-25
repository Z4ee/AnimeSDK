#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class MonoAttackHitBox_Class_3_A1231C7CCD391D53; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOATTACKHITBOX_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x9C131B0)
#define RPG_CLIENT_MONOATTACKHITBOX_METHOD_5_42C5BADE1C9EFC80_OFFSET UNITYSDK_OFFSET(0x9C133E0)
#define RPG_CLIENT_MONOATTACKHITBOX_METHOD_5_AE828D899505A3B4_OFFSET UNITYSDK_OFFSET(0x9C13480)
#define RPG_CLIENT_MONOATTACKHITBOX_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x9C13760)
#define RPG_CLIENT_MONOATTACKHITBOX_RIGISTERHITDETECTRESULTFUNC_OFFSET UNITYSDK_OFFSET(0x9C14220)
#define RPG_CLIENT_MONOATTACKHITBOX_SPAWNED_OFFSET UNITYSDK_OFFSET(0x9C13170)
#define RPG_CLIENT_MONOATTACKHITBOX_UNRIGISTERHITDETECTRESULTFUNC_OFFSET UNITYSDK_OFFSET(0x9C14270)
#define RPG_CLIENT_MONOATTACKHITBOX_UPDATE_OFFSET UNITYSDK_OFFSET(0x9C13200)
#define RPG_CLIENT_MONOATTACKHITBOX__CTOR_OFFSET UNITYSDK_OFFSET(0x9C142C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoAttackHitBox_TypeDefinitionIndex = 55949;

	class MonoAttackHitBox : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* Field_5_0; // 0x0
		// static const ::System::String* Field_5_1; // 0x0
		::RPG::GameCore::GameEntity* Field_5_2; // 0x18
		::UnityEngine::Transform* Field_5_3; // 0x20
		::RPG::Client::MonoAttackHitBox_Class_3_A1231C7CCD391D53* Field_5_4; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOATTACKHITBOX__CTOR_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOATTACKHITBOX_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOATTACKHITBOX_DESPAWNED_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOATTACKHITBOX_UPDATE_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOATTACKHITBOX_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void RigisterHitDetectResultFunc(::RPG::Client::MonoAttackHitBox_Class_3_A1231C7CCD391D53* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoAttackHitBox_Class_3_A1231C7CCD391D53*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOATTACKHITBOX_RIGISTERHITDETECTRESULTFUNC_OFFSET))(this, a1);
		}

		::System::Void UnRigisterHitDetectResultFunc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOATTACKHITBOX_UNRIGISTERHITDETECTRESULTFUNC_OFFSET))(this);
		}

		::System::Boolean Method_5_42C5BADE1C9EFC80()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOATTACKHITBOX_METHOD_5_42C5BADE1C9EFC80_OFFSET))(this);
		}

		::System::Void Method_5_AE828D899505A3B4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOATTACKHITBOX_METHOD_5_AE828D899505A3B4_OFFSET))(this);
		}
	};
}
