#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceFunctionTag.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceRare.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3BFD1BBF7A6AF539;
class Class_1_6DA6DDD878F74995;
namespace RPG::Client { class MonoDiceCombatDice; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define CLASS_1_BDA8DEEF59BE3031_GET_ISPLAYER_OFFSET UNITYSDK_OFFSET(0x8C6D860)
#define CLASS_1_BDA8DEEF59BE3031_GET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0x8C6D840)
#define CLASS_1_BDA8DEEF59BE3031_GET_ORIGINSCALE_OFFSET UNITYSDK_OFFSET(0x8C6D880)
#define CLASS_1_BDA8DEEF59BE3031_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x8C6C3B0)
#define CLASS_1_BDA8DEEF59BE3031_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x8C6D250)
#define CLASS_1_BDA8DEEF59BE3031_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x8C6D340)
#define CLASS_1_BDA8DEEF59BE3031_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x8C6BC50)
#define CLASS_1_BDA8DEEF59BE3031_METHOD_1_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x8C6D7A0)
#define CLASS_1_BDA8DEEF59BE3031_METHOD_1_2BC55A66CB2B0118_OFFSET UNITYSDK_OFFSET(0x8C6B920)
#define CLASS_1_BDA8DEEF59BE3031_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x8C6CD90)
#define CLASS_1_BDA8DEEF59BE3031_METHOD_1_38B862BB2192EC08_OFFSET UNITYSDK_OFFSET(0x8C6CE70)
#define CLASS_1_BDA8DEEF59BE3031_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x8C6B810)
#define CLASS_1_BDA8DEEF59BE3031_METHOD_1_5AE5B86437B31074_OFFSET UNITYSDK_OFFSET(0x8C6C2E0)
#define CLASS_1_BDA8DEEF59BE3031_METHOD_1_640514F2FC7A7607_OFFSET UNITYSDK_OFFSET(0x8C6C980)
#define CLASS_1_BDA8DEEF59BE3031_METHOD_1_6BB86695870EFBD1_OFFSET UNITYSDK_OFFSET(0x8C6D3A0)
#define CLASS_1_BDA8DEEF59BE3031_METHOD_1_7106DB6861C02536_OFFSET UNITYSDK_OFFSET(0x8C6D4F0)
#define CLASS_1_BDA8DEEF59BE3031_METHOD_1_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x8C6D050)
#define CLASS_1_BDA8DEEF59BE3031_METHOD_1_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x8C6CF90)
#define CLASS_1_BDA8DEEF59BE3031_METHOD_1_8FDEF3B765067D41_OFFSET UNITYSDK_OFFSET(0x8C6BDB0)
#define CLASS_1_BDA8DEEF59BE3031_METHOD_1_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0x8C6B690)
#define CLASS_1_BDA8DEEF59BE3031_METHOD_1_C79026BE76D30212_OFFSET UNITYSDK_OFFSET(0x8C6D620)
#define CLASS_1_BDA8DEEF59BE3031_METHOD_1_CB880CCA91F8D6C9_OFFSET UNITYSDK_OFFSET(0x8C6D6A0)
#define CLASS_1_BDA8DEEF59BE3031_METHOD_1_CCFD131833AE484B_OFFSET UNITYSDK_OFFSET(0x8C6BA90)
#define CLASS_1_BDA8DEEF59BE3031_METHOD_1_D26FE4BE3A1F9FB0_OFFSET UNITYSDK_OFFSET(0x8C6C480)
#define CLASS_1_BDA8DEEF59BE3031_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x8C6BFD0)
#define CLASS_1_BDA8DEEF59BE3031_METHOD_1_EA554210742A0284_OFFSET UNITYSDK_OFFSET(0x8C6CAF0)
#define CLASS_1_BDA8DEEF59BE3031_METHOD_1_EBBDEE76171B99E4_OFFSET UNITYSDK_OFFSET(0x8C6CED0)
#define CLASS_1_BDA8DEEF59BE3031_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x8C6D0A0)
#define CLASS_1_BDA8DEEF59BE3031_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x8C6D8C0)
#define CLASS_1_BDA8DEEF59BE3031_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x8C6CA60)
#define CLASS_1_BDA8DEEF59BE3031_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x8C6B740)
#define CLASS_1_BDA8DEEF59BE3031_ONSELECT_OFFSET UNITYSDK_OFFSET(0x8C6D2B0)
#define CLASS_1_BDA8DEEF59BE3031_SET_ISPLAYER_OFFSET UNITYSDK_OFFSET(0x8C6D870)
#define CLASS_1_BDA8DEEF59BE3031_SET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0x8C6D850)
#define CLASS_1_BDA8DEEF59BE3031_SET_ORIGINSCALE_OFFSET UNITYSDK_OFFSET(0x8C6D8A0)
#define CLASS_1_BDA8DEEF59BE3031__CTOR_OFFSET UNITYSDK_OFFSET(0x8C6AEB0)

inline static constexpr unsigned int Class_1_BDA8DEEF59BE3031_TypeDefinitionIndex = 48853;

class Class_1_BDA8DEEF59BE3031 : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* Field_1_21; // 0x10
	::RPG::Client::MonoDiceCombatDice* Field_1_31; // 0x18
	::UnityEngine::Material* Field_1_14; // 0x20
	::UnityEngine::MeshRenderer* Field_1_16; // 0x28
	::UnityEngine::Material* Field_1_18; // 0x30
	::UnityEngine::AnimationCurve* Field_1_26; // 0x38
	::Il2CppArray<::UnityEngine::MeshRenderer*>* Field_1_12; // 0x40
	::UnityEngine::AnimationCurve* Field_1_22; // 0x48
	::UnityEngine::Transform* Field_1_15; // 0x50
	::UnityEngine::Transform* Field_1_8; // 0x58
	::UnityEngine::AnimationCurve* Field_1_23; // 0x60
	::UnityEngine::Material* Field_1_17; // 0x68
	::UnityEngine::Animation* Field_1_13; // 0x70
	::UnityEngine::AnimationCurve* Field_1_20; // 0x78
	::UnityEngine::Rigidbody* Field_1_10; // 0x80
	::UnityEngine::GameObject* Field_1_7; // 0x88
	::System::Collections::Generic::List_1<::Class_1_6DA6DDD878F74995*>* Field_1_29; // 0x90
	::UnityEngine::AnimationCurve* Field_1_24; // 0x98
	::Il2CppArray<::RPG::GameCore::DiceCombatDiceFunctionTag>* Field_1_32; // 0xA0
	::UnityEngine::Transform* Field_1_27; // 0xA8
	::Il2CppArray<::UnityEngine::MeshRenderer*>* Field_1_11; // 0xB0
	::UnityEngine::AnimationCurve* Field_1_25; // 0xB8
	::UnityEngine::AnimationClip* Field_1_19; // 0xC0
	::RPG::GameCore::DiceCombatDiceType Field_1_6; // 0xC8
	::System::Boolean Field_1_34; // 0xCC
	::System::Boolean _IsSpecial_k__BackingField; // 0xCD
	::System::Boolean Field_1_30; // 0xCE
	::System::Boolean _IsPlayer_k__BackingField; // 0xCF
	::System::Int32 Field_1_1; // 0xD0
	::System::UInt32 Field_1_0; // 0xD4
	::System::Int32 Field_1_28; // 0xD8
	::UnityEngine::Vector3 _OriginScale_k__BackingField; // 0xDC
	::System::UInt32 Field_1_2; // 0xE8
	::RPG::GameCore::DiceCombatDiceRare Field_1_5; // 0xEC
	::System::Boolean Field_1_33; // 0xF0

