#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class MonoAttackHitBox_Class_3_A1231C7CCD391D53; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOATTACKHITBOX_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x19E2AFE0)
#define RPG_CLIENT_MONOATTACKHITBOX_METHOD_5_42C5BADE1C9EFC80_OFFSET UNITYSDK_OFFSET(0x19E2B180)
#define RPG_CLIENT_MONOATTACKHITBOX_METHOD_5_C8D6B29192F288ED_OFFSET UNITYSDK_OFFSET(0x19E2B220)
#define RPG_CLIENT_MONOATTACKHITBOX_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x19E2B560)
#define RPG_CLIENT_MONOATTACKHITBOX_RIGISTERHITDETECTRESULTFUNC_OFFSET UNITYSDK_OFFSET(0x19E2B770)
#define RPG_CLIENT_MONOATTACKHITBOX_SPAWNED_OFFSET UNITYSDK_OFFSET(0x19E2AFA0)
#define RPG_CLIENT_MONOATTACKHITBOX_UNRIGISTERHITDETECTRESULTFUNC_OFFSET UNITYSDK_OFFSET(0x19E2B7C0)
#define RPG_CLIENT_MONOATTACKHITBOX_UPDATE_OFFSET UNITYSDK_OFFSET(0x19E2B030)
#define RPG_CLIENT_MONOATTACKHITBOX__CTOR_OFFSET UNITYSDK_OFFSET(0x19E2B810)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoAttackHitBox_TypeDefinitionIndex = 68495;

	class MonoAttackHitBox : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* BIOKDLGFAKD; // 0x0
		// static const ::System::String* PNEBBDIFAFJ; // 0x0
		::RPG::GameCore::GameEntity* HOEGAPJBABG; // 0x18
		::UnityEngine::Transform* PKHCMAKACLF; // 0x20
		::RPG::Client::MonoAttackHitBox_Class_3_A1231C7CCD391D53* PLIMJDDAMHM; // 0x28

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

		::System::Void Method_5_C8D6B29192F288ED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOATTACKHITBOX_METHOD_5_C8D6B29192F288ED_OFFSET))(this);
		}
	};
}
