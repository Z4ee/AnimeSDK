#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_3_883E597458B91E77;
class Class_3_9CA249C88E9804C6;
class Class_3_C93CC3D2C2AC4067;
class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Collision; }

#define MONOROOTMOTION_CACHECOMPONENTS_OFFSET UNITYSDK_OFFSET(0x112F13F0)
#define MONOROOTMOTION_CANSKIPCURRENTANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x112F1A80)
#define MONOROOTMOTION_GET_MUTEROOTMOTION_OFFSET UNITYSDK_OFFSET(0x112F1310)
#define MONOROOTMOTION_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x112F16F0)
#define MONOROOTMOTION_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x112F1D20)
#define MONOROOTMOTION_ONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0x112F1DE0)
#define MONOROOTMOTION_SETOWNER_OFFSET UNITYSDK_OFFSET(0x112F1390)
#define MONOROOTMOTION_SET_MUTEROOTMOTION_OFFSET UNITYSDK_OFFSET(0x112F1320)
#define MONOROOTMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x112F1EA0)

inline static constexpr unsigned int MonoRootMotion_TypeDefinitionIndex = 73387;

class MonoRootMotion : public ::UnityEngine::MonoBehaviour
{
public:
	::MoleMole::Battle::Entity* _ownerEntity; // 0x18
	::System::Boolean collisionHandleEnable; // 0x20
	::System::Int32 _muteRootMotionCount; // 0x24
	::Class_3_883E597458B91E77* movementComponent; // 0x28
	::Class_3_C93CC3D2C2AC4067* modelComponent; // 0x30
	::Class_3_F33F9DC5F4112336* animatorComponent; // 0x38
	::Class_3_9CA249C88E9804C6* finalMoveComponent; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOROOTMOTION__CTOR_OFFSET))(this);
	}

	::System::Boolean get_MuteRootMotion()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOROOTMOTION_GET_MUTEROOTMOTION_OFFSET))(this);
	}

	::System::Void set_MuteRootMotion(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOROOTMOTION_SET_MUTEROOTMOTION_OFFSET))(this, value);
	}

	::System::Void SetOwner(::MoleMole::Battle::Entity* owner)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MONOROOTMOTION_SETOWNER_OFFSET))(this, owner);
	}

	::System::Void OnAnimatorMove()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOROOTMOTION_ONANIMATORMOVE_OFFSET))(this);
	}

	::System::Boolean CanSkipCurrentAnimatorMove()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOROOTMOTION_CANSKIPCURRENTANIMATORMOVE_OFFSET))(this);
	}

	::System::Void CacheComponents()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOROOTMOTION_CACHECOMPONENTS_OFFSET))(this);
	}

	::System::Void OnCollisionEnter(::UnityEngine::Collision* other)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + MONOROOTMOTION_ONCOLLISIONENTER_OFFSET))(this, other);
	}

	::System::Void OnCollisionExit(::UnityEngine::Collision* other)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + MONOROOTMOTION_ONCOLLISIONEXIT_OFFSET))(this, other);
	}
};