	::System::Void _ctor(::System::UInt32 a1, ::System::Int32 a2, ::System::UInt32 a3, ::UnityEngine::GameObject* a4, ::System::Boolean a5, ::System::Boolean a6, ::Class_1_3BFD1BBF7A6AF539* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::UInt32, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean, ::Class_1_3BFD1BBF7A6AF539*))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_CCFD131833AE484B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031_METHOD_1_CCFD131833AE484B_OFFSET))(this);
	}

	::System::Void Method_1_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031_METHOD_1_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_1_8FDEF3B765067D41(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031_METHOD_1_8FDEF3B765067D41_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_1_5AE5B86437B31074(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031_METHOD_1_5AE5B86437B31074_OFFSET))(this, a1);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::ValueTuple_3<::System::Int32, ::Class_1_6DA6DDD878F74995*, ::System::UInt32> Method_1_D26FE4BE3A1F9FB0()
	{
		return ((::System::ValueTuple_3<::System::Int32, ::Class_1_6DA6DDD878F74995*, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031_METHOD_1_D26FE4BE3A1F9FB0_OFFSET))(this);
	}

	::System::Void Method_1_640514F2FC7A7607(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031_METHOD_1_640514F2FC7A7607_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Void Method_1_EA554210742A0284(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031_METHOD_1_EA554210742A0284_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_EBBDEE76171B99E4(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031_METHOD_1_EBBDEE76171B99E4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void OnSelect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031_ONSELECT_OFFSET))(this);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_6BB86695870EFBD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031_METHOD_1_6BB86695870EFBD1_OFFSET))(this);
	}

	::System::Boolean Method_1_7106DB6861C02536(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031_METHOD_1_7106DB6861C02536_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C79026BE76D30212(::RPG::GameCore::DiceCombatDiceFunctionTag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceFunctionTag))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031_METHOD_1_C79026BE76D30212_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB880CCA91F8D6C9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031_METHOD_1_CB880CCA91F8D6C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031_METHOD_1_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_1_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031_METHOD_1_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_1_2BC55A66CB2B0118()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031_METHOD_1_2BC55A66CB2B0118_OFFSET))(this);
	}

	::System::Boolean get_IsSpecial()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031_GET_ISSPECIAL_OFFSET))(this);
	}

	::System::Void set_IsSpecial(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031_SET_ISSPECIAL_OFFSET))(this, value);
	}

	::System::Boolean get_IsPlayer()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031_GET_ISPLAYER_OFFSET))(this);
	}

	::System::Void set_IsPlayer(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031_SET_ISPLAYER_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_OriginScale()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031_GET_ORIGINSCALE_OFFSET))(this);
	}

	::System::Void set_OriginScale(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031_SET_ORIGINSCALE_OFFSET))(this, value);
	}

	::UnityEngine::Transform* Method_1_38B862BB2192EC08()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031_METHOD_1_38B862BB2192EC08_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDA8DEEF59BE3031_METHOD_1_83DA3EC57FF907F4_OFFSET))(this);
	}
};
