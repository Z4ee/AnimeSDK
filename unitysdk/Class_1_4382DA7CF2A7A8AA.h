#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"
#include "unitysdk/Struct_2_CC63D4C97D4807F1_1.h"
#include "unitysdk/System/Object.h"

class Class_1_24C2E7EF22229C6A;
class Class_1_6E5873B83DCA1F72;
class Class_1_D3F97394EEAB34D6;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;
namespace RPG::GameCore { class FiveDimPropBakedMoveConfig; }
namespace RPG::GameCore { class FiveDimPropMoveConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class ConfigurableJoint; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define CLASS_1_4382DA7CF2A7A8AA_CLEAR_OFFSET UNITYSDK_OFFSET(0x8DF6380)
#define CLASS_1_4382DA7CF2A7A8AA_GET_CONSTRAINTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x8DF8710)
#define CLASS_1_4382DA7CF2A7A8AA_GET_CONTEXTS_OFFSET UNITYSDK_OFFSET(0x8DF85B0)
#define CLASS_1_4382DA7CF2A7A8AA_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x8DF89E0)
#define CLASS_1_4382DA7CF2A7A8AA_GET_ISPROXYREADY_OFFSET UNITYSDK_OFFSET(0x8DF86D0)
#define CLASS_1_4382DA7CF2A7A8AA_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x8DF85D0)
#define CLASS_1_4382DA7CF2A7A8AA_GET_PROXYBODY_OFFSET UNITYSDK_OFFSET(0x8DF8730)
#define CLASS_1_4382DA7CF2A7A8AA_GET_PROXYENTITY_OFFSET UNITYSDK_OFFSET(0x8DF85F0)
#define CLASS_1_4382DA7CF2A7A8AA_GET_PROXYJOINT_OFFSET UNITYSDK_OFFSET(0x8DF8750)
#define CLASS_1_4382DA7CF2A7A8AA_GET_PROXYTRANSFORM_OFFSET UNITYSDK_OFFSET(0x8DF86F0)
#define CLASS_1_4382DA7CF2A7A8AA_GET_SCALABLECONSTS_OFFSET UNITYSDK_OFFSET(0x8DF8770)
#define CLASS_1_4382DA7CF2A7A8AA_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0x8DF8540)
#define CLASS_1_4382DA7CF2A7A8AA_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x8DF8400)
#define CLASS_1_4382DA7CF2A7A8AA_METHOD_1_2C1F0A815CE2FE02_OFFSET UNITYSDK_OFFSET(0x8DF8340)
#define CLASS_1_4382DA7CF2A7A8AA_METHOD_1_3A599F23178B2776_OFFSET UNITYSDK_OFFSET(0x8DF6CA0)
#define CLASS_1_4382DA7CF2A7A8AA_METHOD_1_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x8DF7D70)
#define CLASS_1_4382DA7CF2A7A8AA_METHOD_1_809094DEBF13B21A_OFFSET UNITYSDK_OFFSET(0x8DF67E0)
#define CLASS_1_4382DA7CF2A7A8AA_METHOD_1_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0x8DF80C0)
#define CLASS_1_4382DA7CF2A7A8AA_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x8DF8050)
#define CLASS_1_4382DA7CF2A7A8AA_METHOD_1_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x8DF6400)
#define CLASS_1_4382DA7CF2A7A8AA_METHOD_1_AECF8BEC293ED42A_OFFSET UNITYSDK_OFFSET(0x8DF8610)
#define CLASS_1_4382DA7CF2A7A8AA_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x8DF7150)
#define CLASS_1_4382DA7CF2A7A8AA_METHOD_1_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x8DF7F20)
#define CLASS_1_4382DA7CF2A7A8AA_METHOD_1_C969C48EB0DAEC25_OFFSET UNITYSDK_OFFSET(0x8DF71D0)
#define CLASS_1_4382DA7CF2A7A8AA_METHOD_1_E7614D4C91007AE0_OFFSET UNITYSDK_OFFSET(0x8DF6FE0)
#define CLASS_1_4382DA7CF2A7A8AA_METHOD_1_EA67E3DC2BC38D4C_OFFSET UNITYSDK_OFFSET(0x8DF87B0)
#define CLASS_1_4382DA7CF2A7A8AA_METHOD_1_F9DA06A51DA2987C_OFFSET UNITYSDK_OFFSET(0x8DF8870)
#define CLASS_1_4382DA7CF2A7A8AA_METHOD_1_FD0A1F8CF93C2E2C_OFFSET UNITYSDK_OFFSET(0x8DF6620)
#define CLASS_1_4382DA7CF2A7A8AA_SET_CONSTRAINTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x8DF8720)
#define CLASS_1_4382DA7CF2A7A8AA_SET_CONTEXTS_OFFSET UNITYSDK_OFFSET(0x8DF85C0)
#define CLASS_1_4382DA7CF2A7A8AA_SET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x8DF89F0)
#define CLASS_1_4382DA7CF2A7A8AA_SET_ISPROXYREADY_OFFSET UNITYSDK_OFFSET(0x8DF86E0)
#define CLASS_1_4382DA7CF2A7A8AA_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x8DF85E0)
#define CLASS_1_4382DA7CF2A7A8AA_SET_PROXYBODY_OFFSET UNITYSDK_OFFSET(0x8DF8740)
#define CLASS_1_4382DA7CF2A7A8AA_SET_PROXYENTITY_OFFSET UNITYSDK_OFFSET(0x8DF8600)
#define CLASS_1_4382DA7CF2A7A8AA_SET_PROXYJOINT_OFFSET UNITYSDK_OFFSET(0x8DF8760)
#define CLASS_1_4382DA7CF2A7A8AA_SET_PROXYTRANSFORM_OFFSET UNITYSDK_OFFSET(0x8DF8700)
#define CLASS_1_4382DA7CF2A7A8AA_SET_SCALABLECONSTS_OFFSET UNITYSDK_OFFSET(0x8DF8790)
#define CLASS_1_4382DA7CF2A7A8AA_SET_SERVICES_OFFSET UNITYSDK_OFFSET(0x8DF8550)
#define CLASS_1_4382DA7CF2A7A8AA__CTOR_OFFSET UNITYSDK_OFFSET(0x8DF8A00)

inline static constexpr unsigned int Class_1_4382DA7CF2A7A8AA_TypeDefinitionIndex = 62705;

class Class_1_4382DA7CF2A7A8AA : public ::System::Object
{
public:
	::UnityEngine::Transform* _ProxyTransform_k__BackingField; // 0x10
	::Class_1_6E5873B83DCA1F72* Field_1_11; // 0x18
	::UnityEngine::Rigidbody* _ProxyBody_k__BackingField; // 0x20
	::Class_3_1A92845FAFA5EC77* _Services_k__BackingField; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FiveDim::PropMoveState, ::Class_1_6E5873B83DCA1F72*>* Field_1_12; // 0x30
	::Class_2_9DD8A46984F1AFFD* _OwnerEntity_k__BackingField; // 0x38
	::UnityEngine::ConfigurableJoint* _ProxyJoint_k__BackingField; // 0x40
	::Class_1_24C2E7EF22229C6A* _Contexts_k__BackingField; // 0x48
	::UnityEngine::Transform* _ConstraintTransform_k__BackingField; // 0x50
	::Class_2_9DD8A46984F1AFFD* _ProxyEntity_k__BackingField; // 0x58
	::Struct_2_CC63D4C97D4807F1_1 _ScalableConsts_k__BackingField; // 0x60
	::RPG::Client::LittleGame::FiveDim::PropMoveState _CurrentState_k__BackingField; // 0x88
	::System::Boolean _IsProxyReady_k__BackingField; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_FD0A1F8CF93C2E2C(::Class_3_1A92845FAFA5EC77* a1, ::Class_1_24C2E7EF22229C6A* a2, ::Class_2_9DD8A46984F1AFFD* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1A92845FAFA5EC77*, ::Class_1_24C2E7EF22229C6A*, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_METHOD_1_FD0A1F8CF93C2E2C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E7614D4C91007AE0(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_METHOD_1_E7614D4C91007AE0_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_METHOD_1_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Method_1_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_METHOD_1_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_907E24F785836BA0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_METHOD_1_907E24F785836BA0_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_809094DEBF13B21A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_METHOD_1_809094DEBF13B21A_OFFSET))(this);
	}

