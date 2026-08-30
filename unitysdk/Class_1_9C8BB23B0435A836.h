#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9C8BB23B0435A836_DiceCombatDicePlayerOutlineType.h"
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
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define CLASS_1_9C8BB23B0435A836_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1AA5D050)
#define CLASS_1_9C8BB23B0435A836_GET_EFFECTROOT_OFFSET UNITYSDK_OFFSET(0x1AA5D2B0)
#define CLASS_1_9C8BB23B0435A836_GET_ISPLAYERTEAM_OFFSET UNITYSDK_OFFSET(0x1AA5D250)
#define CLASS_1_9C8BB23B0435A836_GET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0x1AA5D230)
#define CLASS_1_9C8BB23B0435A836_GET_ORIGINSCALE_OFFSET UNITYSDK_OFFSET(0x1AA5D270)
#define CLASS_1_9C8BB23B0435A836_METHOD_1_00C5E99C9B0EC08D_OFFSET UNITYSDK_OFFSET(0x1AA5ACC0)
#define CLASS_1_9C8BB23B0435A836_METHOD_1_0C45651D955F5B7B_OFFSET UNITYSDK_OFFSET(0x1AA5C1B0)
#define CLASS_1_9C8BB23B0435A836_METHOD_1_0D3455A2B8A3E6D4_OFFSET UNITYSDK_OFFSET(0x1AA5CBE0)
#define CLASS_1_9C8BB23B0435A836_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1AA5CA90)
#define CLASS_1_9C8BB23B0435A836_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x1AA5CB80)
#define CLASS_1_9C8BB23B0435A836_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x1AA5B0B0)
#define CLASS_1_9C8BB23B0435A836_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x1AA5B130)
#define CLASS_1_9C8BB23B0435A836_METHOD_1_2BC55A66CB2B0118_OFFSET UNITYSDK_OFFSET(0x1AA5A7A0)
#define CLASS_1_9C8BB23B0435A836_METHOD_1_2E1F2A18CFAFA6B7_OFFSET UNITYSDK_OFFSET(0x1AA5CD00)
#define CLASS_1_9C8BB23B0435A836_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1AA5C450)
#define CLASS_1_9C8BB23B0435A836_METHOD_1_32B2368221A04800_OFFSET UNITYSDK_OFFSET(0x1AA5CFA0)
#define CLASS_1_9C8BB23B0435A836_METHOD_1_38402487B275C690_OFFSET UNITYSDK_OFFSET(0x1AA5BE50)
#define CLASS_1_9C8BB23B0435A836_METHOD_1_38B862BB2192EC08_OFFSET UNITYSDK_OFFSET(0x1AA5C530)
#define CLASS_1_9C8BB23B0435A836_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x1AA5B860)
#define CLASS_1_9C8BB23B0435A836_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x1AA5A6A0)
#define CLASS_1_9C8BB23B0435A836_METHOD_1_5AE5B86437B31074_OFFSET UNITYSDK_OFFSET(0x1AA5B7A0)
#define CLASS_1_9C8BB23B0435A836_METHOD_1_7C5833C04DA1B77C_OFFSET UNITYSDK_OFFSET(0x1AA5C050)
#define CLASS_1_9C8BB23B0435A836_METHOD_1_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x1AA5C7D0)
#define CLASS_1_9C8BB23B0435A836_METHOD_1_878F4B60076F8493_OFFSET UNITYSDK_OFFSET(0x1AA5A970)
#define CLASS_1_9C8BB23B0435A836_METHOD_1_8B1D6514BFAE88DD_OFFSET UNITYSDK_OFFSET(0x1AA5AB10)
#define CLASS_1_9C8BB23B0435A836_METHOD_1_8FDEF3B765067D41_OFFSET UNITYSDK_OFFSET(0x1AA5B290)
#define CLASS_1_9C8BB23B0435A836_METHOD_1_97CDCC5C4EBE1F1E_OFFSET UNITYSDK_OFFSET(0x1AA5A910)
#define CLASS_1_9C8BB23B0435A836_METHOD_1_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0x1AA5A540)
#define CLASS_1_9C8BB23B0435A836_METHOD_1_C79026BE76D30212_OFFSET UNITYSDK_OFFSET(0x1AA5CE20)
#define CLASS_1_9C8BB23B0435A836_METHOD_1_CB880CCA91F8D6C9_OFFSET UNITYSDK_OFFSET(0x1AA5CEA0)
#define CLASS_1_9C8BB23B0435A836_METHOD_1_CFE2A98E79505379_OFFSET UNITYSDK_OFFSET(0x1AA5B920)
#define CLASS_1_9C8BB23B0435A836_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x1AA5B4B0)
#define CLASS_1_9C8BB23B0435A836_METHOD_1_EBBDEE76171B99E4_OFFSET UNITYSDK_OFFSET(0x1AA5C590)
#define CLASS_1_9C8BB23B0435A836_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x1AA5C8E0)
#define CLASS_1_9C8BB23B0435A836_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1AA5D2D0)
#define CLASS_1_9C8BB23B0435A836_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x1AA5C120)
#define CLASS_1_9C8BB23B0435A836_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x1AA5C890)
#define CLASS_1_9C8BB23B0435A836_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x1AA5A5E0)
#define CLASS_1_9C8BB23B0435A836_ONSELECT_OFFSET UNITYSDK_OFFSET(0x1AA5CAF0)
#define CLASS_1_9C8BB23B0435A836_SET_EFFECTROOT_OFFSET UNITYSDK_OFFSET(0x1AA5D2C0)
#define CLASS_1_9C8BB23B0435A836_SET_ISPLAYERTEAM_OFFSET UNITYSDK_OFFSET(0x1AA5D260)
#define CLASS_1_9C8BB23B0435A836_SET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0x1AA5D240)
#define CLASS_1_9C8BB23B0435A836_SET_ORIGINSCALE_OFFSET UNITYSDK_OFFSET(0x1AA5D290)
#define CLASS_1_9C8BB23B0435A836__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA59C00)

