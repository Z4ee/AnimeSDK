#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"
#include "unitysdk/Struct_2_CC63D4C97D4807F1_1.h"
#include "unitysdk/System/Object.h"

class Class_1_0A3B9FD0FE703FDC;
class Class_1_B4357A1C72BABC6B;
class Class_1_D43919DCE1F00DCB;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;
namespace RPG::GameCore { class FiveDimPropBakedMoveConfig; }
namespace RPG::GameCore { class FiveDimPropMoveConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class ConfigurableJoint; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define CLASS_1_A80764A8DE475761_CLEAR_OFFSET UNITYSDK_OFFSET(0xAFFF3F0)
#define CLASS_1_A80764A8DE475761_GET_CONSTRAINTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xB0018F0)
#define CLASS_1_A80764A8DE475761_GET_CONTEXTS_OFFSET UNITYSDK_OFFSET(0xB001850)
#define CLASS_1_A80764A8DE475761_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0xB001AE0)
#define CLASS_1_A80764A8DE475761_GET_ISPROXYREADY_OFFSET UNITYSDK_OFFSET(0xB0018B0)
#define CLASS_1_A80764A8DE475761_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xB001870)
#define CLASS_1_A80764A8DE475761_GET_PROXYBODY_OFFSET UNITYSDK_OFFSET(0xB001910)
#define CLASS_1_A80764A8DE475761_GET_PROXYENTITY_OFFSET UNITYSDK_OFFSET(0xB001890)
#define CLASS_1_A80764A8DE475761_GET_PROXYJOINT_OFFSET UNITYSDK_OFFSET(0xB001930)
#define CLASS_1_A80764A8DE475761_GET_PROXYTRANSFORM_OFFSET UNITYSDK_OFFSET(0xB0018D0)
#define CLASS_1_A80764A8DE475761_GET_SCALABLECONSTS_OFFSET UNITYSDK_OFFSET(0xB001950)
#define CLASS_1_A80764A8DE475761_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0xB001830)
#define CLASS_1_A80764A8DE475761_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0xB001630)
#define CLASS_1_A80764A8DE475761_METHOD_1_147A527305B2FF1B_OFFSET UNITYSDK_OFFSET(0xAFFF7C0)
#define CLASS_1_A80764A8DE475761_METHOD_1_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0xB000F70)
#define CLASS_1_A80764A8DE475761_METHOD_1_2C1F0A815CE2FE02_OFFSET UNITYSDK_OFFSET(0xB001510)
#define CLASS_1_A80764A8DE475761_METHOD_1_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0xB0017D0)
#define CLASS_1_A80764A8DE475761_METHOD_1_6112A1276899AF0F_OFFSET UNITYSDK_OFFSET(0xAFFFD90)
#define CLASS_1_A80764A8DE475761_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB001290)
#define CLASS_1_A80764A8DE475761_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xB000220)
#define CLASS_1_A80764A8DE475761_METHOD_1_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0xB001160)
#define CLASS_1_A80764A8DE475761_METHOD_1_B561215938B6562F_OFFSET UNITYSDK_OFFSET(0xAFFF630)
#define CLASS_1_A80764A8DE475761_METHOD_1_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0xB0012F0)
#define CLASS_1_A80764A8DE475761_METHOD_1_C9005D9E81D8C5E5_OFFSET UNITYSDK_OFFSET(0xB000120)
#define CLASS_1_A80764A8DE475761_METHOD_1_C969C48EB0DAEC25_OFFSET UNITYSDK_OFFSET(0xB0002A0)
#define CLASS_1_A80764A8DE475761_METHOD_1_CE7DD1A4F75322E2_OFFSET UNITYSDK_OFFSET(0xAFFF470)
#define CLASS_1_A80764A8DE475761_METHOD_1_D23CC7F360375D51_OFFSET UNITYSDK_OFFSET(0xB001770)
#define CLASS_1_A80764A8DE475761_METHOD_1_F9DA06A51DA2987C_OFFSET UNITYSDK_OFFSET(0xB001990)
#define CLASS_1_A80764A8DE475761_SET_CONSTRAINTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xB001900)
#define CLASS_1_A80764A8DE475761_SET_CONTEXTS_OFFSET UNITYSDK_OFFSET(0xB001860)
#define CLASS_1_A80764A8DE475761_SET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0xB001AF0)
#define CLASS_1_A80764A8DE475761_SET_ISPROXYREADY_OFFSET UNITYSDK_OFFSET(0xB0018C0)
#define CLASS_1_A80764A8DE475761_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xB001880)
#define CLASS_1_A80764A8DE475761_SET_PROXYBODY_OFFSET UNITYSDK_OFFSET(0xB001920)
#define CLASS_1_A80764A8DE475761_SET_PROXYENTITY_OFFSET UNITYSDK_OFFSET(0xB0018A0)
#define CLASS_1_A80764A8DE475761_SET_PROXYJOINT_OFFSET UNITYSDK_OFFSET(0xB001940)
#define CLASS_1_A80764A8DE475761_SET_PROXYTRANSFORM_OFFSET UNITYSDK_OFFSET(0xB0018E0)
#define CLASS_1_A80764A8DE475761_SET_SCALABLECONSTS_OFFSET UNITYSDK_OFFSET(0xB001970)
#define CLASS_1_A80764A8DE475761_SET_SERVICES_OFFSET UNITYSDK_OFFSET(0xB001840)
#define CLASS_1_A80764A8DE475761__CTOR_OFFSET UNITYSDK_OFFSET(0xB001B00)

inline static constexpr unsigned int Class_1_A80764A8DE475761_TypeDefinitionIndex = 71540;

class Class_1_A80764A8DE475761 : public ::System::Object
{
public:
	::UnityEngine::Transform* _ProxyTransform_k__BackingField; // 0x10
	::UnityEngine::Transform* _ConstraintTransform_k__BackingField; // 0x18
	::Class_3_1E4F9B0ED3BF21DE* _Services_k__BackingField; // 0x20
	::Class_2_B9E8C2EEAA5C96EC* _ProxyEntity_k__BackingField; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FiveDim::PropMoveState, ::Class_1_D43919DCE1F00DCB*>* Field_1_4; // 0x30
	::Class_2_B9E8C2EEAA5C96EC* _OwnerEntity_k__BackingField; // 0x38
	::UnityEngine::ConfigurableJoint* _ProxyJoint_k__BackingField; // 0x40
	::Class_1_B4357A1C72BABC6B* _Contexts_k__BackingField; // 0x48
	::Class_1_D43919DCE1F00DCB* Field_1_8; // 0x50
	::UnityEngine::Rigidbody* _ProxyBody_k__BackingField; // 0x58
	::RPG::Client::LittleGame::FiveDim::PropMoveState _CurrentState_k__BackingField; // 0x60
	::System::Boolean _IsProxyReady_k__BackingField; // 0x64
	::Struct_2_CC63D4C97D4807F1_1 _ScalableConsts_k__BackingField; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_B561215938B6562F(::Class_3_1E4F9B0ED3BF21DE* a1, ::Class_1_B4357A1C72BABC6B* a2, ::Class_2_B9E8C2EEAA5C96EC* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1E4F9B0ED3BF21DE*, ::Class_1_B4357A1C72BABC6B*, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_METHOD_1_B561215938B6562F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C9005D9E81D8C5E5(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_METHOD_1_C9005D9E81D8C5E5_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_METHOD_1_289F28027FF47717_OFFSET))(this);
	}