	::System::Void Method_1_3A599F23178B2776()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_METHOD_1_3A599F23178B2776_OFFSET))(this);
	}

	::System::Void Method_1_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_METHOD_1_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Void Method_1_C969C48EB0DAEC25()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_METHOD_1_C969C48EB0DAEC25_OFFSET))(this);
	}

	::System::Boolean Method_1_2C1F0A815CE2FE02()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_METHOD_1_2C1F0A815CE2FE02_OFFSET))(this);
	}

	::Class_3_1A92845FAFA5EC77* get_Services()
	{
		return ((::Class_3_1A92845FAFA5EC77*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_GET_SERVICES_OFFSET))(this);
	}

	::System::Void set_Services(::Class_3_1A92845FAFA5EC77* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_SET_SERVICES_OFFSET))(this, value);
	}

	::Class_1_24C2E7EF22229C6A* get_Contexts()
	{
		return ((::Class_1_24C2E7EF22229C6A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_GET_CONTEXTS_OFFSET))(this);
	}

	::System::Void set_Contexts(::Class_1_24C2E7EF22229C6A* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_SET_CONTEXTS_OFFSET))(this, value);
	}

	::Class_2_9DD8A46984F1AFFD* get_OwnerEntity()
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_GET_OWNERENTITY_OFFSET))(this);
	}

	::System::Void set_OwnerEntity(::Class_2_9DD8A46984F1AFFD* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_SET_OWNERENTITY_OFFSET))(this, value);
	}

	::Class_2_9DD8A46984F1AFFD* get_ProxyEntity()
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_GET_PROXYENTITY_OFFSET))(this);
	}

	::System::Void set_ProxyEntity(::Class_2_9DD8A46984F1AFFD* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_SET_PROXYENTITY_OFFSET))(this, value);
	}

	::Class_1_D3F97394EEAB34D6* Method_1_AECF8BEC293ED42A()
	{
		return ((::Class_1_D3F97394EEAB34D6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_METHOD_1_AECF8BEC293ED42A_OFFSET))(this);
	}

	::System::Boolean get_IsProxyReady()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_GET_ISPROXYREADY_OFFSET))(this);
	}

	::System::Void set_IsProxyReady(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_SET_ISPROXYREADY_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_ProxyTransform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_GET_PROXYTRANSFORM_OFFSET))(this);
	}

	::System::Void set_ProxyTransform(::UnityEngine::Transform* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_SET_PROXYTRANSFORM_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_ConstraintTransform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_GET_CONSTRAINTTRANSFORM_OFFSET))(this);
	}

	::System::Void set_ConstraintTransform(::UnityEngine::Transform* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_SET_CONSTRAINTTRANSFORM_OFFSET))(this, value);
	}

	::UnityEngine::Rigidbody* get_ProxyBody()
	{
		return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_GET_PROXYBODY_OFFSET))(this);
	}

	::System::Void set_ProxyBody(::UnityEngine::Rigidbody* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_SET_PROXYBODY_OFFSET))(this, value);
	}

	::UnityEngine::ConfigurableJoint* get_ProxyJoint()
	{
		return ((::UnityEngine::ConfigurableJoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_GET_PROXYJOINT_OFFSET))(this);
	}

	::System::Void set_ProxyJoint(::UnityEngine::ConfigurableJoint* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ConfigurableJoint*))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_SET_PROXYJOINT_OFFSET))(this, value);
	}

	::Struct_2_CC63D4C97D4807F1_1 get_ScalableConsts()
	{
		return ((::Struct_2_CC63D4C97D4807F1_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_GET_SCALABLECONSTS_OFFSET))(this);
	}

	::System::Void set_ScalableConsts(::Struct_2_CC63D4C97D4807F1_1 value)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_CC63D4C97D4807F1_1))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_SET_SCALABLECONSTS_OFFSET))(this, value);
	}

	::RPG::GameCore::FiveDimPropMoveConfig* Method_1_EA67E3DC2BC38D4C()
	{
		return ((::RPG::GameCore::FiveDimPropMoveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_METHOD_1_EA67E3DC2BC38D4C_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimPropBakedMoveConfig* Method_1_F9DA06A51DA2987C()
	{
		return ((::RPG::GameCore::FiveDimPropBakedMoveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_METHOD_1_F9DA06A51DA2987C_OFFSET))(this);
	}

	::RPG::Client::LittleGame::FiveDim::PropMoveState get_CurrentState()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_GET_CURRENTSTATE_OFFSET))(this);
	}

	::System::Void set_CurrentState(::RPG::Client::LittleGame::FiveDim::PropMoveState value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_1_4382DA7CF2A7A8AA_SET_CURRENTSTATE_OFFSET))(this, value);
	}
};
