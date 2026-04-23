#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"
#include "unitysdk/Struct_2_CC63D4C97D4807F1_1.h"
#include "unitysdk/System/Object.h"

class Class_1_24C2E7EF22229C6A;
class Class_1_D3F97394EEAB34D6;
class Class_1_D43919DCE1F00DCB;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;
namespace RPG::GameCore { class FiveDimPropBakedMoveConfig; }
namespace RPG::GameCore { class FiveDimPropMoveConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class ConfigurableJoint; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define CLASS_1_5785A2BB95C3C8F0_CLEAR_OFFSET UNITYSDK_OFFSET(0x12557AB0)
#define CLASS_1_5785A2BB95C3C8F0_GET_CONSTRAINTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1255A5D0)
#define CLASS_1_5785A2BB95C3C8F0_GET_CONTEXTS_OFFSET UNITYSDK_OFFSET(0x1255A530)
#define CLASS_1_5785A2BB95C3C8F0_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x1255A7E0)
#define CLASS_1_5785A2BB95C3C8F0_GET_ISPROXYREADY_OFFSET UNITYSDK_OFFSET(0x1255A590)
#define CLASS_1_5785A2BB95C3C8F0_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x1255A550)
#define CLASS_1_5785A2BB95C3C8F0_GET_PROXYBODY_OFFSET UNITYSDK_OFFSET(0x1255A5F0)
#define CLASS_1_5785A2BB95C3C8F0_GET_PROXYENTITY_OFFSET UNITYSDK_OFFSET(0x1255A570)
#define CLASS_1_5785A2BB95C3C8F0_GET_PROXYJOINT_OFFSET UNITYSDK_OFFSET(0x1255A610)
#define CLASS_1_5785A2BB95C3C8F0_GET_PROXYTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1255A5B0)
#define CLASS_1_5785A2BB95C3C8F0_GET_SCALABLECONSTS_OFFSET UNITYSDK_OFFSET(0x1255A630)
#define CLASS_1_5785A2BB95C3C8F0_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0x1255A510)
#define CLASS_1_5785A2BB95C3C8F0_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x1255A250)
#define CLASS_1_5785A2BB95C3C8F0_METHOD_1_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x12559A90)
#define CLASS_1_5785A2BB95C3C8F0_METHOD_1_2E29038CF17E20BD_1_OFFSET UNITYSDK_OFFSET(0x125584D0)
#define CLASS_1_5785A2BB95C3C8F0_METHOD_1_2E29038CF17E20BD_OFFSET UNITYSDK_OFFSET(0x12557EE0)
#define CLASS_1_5785A2BB95C3C8F0_METHOD_1_3827F552D4683F3D_OFFSET UNITYSDK_OFFSET(0x1255A0B0)
#define CLASS_1_5785A2BB95C3C8F0_METHOD_1_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0x12559E20)
#define CLASS_1_5785A2BB95C3C8F0_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x12559DB0)
#define CLASS_1_5785A2BB95C3C8F0_METHOD_1_97AC5E0734B0603A_OFFSET UNITYSDK_OFFSET(0x12558AF0)
#define CLASS_1_5785A2BB95C3C8F0_METHOD_1_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x12557B20)
#define CLASS_1_5785A2BB95C3C8F0_METHOD_1_AECF8BEC293ED42A_OFFSET UNITYSDK_OFFSET(0x1255A450)
#define CLASS_1_5785A2BB95C3C8F0_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x12558A70)
#define CLASS_1_5785A2BB95C3C8F0_METHOD_1_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x12559C80)
#define CLASS_1_5785A2BB95C3C8F0_METHOD_1_DF99BCA8899A1D46_OFFSET UNITYSDK_OFFSET(0x12557D40)
#define CLASS_1_5785A2BB95C3C8F0_METHOD_1_E7614D4C91007AE0_OFFSET UNITYSDK_OFFSET(0x12558900)
#define CLASS_1_5785A2BB95C3C8F0_METHOD_1_EA67E3DC2BC38D4C_OFFSET UNITYSDK_OFFSET(0x1255A390)
#define CLASS_1_5785A2BB95C3C8F0_METHOD_1_F9DA06A51DA2987C_OFFSET UNITYSDK_OFFSET(0x1255A670)
#define CLASS_1_5785A2BB95C3C8F0_SET_CONSTRAINTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1255A5E0)
#define CLASS_1_5785A2BB95C3C8F0_SET_CONTEXTS_OFFSET UNITYSDK_OFFSET(0x1255A540)
#define CLASS_1_5785A2BB95C3C8F0_SET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x1255A7F0)
#define CLASS_1_5785A2BB95C3C8F0_SET_ISPROXYREADY_OFFSET UNITYSDK_OFFSET(0x1255A5A0)
#define CLASS_1_5785A2BB95C3C8F0_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x1255A560)
#define CLASS_1_5785A2BB95C3C8F0_SET_PROXYBODY_OFFSET UNITYSDK_OFFSET(0x1255A600)
#define CLASS_1_5785A2BB95C3C8F0_SET_PROXYENTITY_OFFSET UNITYSDK_OFFSET(0x1255A580)
#define CLASS_1_5785A2BB95C3C8F0_SET_PROXYJOINT_OFFSET UNITYSDK_OFFSET(0x1255A620)
#define CLASS_1_5785A2BB95C3C8F0_SET_PROXYTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1255A5C0)
#define CLASS_1_5785A2BB95C3C8F0_SET_SCALABLECONSTS_OFFSET UNITYSDK_OFFSET(0x1255A650)
#define CLASS_1_5785A2BB95C3C8F0_SET_SERVICES_OFFSET UNITYSDK_OFFSET(0x1255A520)
#define CLASS_1_5785A2BB95C3C8F0__CTOR_OFFSET UNITYSDK_OFFSET(0x1255A800)

inline static constexpr unsigned int Class_1_5785A2BB95C3C8F0_TypeDefinitionIndex = 70721;

class Class_1_5785A2BB95C3C8F0 : public ::System::Object
{
public:
	::Class_3_1A92845FAFA5EC77* _Services_k__BackingField; // 0x10
	::UnityEngine::Transform* _ConstraintTransform_k__BackingField; // 0x18
	::Class_2_9DD8A46984F1AFFD* _OwnerEntity_k__BackingField; // 0x20
	::UnityEngine::ConfigurableJoint* _ProxyJoint_k__BackingField; // 0x28
	::Class_1_24C2E7EF22229C6A* _Contexts_k__BackingField; // 0x30
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FiveDim::PropMoveState, ::Class_1_D43919DCE1F00DCB*>* Field_1_12; // 0x38
	::Class_1_D43919DCE1F00DCB* Field_1_11; // 0x40
	::Class_2_9DD8A46984F1AFFD* _ProxyEntity_k__BackingField; // 0x48
	::UnityEngine::Rigidbody* _ProxyBody_k__BackingField; // 0x50
	::UnityEngine::Transform* _ProxyTransform_k__BackingField; // 0x58
	::RPG::Client::LittleGame::FiveDim::PropMoveState _CurrentState_k__BackingField; // 0x60
	::Struct_2_CC63D4C97D4807F1_1 _ScalableConsts_k__BackingField; // 0x64
	::System::Boolean _IsProxyReady_k__BackingField; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_DF99BCA8899A1D46(::Class_3_1A92845FAFA5EC77* a1, ::Class_1_24C2E7EF22229C6A* a2, ::Class_2_9DD8A46984F1AFFD* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1A92845FAFA5EC77*, ::Class_1_24C2E7EF22229C6A*, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_METHOD_1_DF99BCA8899A1D46_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E7614D4C91007AE0(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_METHOD_1_E7614D4C91007AE0_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_METHOD_1_289F28027FF47717_OFFSET))(this);
	}

