#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BAF6F107F0961F34.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"

class Class_1_B4357A1C72BABC6B;
class Class_2_3FFD13E6C7D155DA;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;
namespace RPG::GameCore { class FiveDimAvatarMoveAbilityConfig; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define CLASS_2_B4E8F9645A445A22_CLEAR_OFFSET UNITYSDK_OFFSET(0x16032E70)
#define CLASS_2_B4E8F9645A445A22_GET_AVATARMOVEABILITYCONFIG_OFFSET UNITYSDK_OFFSET(0x16035540)
#define CLASS_2_B4E8F9645A445A22_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x16032F80)
#define CLASS_2_B4E8F9645A445A22_GET_PHYSICSPROXYRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x16035500)
#define CLASS_2_B4E8F9645A445A22_GET_PHYSICSPROXYTRANSFORM_OFFSET UNITYSDK_OFFSET(0x160354E0)
#define CLASS_2_B4E8F9645A445A22_GET_PREVSTATE_OFFSET UNITYSDK_OFFSET(0x160351B0)
#define CLASS_2_B4E8F9645A445A22_GET_PROXYCOLLIDER_OFFSET UNITYSDK_OFFSET(0x16035520)
#define CLASS_2_B4E8F9645A445A22_GET_SURFACECONSTRAINTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x160354C0)
#define CLASS_2_B4E8F9645A445A22_METHOD_2_063ADB01C44981A7_OFFSET UNITYSDK_OFFSET(0x16033C10)
#define CLASS_2_B4E8F9645A445A22_METHOD_2_1676BB4855527361_OFFSET UNITYSDK_OFFSET(0x16033020)
#define CLASS_2_B4E8F9645A445A22_METHOD_2_1C74751C0412CC90_OFFSET UNITYSDK_OFFSET(0x160342D0)
#define CLASS_2_B4E8F9645A445A22_METHOD_2_2A73302F5D8B0BA6_OFFSET UNITYSDK_OFFSET(0x16033A00)
#define CLASS_2_B4E8F9645A445A22_METHOD_2_4AADAF19CDCB660E_1_OFFSET UNITYSDK_OFFSET(0x16035370)
#define CLASS_2_B4E8F9645A445A22_METHOD_2_4AADAF19CDCB660E_OFFSET UNITYSDK_OFFSET(0x16035220)
#define CLASS_2_B4E8F9645A445A22_METHOD_2_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x16032B90)
#define CLASS_2_B4E8F9645A445A22_METHOD_2_522F2897D3370F6B_1_OFFSET UNITYSDK_OFFSET(0x16034640)
#define CLASS_2_B4E8F9645A445A22_METHOD_2_522F2897D3370F6B_OFFSET UNITYSDK_OFFSET(0x16033E30)
#define CLASS_2_B4E8F9645A445A22_METHOD_2_5AFFB40F1495B5C1_OFFSET UNITYSDK_OFFSET(0x16032EE0)
#define CLASS_2_B4E8F9645A445A22_METHOD_2_64B6514CFF8F8D76_OFFSET UNITYSDK_OFFSET(0x16032FF0)
#define CLASS_2_B4E8F9645A445A22_METHOD_2_95EAF395E6F95EA4_OFFSET UNITYSDK_OFFSET(0x16034BE0)
#define CLASS_2_B4E8F9645A445A22_METHOD_2_B5C80C792AD3C4FB_OFFSET UNITYSDK_OFFSET(0x160326A0)
#define CLASS_2_B4E8F9645A445A22_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16034E30)
#define CLASS_2_B4E8F9645A445A22_METHOD_2_DEDD31AF6F4E4818_OFFSET UNITYSDK_OFFSET(0x16033980)
#define CLASS_2_B4E8F9645A445A22_METHOD_2_ED37AFDFC73CCF51_OFFSET UNITYSDK_OFFSET(0x16032760)
#define CLASS_2_B4E8F9645A445A22_SET_AVATARMOVEABILITYCONFIG_OFFSET UNITYSDK_OFFSET(0x16035550)
#define CLASS_2_B4E8F9645A445A22_SET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x16032A90)
#define CLASS_2_B4E8F9645A445A22_SET_PHYSICSPROXYRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x16035510)
#define CLASS_2_B4E8F9645A445A22_SET_PHYSICSPROXYTRANSFORM_OFFSET UNITYSDK_OFFSET(0x160354F0)
#define CLASS_2_B4E8F9645A445A22_SET_PREVSTATE_OFFSET UNITYSDK_OFFSET(0x16032B10)
#define CLASS_2_B4E8F9645A445A22_SET_PROXYCOLLIDER_OFFSET UNITYSDK_OFFSET(0x16035530)
#define CLASS_2_B4E8F9645A445A22_SET_SURFACECONSTRAINTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x160354D0)
#define CLASS_2_B4E8F9645A445A22__CTOR_OFFSET UNITYSDK_OFFSET(0x16035560)

inline static constexpr unsigned int Class_2_B4E8F9645A445A22_TypeDefinitionIndex = 73012;

class Class_2_B4E8F9645A445A22 : public ::Class_1_BAF6F107F0961F34
{
public:
	::RPG::GameCore::FiveDimAvatarMoveAbilityConfig* _AvatarMoveAbilityConfig_k__BackingField; // 0x40
	::UnityEngine::Transform* _PhysicsProxyTransform_k__BackingField; // 0x48
	::UnityEngine::Rigidbody* _PhysicsProxyRigidBody_k__BackingField; // 0x50
	::UnityEngine::Transform* _SurfaceConstraintTransform_k__BackingField; // 0x58
	::UnityEngine::CapsuleCollider* _ProxyCollider_k__BackingField; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E8F9645A445A22__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B5C80C792AD3C4FB(::Class_2_B9E8C2EEAA5C96EC* a1, ::Class_3_1E4F9B0ED3BF21DE* a2, ::Class_1_B4357A1C72BABC6B* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Class_3_1E4F9B0ED3BF21DE*, ::Class_1_B4357A1C72BABC6B*))((::PBYTE)hIl2Cpp + CLASS_2_B4E8F9645A445A22_METHOD_2_B5C80C792AD3C4FB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E8F9645A445A22_CLEAR_OFFSET))(this);
	}

	::System::Void Method_2_5AFFB40F1495B5C1(::RPG::Client::LittleGame::Move::MoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_2_B4E8F9645A445A22_METHOD_2_5AFFB40F1495B5C1_OFFSET))(this, a1);
	}

	::System::Void Method_2_1676BB4855527361(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B4E8F9645A445A22_METHOD_2_1676BB4855527361_OFFSET))(this, a1);
	}

	::System::Void Method_2_522F2897D3370F6B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B4E8F9645A445A22_METHOD_2_522F2897D3370F6B_OFFSET))(this, a1);
	}

	::System::Void Method_2_1C74751C0412CC90(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B4E8F9645A445A22_METHOD_2_1C74751C0412CC90_OFFSET))(this, a1);
	}

	::System::Void Method_2_522F2897D3370F6B_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B4E8F9645A445A22_METHOD_2_522F2897D3370F6B_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_95EAF395E6F95EA4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B4E8F9645A445A22_METHOD_2_95EAF395E6F95EA4_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E8F9645A445A22_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_ED37AFDFC73CCF51(::Class_3_1E4F9B0ED3BF21DE* a1, ::Class_2_B9E8C2EEAA5C96EC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1E4F9B0ED3BF21DE*, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_2_B4E8F9645A445A22_METHOD_2_ED37AFDFC73CCF51_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_2A73302F5D8B0BA6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E8F9645A445A22_METHOD_2_2A73302F5D8B0BA6_OFFSET))(this);
	}

	::System::Void Method_2_5176DC743E478510()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E8F9645A445A22_METHOD_2_5176DC743E478510_OFFSET))(this);
	}

	::System::Void Method_2_063ADB01C44981A7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B4E8F9645A445A22_METHOD_2_063ADB01C44981A7_OFFSET))(this, a1);
	}

	::Class_2_B9E8C2EEAA5C96EC* Method_2_64B6514CFF8F8D76()
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E8F9645A445A22_METHOD_2_64B6514CFF8F8D76_OFFSET))(this);
	}

	::RPG::Client::LittleGame::Move::MoveState get_CurrentState()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E8F9645A445A22_GET_CURRENTSTATE_OFFSET))(this);
	}

	::System::Void set_CurrentState(::RPG::Client::LittleGame::Move::MoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_2_B4E8F9645A445A22_SET_CURRENTSTATE_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::Move::MoveState get_PrevState()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E8F9645A445A22_GET_PREVSTATE_OFFSET))(this);
	}

	::System::Void set_PrevState(::RPG::Client::LittleGame::Move::MoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_2_B4E8F9645A445A22_SET_PREVSTATE_OFFSET))(this, a1);
	}

	::Class_2_3FFD13E6C7D155DA* Method_2_DEDD31AF6F4E4818()
	{
		return ((::Class_2_3FFD13E6C7D155DA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E8F9645A445A22_METHOD_2_DEDD31AF6F4E4818_OFFSET))(this);
	}

	::System::Boolean Method_2_4AADAF19CDCB660E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E8F9645A445A22_METHOD_2_4AADAF19CDCB660E_OFFSET))(this);
	}

	::System::Boolean Method_2_4AADAF19CDCB660E_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E8F9645A445A22_METHOD_2_4AADAF19CDCB660E_1_OFFSET))(this);
	}

	::UnityEngine::Transform* get_SurfaceConstraintTransform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E8F9645A445A22_GET_SURFACECONSTRAINTTRANSFORM_OFFSET))(this);
	}

	::System::Void set_SurfaceConstraintTransform(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_B4E8F9645A445A22_SET_SURFACECONSTRAINTTRANSFORM_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_PhysicsProxyTransform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E8F9645A445A22_GET_PHYSICSPROXYTRANSFORM_OFFSET))(this);
	}

	::System::Void set_PhysicsProxyTransform(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_B4E8F9645A445A22_SET_PHYSICSPROXYTRANSFORM_OFFSET))(this, a1);
	}

	::UnityEngine::Rigidbody* get_PhysicsProxyRigidBody()
	{
		return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E8F9645A445A22_GET_PHYSICSPROXYRIGIDBODY_OFFSET))(this);
	}

	::System::Void set_PhysicsProxyRigidBody(::UnityEngine::Rigidbody* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + CLASS_2_B4E8F9645A445A22_SET_PHYSICSPROXYRIGIDBODY_OFFSET))(this, a1);
	}

	::UnityEngine::CapsuleCollider* get_ProxyCollider()
	{
		return ((::UnityEngine::CapsuleCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E8F9645A445A22_GET_PROXYCOLLIDER_OFFSET))(this);
	}

	::System::Void set_ProxyCollider(::UnityEngine::CapsuleCollider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::CapsuleCollider*))((::PBYTE)hIl2Cpp + CLASS_2_B4E8F9645A445A22_SET_PROXYCOLLIDER_OFFSET))(this, a1);
	}

	::RPG::GameCore::FiveDimAvatarMoveAbilityConfig* get_AvatarMoveAbilityConfig()
	{
		return ((::RPG::GameCore::FiveDimAvatarMoveAbilityConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E8F9645A445A22_GET_AVATARMOVEABILITYCONFIG_OFFSET))(this);
	}

	::System::Void set_AvatarMoveAbilityConfig(::RPG::GameCore::FiveDimAvatarMoveAbilityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimAvatarMoveAbilityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_B4E8F9645A445A22_SET_AVATARMOVEABILITYCONFIG_OFFSET))(this, a1);
	}
};
