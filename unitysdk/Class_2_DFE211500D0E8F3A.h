#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E4EA1938DE3A3E4.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"

class Class_1_24C2E7EF22229C6A;
class Class_2_75066476904C3229;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;
namespace RPG::GameCore { class FiveDimAvatarMoveAbilityConfig; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define CLASS_2_DFE211500D0E8F3A_CLEAR_OFFSET UNITYSDK_OFFSET(0x11516500)
#define CLASS_2_DFE211500D0E8F3A_GET_AVATARMOVEABILITYCONFIG_OFFSET UNITYSDK_OFFSET(0x11518430)
#define CLASS_2_DFE211500D0E8F3A_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x11516670)
#define CLASS_2_DFE211500D0E8F3A_GET_PHYSICSPROXYRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x115183F0)
#define CLASS_2_DFE211500D0E8F3A_GET_PHYSICSPROXYTRANSFORM_OFFSET UNITYSDK_OFFSET(0x115183D0)
#define CLASS_2_DFE211500D0E8F3A_GET_PREVSTATE_OFFSET UNITYSDK_OFFSET(0x11518150)
#define CLASS_2_DFE211500D0E8F3A_GET_PROXYCOLLIDER_OFFSET UNITYSDK_OFFSET(0x11518410)
#define CLASS_2_DFE211500D0E8F3A_GET_SURFACECONSTRAINTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x115183B0)
#define CLASS_2_DFE211500D0E8F3A_METHOD_2_08A44229CA25E941_OFFSET UNITYSDK_OFFSET(0x11516ED0)
#define CLASS_2_DFE211500D0E8F3A_METHOD_2_10CE66FE93650CCF_OFFSET UNITYSDK_OFFSET(0x11515D30)
#define CLASS_2_DFE211500D0E8F3A_METHOD_2_1CF12D59D8D84DF5_OFFSET UNITYSDK_OFFSET(0x11515C00)
#define CLASS_2_DFE211500D0E8F3A_METHOD_2_46EC973EE97CF90C_OFFSET UNITYSDK_OFFSET(0x11516F50)
#define CLASS_2_DFE211500D0E8F3A_METHOD_2_4DA6D4A624E42CAB_1_OFFSET UNITYSDK_OFFSET(0x115182F0)
#define CLASS_2_DFE211500D0E8F3A_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x11518230)
#define CLASS_2_DFE211500D0E8F3A_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x115185D0)
#define CLASS_2_DFE211500D0E8F3A_METHOD_2_64B6514CFF8F8D76_OFFSET UNITYSDK_OFFSET(0x11516750)
#define CLASS_2_DFE211500D0E8F3A_METHOD_2_68195F29004CCB3F_OFFSET UNITYSDK_OFFSET(0x11516780)
#define CLASS_2_DFE211500D0E8F3A_METHOD_2_793FFA9A76FE6840_1_OFFSET UNITYSDK_OFFSET(0x11518560)
#define CLASS_2_DFE211500D0E8F3A_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x115184F0)
#define CLASS_2_DFE211500D0E8F3A_METHOD_2_79EBC5E76DCD8E44_OFFSET UNITYSDK_OFFSET(0x11516560)
#define CLASS_2_DFE211500D0E8F3A_METHOD_2_8223E389E7E7E475_OFFSET UNITYSDK_OFFSET(0x115184E0)
#define CLASS_2_DFE211500D0E8F3A_METHOD_2_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x11516260)
#define CLASS_2_DFE211500D0E8F3A_METHOD_2_94D5A9ED6EC1F489_OFFSET UNITYSDK_OFFSET(0x11517530)
#define CLASS_2_DFE211500D0E8F3A_METHOD_2_95EAF395E6F95EA4_OFFSET UNITYSDK_OFFSET(0x11517BD0)
#define CLASS_2_DFE211500D0E8F3A_METHOD_2_B1983B8E0FEB5BBD_1_OFFSET UNITYSDK_OFFSET(0x115177F0)
#define CLASS_2_DFE211500D0E8F3A_METHOD_2_B1983B8E0FEB5BBD_OFFSET UNITYSDK_OFFSET(0x115171D0)
#define CLASS_2_DFE211500D0E8F3A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11517E00)
#define CLASS_2_DFE211500D0E8F3A_SET_AVATARMOVEABILITYCONFIG_OFFSET UNITYSDK_OFFSET(0x11518440)
#define CLASS_2_DFE211500D0E8F3A_SET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x11516080)
#define CLASS_2_DFE211500D0E8F3A_SET_PHYSICSPROXYRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x11518400)
#define CLASS_2_DFE211500D0E8F3A_SET_PHYSICSPROXYTRANSFORM_OFFSET UNITYSDK_OFFSET(0x115183E0)
#define CLASS_2_DFE211500D0E8F3A_SET_PREVSTATE_OFFSET UNITYSDK_OFFSET(0x11516170)
#define CLASS_2_DFE211500D0E8F3A_SET_PROXYCOLLIDER_OFFSET UNITYSDK_OFFSET(0x11518420)
#define CLASS_2_DFE211500D0E8F3A_SET_SURFACECONSTRAINTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x115183C0)
#define CLASS_2_DFE211500D0E8F3A__CTOR_OFFSET UNITYSDK_OFFSET(0x11518450)
#define CLASS_2_DFE211500D0E8F3A___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x115184D0)
#define CLASS_2_DFE211500D0E8F3A___IFIXBASEPROXY_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x11518630)
#define CLASS_2_DFE211500D0E8F3A___IFIXBASEPROXY_GET_PREVSTATE_OFFSET UNITYSDK_OFFSET(0x11518650)
#define CLASS_2_DFE211500D0E8F3A___IFIXBASEPROXY_SET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x11518640)
#define CLASS_2_DFE211500D0E8F3A___IFIXBASEPROXY_SET_PREVSTATE_OFFSET UNITYSDK_OFFSET(0x11518660)

inline static constexpr unsigned int Class_2_DFE211500D0E8F3A_TypeDefinitionIndex = 62653;

class Class_2_DFE211500D0E8F3A : public ::Class_1_9E4EA1938DE3A3E4
{
public:
	::UnityEngine::CapsuleCollider* _ProxyCollider_k__BackingField; // 0x40
	::UnityEngine::Transform* _SurfaceConstraintTransform_k__BackingField; // 0x48
	::UnityEngine::Transform* _PhysicsProxyTransform_k__BackingField; // 0x50
	::RPG::GameCore::FiveDimAvatarMoveAbilityConfig* _AvatarMoveAbilityConfig_k__BackingField; // 0x58
	::UnityEngine::Rigidbody* _PhysicsProxyRigidBody_k__BackingField; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1CF12D59D8D84DF5(::Class_2_9DD8A46984F1AFFD* a1, ::Class_3_1A92845FAFA5EC77* a2, ::Class_1_24C2E7EF22229C6A* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Class_3_1A92845FAFA5EC77*, ::Class_1_24C2E7EF22229C6A*))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A_METHOD_2_1CF12D59D8D84DF5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A_CLEAR_OFFSET))(this);
	}

	::System::Void Method_2_79EBC5E76DCD8E44(::RPG::Client::LittleGame::Move::MoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A_METHOD_2_79EBC5E76DCD8E44_OFFSET))(this, a1);
	}

	::System::Void Method_2_68195F29004CCB3F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A_METHOD_2_68195F29004CCB3F_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1983B8E0FEB5BBD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A_METHOD_2_B1983B8E0FEB5BBD_OFFSET))(this, a1);
	}

	::System::Void Method_2_94D5A9ED6EC1F489(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A_METHOD_2_94D5A9ED6EC1F489_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1983B8E0FEB5BBD_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A_METHOD_2_B1983B8E0FEB5BBD_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_95EAF395E6F95EA4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A_METHOD_2_95EAF395E6F95EA4_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_10CE66FE93650CCF(::Class_3_1A92845FAFA5EC77* a1, ::Class_2_9DD8A46984F1AFFD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1A92845FAFA5EC77*, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A_METHOD_2_10CE66FE93650CCF_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_46EC973EE97CF90C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A_METHOD_2_46EC973EE97CF90C_OFFSET))(this);
	}

	::System::Void Method_2_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A_METHOD_2_85377D41FEE05B66_OFFSET))(this);
	}

	::Class_2_9DD8A46984F1AFFD* Method_2_64B6514CFF8F8D76()
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A_METHOD_2_64B6514CFF8F8D76_OFFSET))(this);
	}

	::RPG::Client::LittleGame::Move::MoveState get_CurrentState()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A_GET_CURRENTSTATE_OFFSET))(this);
	}

	::System::Void set_CurrentState(::RPG::Client::LittleGame::Move::MoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A_SET_CURRENTSTATE_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::Move::MoveState get_PrevState()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A_GET_PREVSTATE_OFFSET))(this);
	}

	::System::Void set_PrevState(::RPG::Client::LittleGame::Move::MoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A_SET_PREVSTATE_OFFSET))(this, a1);
	}

	::Class_2_75066476904C3229* Method_2_08A44229CA25E941()
	{
		return ((::Class_2_75066476904C3229*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A_METHOD_2_08A44229CA25E941_OFFSET))(this);
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A_METHOD_2_4DA6D4A624E42CAB_1_OFFSET))(this);
	}

	::UnityEngine::Transform* get_SurfaceConstraintTransform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A_GET_SURFACECONSTRAINTTRANSFORM_OFFSET))(this);
	}

	::System::Void set_SurfaceConstraintTransform(::UnityEngine::Transform* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A_SET_SURFACECONSTRAINTTRANSFORM_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_PhysicsProxyTransform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A_GET_PHYSICSPROXYTRANSFORM_OFFSET))(this);
	}

	::System::Void set_PhysicsProxyTransform(::UnityEngine::Transform* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A_SET_PHYSICSPROXYTRANSFORM_OFFSET))(this, value);
	}

	::UnityEngine::Rigidbody* get_PhysicsProxyRigidBody()
	{
		return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A_GET_PHYSICSPROXYRIGIDBODY_OFFSET))(this);
	}

	::System::Void set_PhysicsProxyRigidBody(::UnityEngine::Rigidbody* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A_SET_PHYSICSPROXYRIGIDBODY_OFFSET))(this, value);
	}

	::UnityEngine::CapsuleCollider* get_ProxyCollider()
	{
		return ((::UnityEngine::CapsuleCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A_GET_PROXYCOLLIDER_OFFSET))(this);
	}

	::System::Void set_ProxyCollider(::UnityEngine::CapsuleCollider* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::CapsuleCollider*))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A_SET_PROXYCOLLIDER_OFFSET))(this, value);
	}

	::RPG::GameCore::FiveDimAvatarMoveAbilityConfig* get_AvatarMoveAbilityConfig()
	{
		return ((::RPG::GameCore::FiveDimAvatarMoveAbilityConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A_GET_AVATARMOVEABILITYCONFIG_OFFSET))(this);
	}

	::System::Void set_AvatarMoveAbilityConfig(::RPG::GameCore::FiveDimAvatarMoveAbilityConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimAvatarMoveAbilityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A_SET_AVATARMOVEABILITYCONFIG_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}

	::System::Void Method_2_8223E389E7E7E475(::RPG::Client::LittleGame::Move::MoveState P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A_METHOD_2_8223E389E7E7E475_OFFSET))(this, P0);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}

	::System::Void Method_2_793FFA9A76FE6840_1(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A_METHOD_2_793FFA9A76FE6840_1_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::RPG::Client::LittleGame::Move::MoveState __iFixBaseProxy_get_CurrentState()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A___IFIXBASEPROXY_GET_CURRENTSTATE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_set_CurrentState(::RPG::Client::LittleGame::Move::MoveState P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A___IFIXBASEPROXY_SET_CURRENTSTATE_OFFSET))(this, P0);
	}

	::RPG::Client::LittleGame::Move::MoveState __iFixBaseProxy_get_PrevState()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A___IFIXBASEPROXY_GET_PREVSTATE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_set_PrevState(::RPG::Client::LittleGame::Move::MoveState P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_2_DFE211500D0E8F3A___IFIXBASEPROXY_SET_PREVSTATE_OFFSET))(this, P0);
	}
};