inline static constexpr unsigned int Class_1_9C8BB23B0435A836_TypeDefinitionIndex = 60427;

class Class_1_9C8BB23B0435A836 : public ::System::Object
{
public:
	::UnityEngine::Transform* _EffectRoot_k__BackingField; // 0x10
	::Il2CppArray<::UnityEngine::MeshRenderer*>* MOECGMPCECP; // 0x18
	::Il2CppArray<::UnityEngine::MeshRenderer*>* IEIDPPIBOED; // 0x20
	::UnityEngine::AnimationCurve* IBHJMCFFMPL; // 0x28
	::UnityEngine::Material* AOMONHPBCJP; // 0x30
	::UnityEngine::AnimationClip* AKLPLKFNMOC; // 0x38
	::UnityEngine::Transform* FGPGBNKEHPL; // 0x40
	::UnityEngine::Animation* PMOJILOJEPE; // 0x48
	::UnityEngine::Material* NHIKGJCENKF; // 0x50
	::UnityEngine::AnimationCurve* EJLMIDGOLAH; // 0x58
	::UnityEngine::Transform* KHOOJMNKMKC; // 0x60
	::UnityEngine::MeshRenderer* OABLIHKLBNI; // 0x68
	::UnityEngine::Rigidbody* LONMALFCKOI; // 0x70
	::UnityEngine::AnimationCurve* JJOACHEJAAE; // 0x78
	::UnityEngine::Material* GMHFMJCDJMI; // 0x80
	::UnityEngine::MaterialPropertyBlock* LCAGOLEJJJK; // 0x88
	::UnityEngine::AnimationCurve* ADHDLIKBDPG; // 0x90
	::RPG::Client::MonoDiceCombatDice* EFGDMKMFMKM; // 0x98
	::UnityEngine::AnimationCurve* DIGPJMIEBFJ; // 0xA0
	::System::Collections::Generic::List_1<::Class_1_6DA6DDD878F74995*>* EBJICJCMKCJ; // 0xA8
	::UnityEngine::AnimationCurve* IPBLPNJGFIC; // 0xB0
	::UnityEngine::Transform* LKDOKJKLMIH; // 0xB8
	::Il2CppArray<::RPG::GameCore::DiceCombatDiceFunctionTag>* PGFEAIOPMGG; // 0xC0
	::UnityEngine::Transform* FOIBBKOJEGF; // 0xC8
	::UnityEngine::AnimationCurve* OJGFKCCJAEF; // 0xD0
	::UnityEngine::GameObject* GKNBCPMJHMN; // 0xD8
	::UnityEngine::Vector3 _OriginScale_k__BackingField; // 0xE0
	::System::Int32 GMDBHJKEAEI; // 0xEC
	::System::UInt32 LCPOBJEKCFB; // 0xF0
	::System::Boolean LPJMDKIBPCG; // 0xF4
	::System::Boolean KIKKCLIPHEM; // 0xF5
	::System::Boolean _IsSpecial_k__BackingField; // 0xF6
	::System::Boolean _IsPlayerTeam_k__BackingField; // 0xF7
	::System::Boolean ALJCMNDHLBE; // 0xF8
	::System::Boolean HGMDEGPEENE; // 0xF9
	::RPG::GameCore::DiceCombatDiceType CEBDDDJMJIJ; // 0xFC
	::System::UInt32 DKFDAEFMFHJ; // 0x100
	::System::Int32 HFPKKJLJJHM; // 0x104
	::RPG::GameCore::DiceCombatDiceRare IEFPLNLMFNO; // 0x108