	::System::Void Method_1_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_METHOD_1_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_METHOD_1_BF5E2DCAE0BF038A_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_147A527305B2FF1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_METHOD_1_147A527305B2FF1B_OFFSET))(this);
	}

	::System::Void Method_1_6112A1276899AF0F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_METHOD_1_6112A1276899AF0F_OFFSET))(this);
	}

	::System::Void Method_1_CE7DD1A4F75322E2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_METHOD_1_CE7DD1A4F75322E2_OFFSET))(this);
	}

	::System::Void Method_1_C969C48EB0DAEC25()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_METHOD_1_C969C48EB0DAEC25_OFFSET))(this);
	}

	::System::Boolean Method_1_2C1F0A815CE2FE02()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_METHOD_1_2C1F0A815CE2FE02_OFFSET))(this);
	}

	::Class_3_1E4F9B0ED3BF21DE* get_Services()
	{
		return ((::Class_3_1E4F9B0ED3BF21DE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_GET_SERVICES_OFFSET))(this);
	}

	::System::Void set_Services(::Class_3_1E4F9B0ED3BF21DE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_SET_SERVICES_OFFSET))(this, a1);
	}

	::Class_1_B4357A1C72BABC6B* get_Contexts()
	{
		return ((::Class_1_B4357A1C72BABC6B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_GET_CONTEXTS_OFFSET))(this);
	}

	::System::Void set_Contexts(::Class_1_B4357A1C72BABC6B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_SET_CONTEXTS_OFFSET))(this, a1);
	}

	::Class_2_B9E8C2EEAA5C96EC* get_OwnerEntity()
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_GET_OWNERENTITY_OFFSET))(this);
	}

	::System::Void set_OwnerEntity(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_SET_OWNERENTITY_OFFSET))(this, a1);
	}

	::Class_2_B9E8C2EEAA5C96EC* get_ProxyEntity()
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_GET_PROXYENTITY_OFFSET))(this);
	}

	::System::Void set_ProxyEntity(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_SET_PROXYENTITY_OFFSET))(this, a1);
	}

	::Class_1_0A3B9FD0FE703FDC* Method_1_47FCE72550F759BF()
	{
		return ((::Class_1_0A3B9FD0FE703FDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_METHOD_1_47FCE72550F759BF_OFFSET))(this);
	}

	::System::Boolean get_IsProxyReady()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_GET_ISPROXYREADY_OFFSET))(this);
	}

	::System::Void set_IsProxyReady(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_SET_ISPROXYREADY_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_ProxyTransform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_GET_PROXYTRANSFORM_OFFSET))(this);
	}

	::System::Void set_ProxyTransform(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_SET_PROXYTRANSFORM_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_ConstraintTransform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_GET_CONSTRAINTTRANSFORM_OFFSET))(this);
	}

	::System::Void set_ConstraintTransform(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_SET_CONSTRAINTTRANSFORM_OFFSET))(this, a1);
	}

	::UnityEngine::Rigidbody* get_ProxyBody()
	{
		return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_GET_PROXYBODY_OFFSET))(this);
	}

	::System::Void set_ProxyBody(::UnityEngine::Rigidbody* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_SET_PROXYBODY_OFFSET))(this, a1);
	}

	::UnityEngine::ConfigurableJoint* get_ProxyJoint()
	{
		return ((::UnityEngine::ConfigurableJoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_GET_PROXYJOINT_OFFSET))(this);
	}

	::System::Void set_ProxyJoint(::UnityEngine::ConfigurableJoint* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ConfigurableJoint*))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_SET_PROXYJOINT_OFFSET))(this, a1);
	}

	::Struct_2_CC63D4C97D4807F1_1 get_ScalableConsts()
	{
		return ((::Struct_2_CC63D4C97D4807F1_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_GET_SCALABLECONSTS_OFFSET))(this);
	}

	::System::Void set_ScalableConsts(::Struct_2_CC63D4C97D4807F1_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_CC63D4C97D4807F1_1))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_SET_SCALABLECONSTS_OFFSET))(this, a1);
	}

	::RPG::GameCore::FiveDimPropMoveConfig* Method_1_D23CC7F360375D51()
	{
		return ((::RPG::GameCore::FiveDimPropMoveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_METHOD_1_D23CC7F360375D51_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimPropBakedMoveConfig* Method_1_F9DA06A51DA2987C()
	{
		return ((::RPG::GameCore::FiveDimPropBakedMoveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_METHOD_1_F9DA06A51DA2987C_OFFSET))(this);
	}

	::RPG::Client::LittleGame::FiveDim::PropMoveState get_CurrentState()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_GET_CURRENTSTATE_OFFSET))(this);
	}

	::System::Void set_CurrentState(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_1_A80764A8DE475761_SET_CURRENTSTATE_OFFSET))(this, a1);
	}
};
