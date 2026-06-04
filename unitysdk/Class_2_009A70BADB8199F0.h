#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E4EA1938DE3A3E4.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"

class Class_1_B4357A1C72BABC6B;
class Class_2_3FFD13E6C7D155DA;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;
namespace RPG::GameCore { class FiveDimAvatarMoveAbilityConfig; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define CLASS_2_009A70BADB8199F0_CLEAR_OFFSET UNITYSDK_OFFSET(0x137F7680)
#define CLASS_2_009A70BADB8199F0_GET_AVATARMOVEABILITYCONFIG_OFFSET UNITYSDK_OFFSET(0x137F9470)
#define CLASS_2_009A70BADB8199F0_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x137F7780)
#define CLASS_2_009A70BADB8199F0_GET_PHYSICSPROXYRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x137F9430)
#define CLASS_2_009A70BADB8199F0_GET_PHYSICSPROXYTRANSFORM_OFFSET UNITYSDK_OFFSET(0x137F9410)
#define CLASS_2_009A70BADB8199F0_GET_PREVSTATE_OFFSET UNITYSDK_OFFSET(0x137F91E0)
#define CLASS_2_009A70BADB8199F0_GET_PROXYCOLLIDER_OFFSET UNITYSDK_OFFSET(0x137F9450)
#define CLASS_2_009A70BADB8199F0_GET_SURFACECONSTRAINTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x137F93F0)
#define CLASS_2_009A70BADB8199F0_METHOD_2_0184F8DB55CE24A0_OFFSET UNITYSDK_OFFSET(0x137F6EA0)
#define CLASS_2_009A70BADB8199F0_METHOD_2_063ADB01C44981A7_OFFSET UNITYSDK_OFFSET(0x137F8180)
#define CLASS_2_009A70BADB8199F0_METHOD_2_2A73302F5D8B0BA6_OFFSET UNITYSDK_OFFSET(0x137F7F70)
#define CLASS_2_009A70BADB8199F0_METHOD_2_31F1C58AB372DEB4_OFFSET UNITYSDK_OFFSET(0x137F83A0)
#define CLASS_2_009A70BADB8199F0_METHOD_2_3C927B51D2142A24_1_OFFSET UNITYSDK_OFFSET(0x137F9590)
#define CLASS_2_009A70BADB8199F0_METHOD_2_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x137F9530)
#define CLASS_2_009A70BADB8199F0_METHOD_2_414A270E91E4BF2D_OFFSET UNITYSDK_OFFSET(0x137F8CA0)
#define CLASS_2_009A70BADB8199F0_METHOD_2_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x137F73A0)
#define CLASS_2_009A70BADB8199F0_METHOD_2_522F2897D3370F6B_OFFSET UNITYSDK_OFFSET(0x137F8910)
#define CLASS_2_009A70BADB8199F0_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x137F95F0)
#define CLASS_2_009A70BADB8199F0_METHOD_2_5AFFB40F1495B5C1_OFFSET UNITYSDK_OFFSET(0x137F76E0)
#define CLASS_2_009A70BADB8199F0_METHOD_2_64B6514CFF8F8D76_OFFSET UNITYSDK_OFFSET(0x137F77F0)
#define CLASS_2_009A70BADB8199F0_METHOD_2_83DA3EC57FF907F4_1_OFFSET UNITYSDK_OFFSET(0x137F9320)
#define CLASS_2_009A70BADB8199F0_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x137F9250)
#define CLASS_2_009A70BADB8199F0_METHOD_2_94D5A9ED6EC1F489_OFFSET UNITYSDK_OFFSET(0x137F86B0)
#define CLASS_2_009A70BADB8199F0_METHOD_2_9D1AE32F8ABE2E9D_OFFSET UNITYSDK_OFFSET(0x137F9520)
#define CLASS_2_009A70BADB8199F0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x137F8E60)
#define CLASS_2_009A70BADB8199F0_METHOD_2_DEDD31AF6F4E4818_OFFSET UNITYSDK_OFFSET(0x137F7EF0)
#define CLASS_2_009A70BADB8199F0_METHOD_2_ED37AFDFC73CCF51_OFFSET UNITYSDK_OFFSET(0x137F6FD0)
#define CLASS_2_009A70BADB8199F0_METHOD_2_EF0CA657D4060B18_OFFSET UNITYSDK_OFFSET(0x137F7820)
#define CLASS_2_009A70BADB8199F0_SET_AVATARMOVEABILITYCONFIG_OFFSET UNITYSDK_OFFSET(0x137F9480)
#define CLASS_2_009A70BADB8199F0_SET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x137F72A0)
#define CLASS_2_009A70BADB8199F0_SET_PHYSICSPROXYRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x137F9440)
#define CLASS_2_009A70BADB8199F0_SET_PHYSICSPROXYTRANSFORM_OFFSET UNITYSDK_OFFSET(0x137F9420)
#define CLASS_2_009A70BADB8199F0_SET_PREVSTATE_OFFSET UNITYSDK_OFFSET(0x137F7320)
#define CLASS_2_009A70BADB8199F0_SET_PROXYCOLLIDER_OFFSET UNITYSDK_OFFSET(0x137F9460)
#define CLASS_2_009A70BADB8199F0_SET_SURFACECONSTRAINTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x137F9400)
#define CLASS_2_009A70BADB8199F0__CTOR_OFFSET UNITYSDK_OFFSET(0x137F9490)
#define CLASS_2_009A70BADB8199F0___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x137F9510)
#define CLASS_2_009A70BADB8199F0___IFIXBASEPROXY_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x137F9650)
#define CLASS_2_009A70BADB8199F0___IFIXBASEPROXY_GET_PREVSTATE_OFFSET UNITYSDK_OFFSET(0x137F9670)
#define CLASS_2_009A70BADB8199F0___IFIXBASEPROXY_SET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x137F9660)
#define CLASS_2_009A70BADB8199F0___IFIXBASEPROXY_SET_PREVSTATE_OFFSET UNITYSDK_OFFSET(0x137F9680)

inline static constexpr unsigned int Class_2_009A70BADB8199F0_TypeDefinitionIndex = 71486;

class Class_2_009A70BADB8199F0 : public ::Class_1_9E4EA1938DE3A3E4
{
public:
	::UnityEngine::Transform* _SurfaceConstraintTransform_k__BackingField; // 0x40
	::UnityEngine::CapsuleCollider* _ProxyCollider_k__BackingField; // 0x48
	::UnityEngine::Transform* _PhysicsProxyTransform_k__BackingField; // 0x50
	::UnityEngine::Rigidbody* _PhysicsProxyRigidBody_k__BackingField; // 0x58
	::RPG::GameCore::FiveDimAvatarMoveAbilityConfig* _AvatarMoveAbilityConfig_k__BackingField; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0184F8DB55CE24A0(::Class_2_B9E8C2EEAA5C96EC* a1, ::Class_3_1E4F9B0ED3BF21DE* a2, ::Class_1_B4357A1C72BABC6B* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Class_3_1E4F9B0ED3BF21DE*, ::Class_1_B4357A1C72BABC6B*))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0_METHOD_2_0184F8DB55CE24A0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0_CLEAR_OFFSET))(this);
	}

	::System::Void Method_2_5AFFB40F1495B5C1(::RPG::Client::LittleGame::Move::MoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0_METHOD_2_5AFFB40F1495B5C1_OFFSET))(this, a1);
	}

	::System::Void Method_2_EF0CA657D4060B18(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0_METHOD_2_EF0CA657D4060B18_OFFSET))(this, a1);
	}

	::System::Void Method_2_31F1C58AB372DEB4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0_METHOD_2_31F1C58AB372DEB4_OFFSET))(this, a1);
	}

	::System::Void Method_2_94D5A9ED6EC1F489(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0_METHOD_2_94D5A9ED6EC1F489_OFFSET))(this, a1);
	}

	::System::Void Method_2_522F2897D3370F6B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0_METHOD_2_522F2897D3370F6B_OFFSET))(this, a1);
	}

	::System::Void Method_2_414A270E91E4BF2D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0_METHOD_2_414A270E91E4BF2D_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_ED37AFDFC73CCF51(::Class_3_1E4F9B0ED3BF21DE* a1, ::Class_2_B9E8C2EEAA5C96EC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1E4F9B0ED3BF21DE*, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0_METHOD_2_ED37AFDFC73CCF51_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_2A73302F5D8B0BA6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0_METHOD_2_2A73302F5D8B0BA6_OFFSET))(this);
	}

	::System::Void Method_2_5176DC743E478510()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0_METHOD_2_5176DC743E478510_OFFSET))(this);
	}

	::System::Void Method_2_063ADB01C44981A7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0_METHOD_2_063ADB01C44981A7_OFFSET))(this, a1);
	}

	::Class_2_B9E8C2EEAA5C96EC* Method_2_64B6514CFF8F8D76()
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0_METHOD_2_64B6514CFF8F8D76_OFFSET))(this);
	}

	::RPG::Client::LittleGame::Move::MoveState get_CurrentState()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0_GET_CURRENTSTATE_OFFSET))(this);
	}

	::System::Void set_CurrentState(::RPG::Client::LittleGame::Move::MoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0_SET_CURRENTSTATE_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::Move::MoveState get_PrevState()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0_GET_PREVSTATE_OFFSET))(this);
	}

	::System::Void set_PrevState(::RPG::Client::LittleGame::Move::MoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0_SET_PREVSTATE_OFFSET))(this, a1);
	}

	::Class_2_3FFD13E6C7D155DA* Method_2_DEDD31AF6F4E4818()
	{
		return ((::Class_2_3FFD13E6C7D155DA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0_METHOD_2_DEDD31AF6F4E4818_OFFSET))(this);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0_METHOD_2_83DA3EC57FF907F4_1_OFFSET))(this);
	}

	::UnityEngine::Transform* get_SurfaceConstraintTransform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0_GET_SURFACECONSTRAINTTRANSFORM_OFFSET))(this);
	}

	::System::Void set_SurfaceConstraintTransform(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0_SET_SURFACECONSTRAINTTRANSFORM_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_PhysicsProxyTransform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0_GET_PHYSICSPROXYTRANSFORM_OFFSET))(this);
	}

	::System::Void set_PhysicsProxyTransform(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0_SET_PHYSICSPROXYTRANSFORM_OFFSET))(this, a1);
	}

	::UnityEngine::Rigidbody* get_PhysicsProxyRigidBody()
	{
		return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0_GET_PHYSICSPROXYRIGIDBODY_OFFSET))(this);
	}

	::System::Void set_PhysicsProxyRigidBody(::UnityEngine::Rigidbody* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0_SET_PHYSICSPROXYRIGIDBODY_OFFSET))(this, a1);
	}

	::UnityEngine::CapsuleCollider* get_ProxyCollider()
	{
		return ((::UnityEngine::CapsuleCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0_GET_PROXYCOLLIDER_OFFSET))(this);
	}

	::System::Void set_ProxyCollider(::UnityEngine::CapsuleCollider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::CapsuleCollider*))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0_SET_PROXYCOLLIDER_OFFSET))(this, a1);
	}

	::RPG::GameCore::FiveDimAvatarMoveAbilityConfig* get_AvatarMoveAbilityConfig()
	{
		return ((::RPG::GameCore::FiveDimAvatarMoveAbilityConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0_GET_AVATARMOVEABILITYCONFIG_OFFSET))(this);
	}

	::System::Void set_AvatarMoveAbilityConfig(::RPG::GameCore::FiveDimAvatarMoveAbilityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimAvatarMoveAbilityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0_SET_AVATARMOVEABILITYCONFIG_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}

	::System::Void Method_2_9D1AE32F8ABE2E9D(::RPG::Client::LittleGame::Move::MoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0_METHOD_2_9D1AE32F8ABE2E9D_OFFSET))(this, a1);
	}

	::System::Void Method_2_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0_METHOD_2_3C927B51D2142A24_OFFSET))(this, a1);
	}

	::System::Void Method_2_3C927B51D2142A24_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0_METHOD_2_3C927B51D2142A24_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::RPG::Client::LittleGame::Move::MoveState __iFixBaseProxy_get_CurrentState()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0___IFIXBASEPROXY_GET_CURRENTSTATE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_set_CurrentState(::RPG::Client::LittleGame::Move::MoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0___IFIXBASEPROXY_SET_CURRENTSTATE_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::Move::MoveState __iFixBaseProxy_get_PrevState()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0___IFIXBASEPROXY_GET_PREVSTATE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_set_PrevState(::RPG::Client::LittleGame::Move::MoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_2_009A70BADB8199F0___IFIXBASEPROXY_SET_PREVSTATE_OFFSET))(this, a1);
	}
};