	::System::Void _ctor(::System::UInt32 a1, ::System::Int32 a2, ::System::UInt32 a3, ::UnityEngine::GameObject* a4, ::System::Boolean a5, ::System::Boolean a6, ::Class_1_3BFD1BBF7A6AF539* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::UInt32, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean, ::Class_1_3BFD1BBF7A6AF539*))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::UnityEngine::GameObject* Method_1_97CDCC5C4EBE1F1E(::UnityEngine::Transform* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_METHOD_1_97CDCC5C4EBE1F1E_OFFSET))(this, a1);
	}

	::System::Void Method_1_878F4B60076F8493(::Class_1_9C8BB23B0435A836_DiceCombatDicePlayerOutlineType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9C8BB23B0435A836_DiceCombatDicePlayerOutlineType))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_METHOD_1_878F4B60076F8493_OFFSET))(this, a1);
	}

	::System::Void Method_1_8B1D6514BFAE88DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_METHOD_1_8B1D6514BFAE88DD_OFFSET))(this);
	}

	::System::Void Method_1_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_METHOD_1_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}

	::System::Void Method_1_00C5E99C9B0EC08D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_METHOD_1_00C5E99C9B0EC08D_OFFSET))(this, a1);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_1_8FDEF3B765067D41(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_METHOD_1_8FDEF3B765067D41_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_1_5AE5B86437B31074(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_METHOD_1_5AE5B86437B31074_OFFSET))(this, a1);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::ValueTuple_3<::System::Int32, ::Class_1_6DA6DDD878F74995*, ::System::UInt32> Method_1_CFE2A98E79505379()
	{
		return ((::System::ValueTuple_3<::System::Int32, ::Class_1_6DA6DDD878F74995*, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_METHOD_1_CFE2A98E79505379_OFFSET))(this);
	}

	::System::UInt32 Method_1_38402487B275C690(::System::Int32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_METHOD_1_38402487B275C690_OFFSET))(this, a1);
	}

	::System::Void Method_1_7C5833C04DA1B77C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_METHOD_1_7C5833C04DA1B77C_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Void Method_1_0C45651D955F5B7B(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_METHOD_1_0C45651D955F5B7B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_EBBDEE76171B99E4(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_METHOD_1_EBBDEE76171B99E4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void OnSelect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_ONSELECT_OFFSET))(this);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_0D3455A2B8A3E6D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_METHOD_1_0D3455A2B8A3E6D4_OFFSET))(this);
	}

	::System::Boolean Method_1_2E1F2A18CFAFA6B7(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_METHOD_1_2E1F2A18CFAFA6B7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C79026BE76D30212(::RPG::GameCore::DiceCombatDiceFunctionTag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceFunctionTag))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_METHOD_1_C79026BE76D30212_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB880CCA91F8D6C9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_METHOD_1_CB880CCA91F8D6C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_1_32B2368221A04800(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_METHOD_1_32B2368221A04800_OFFSET))(this, a1);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_1_2BC55A66CB2B0118()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_METHOD_1_2BC55A66CB2B0118_OFFSET))(this);
	}

	::System::Int32 CompareTo(::Class_1_9C8BB23B0435A836* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_9C8BB23B0435A836*))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_COMPARETO_OFFSET))(this, a1);
	}

	::System::Boolean get_IsSpecial()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_GET_ISSPECIAL_OFFSET))(this);
	}

	::System::Void set_IsSpecial(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_SET_ISSPECIAL_OFFSET))(this, a1);
	}

	::System::Boolean get_IsPlayerTeam()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_GET_ISPLAYERTEAM_OFFSET))(this);
	}

	::System::Void set_IsPlayerTeam(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_SET_ISPLAYERTEAM_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_OriginScale()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_GET_ORIGINSCALE_OFFSET))(this);
	}

	::System::Void set_OriginScale(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_SET_ORIGINSCALE_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_38B862BB2192EC08()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_METHOD_1_38B862BB2192EC08_OFFSET))(this);
	}

	::UnityEngine::Transform* get_EffectRoot()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_GET_EFFECTROOT_OFFSET))(this);
	}

	::System::Void set_EffectRoot(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_SET_EFFECTROOT_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C8BB23B0435A836_METHOD_1_83DA3EC57FF907F4_OFFSET))(this);
	}
};