	::System::Void Method_1_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_METHOD_1_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_907E24F785836BA0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_METHOD_1_907E24F785836BA0_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_2E29038CF17E20BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_METHOD_1_2E29038CF17E20BD_OFFSET))(this);
	}

	::System::Void Method_1_2E29038CF17E20BD_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_METHOD_1_2E29038CF17E20BD_1_OFFSET))(this);
	}

	::System::Void Method_1_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_METHOD_1_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Void Method_1_97AC5E0734B0603A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_METHOD_1_97AC5E0734B0603A_OFFSET))(this);
	}

	::System::Boolean Method_1_3827F552D4683F3D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_METHOD_1_3827F552D4683F3D_OFFSET))(this);
	}

	::Class_3_1A92845FAFA5EC77* get_Services()
	{
		return ((::Class_3_1A92845FAFA5EC77*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_GET_SERVICES_OFFSET))(this);
	}

	::System::Void set_Services(::Class_3_1A92845FAFA5EC77* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_SET_SERVICES_OFFSET))(this, value);
	}

	::Class_1_24C2E7EF22229C6A* get_Contexts()
	{
		return ((::Class_1_24C2E7EF22229C6A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_GET_CONTEXTS_OFFSET))(this);
	}

	::System::Void set_Contexts(::Class_1_24C2E7EF22229C6A* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_SET_CONTEXTS_OFFSET))(this, value);
	}

	::Class_2_9DD8A46984F1AFFD* get_OwnerEntity()
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_GET_OWNERENTITY_OFFSET))(this);
	}

	::System::Void set_OwnerEntity(::Class_2_9DD8A46984F1AFFD* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_SET_OWNERENTITY_OFFSET))(this, value);
	}

	::Class_2_9DD8A46984F1AFFD* get_ProxyEntity()
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_GET_PROXYENTITY_OFFSET))(this);
	}

	::System::Void set_ProxyEntity(::Class_2_9DD8A46984F1AFFD* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_SET_PROXYENTITY_OFFSET))(this, value);
	}

	::Class_1_D3F97394EEAB34D6* Method_1_AECF8BEC293ED42A()
	{
		return ((::Class_1_D3F97394EEAB34D6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_METHOD_1_AECF8BEC293ED42A_OFFSET))(this);
	}

	::System::Boolean get_IsProxyReady()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_GET_ISPROXYREADY_OFFSET))(this);
	}

	::System::Void set_IsProxyReady(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_SET_ISPROXYREADY_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_ProxyTransform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_GET_PROXYTRANSFORM_OFFSET))(this);
	}

	::System::Void set_ProxyTransform(::UnityEngine::Transform* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_SET_PROXYTRANSFORM_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_ConstraintTransform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_GET_CONSTRAINTTRANSFORM_OFFSET))(this);
	}

	::System::Void set_ConstraintTransform(::UnityEngine::Transform* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_SET_CONSTRAINTTRANSFORM_OFFSET))(this, value);
	}

	::UnityEngine::Rigidbody* get_ProxyBody()
	{
		return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_GET_PROXYBODY_OFFSET))(this);
	}

	::System::Void set_ProxyBody(::UnityEngine::Rigidbody* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_SET_PROXYBODY_OFFSET))(this, value);
	}

	::UnityEngine::ConfigurableJoint* get_ProxyJoint()
	{
		return ((::UnityEngine::ConfigurableJoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_GET_PROXYJOINT_OFFSET))(this);
	}

	::System::Void set_ProxyJoint(::UnityEngine::ConfigurableJoint* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ConfigurableJoint*))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_SET_PROXYJOINT_OFFSET))(this, value);
	}

	::Struct_2_CC63D4C97D4807F1_1 get_ScalableConsts()
	{
		return ((::Struct_2_CC63D4C97D4807F1_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_GET_SCALABLECONSTS_OFFSET))(this);
	}

	::System::Void set_ScalableConsts(::Struct_2_CC63D4C97D4807F1_1 value)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_CC63D4C97D4807F1_1))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_SET_SCALABLECONSTS_OFFSET))(this, value);
	}

	::RPG::GameCore::FiveDimPropMoveConfig* Method_1_EA67E3DC2BC38D4C()
	{
		return ((::RPG::GameCore::FiveDimPropMoveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_METHOD_1_EA67E3DC2BC38D4C_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimPropBakedMoveConfig* Method_1_F9DA06A51DA2987C()
	{
		return ((::RPG::GameCore::FiveDimPropBakedMoveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_METHOD_1_F9DA06A51DA2987C_OFFSET))(this);
	}

	::RPG::Client::LittleGame::FiveDim::PropMoveState get_CurrentState()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_GET_CURRENTSTATE_OFFSET))(this);
	}

	::System::Void set_CurrentState(::RPG::Client::LittleGame::FiveDim::PropMoveState value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_1_5785A2BB95C3C8F0_SET_CURRENTSTATE_OFFSET))(this, value);
	}
};
