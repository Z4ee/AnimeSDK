#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CharacterAliveState.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_F3CFF1AFF7EE7DCD;
class Class_3_69464E63CE567F68;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_1_E78807FA9E90DA6C_METHOD_1_01EBFB880BA602F9_OFFSET UNITYSDK_OFFSET(0x147EDF30)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_074790363057C535_OFFSET UNITYSDK_OFFSET(0x147EE1E0)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_12E2584290784D11_1_OFFSET UNITYSDK_OFFSET(0x147EE8F0)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_12E2584290784D11_2_OFFSET UNITYSDK_OFFSET(0x147F0710)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_12E2584290784D11_OFFSET UNITYSDK_OFFSET(0x147EE140)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_150D6F39622D1BB5_OFFSET UNITYSDK_OFFSET(0x147F0220)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_28F18D141513805A_OFFSET UNITYSDK_OFFSET(0x147EDE20)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_3110E4E8F534D28F_1_OFFSET UNITYSDK_OFFSET(0x147EFDF0)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_3110E4E8F534D28F_2_OFFSET UNITYSDK_OFFSET(0x147EE860)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_3110E4E8F534D28F_OFFSET UNITYSDK_OFFSET(0x147ED7D0)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_31EBC8B8FDA7DFF1_OFFSET UNITYSDK_OFFSET(0x147EFF00)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_32995BC42D4DD175_OFFSET UNITYSDK_OFFSET(0x147EEB00)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_36879C007330AF1F_OFFSET UNITYSDK_OFFSET(0x147ED740)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_38D9449341BA86BD_OFFSET UNITYSDK_OFFSET(0x147EED60)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_42B89416D02BECD9_OFFSET UNITYSDK_OFFSET(0x147EF960)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_47CDDACA9A031BCE_OFFSET UNITYSDK_OFFSET(0x147EE300)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_5189971FE48B344A_OFFSET UNITYSDK_OFFSET(0x147F00D0)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_5461E83839E8B020_OFFSET UNITYSDK_OFFSET(0x147F0610)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_5924CD94D69CD853_OFFSET UNITYSDK_OFFSET(0x147ED6C0)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_5F093B9BC9219DC1_OFFSET UNITYSDK_OFFSET(0x147EFF60)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_74BB213AE3FE2084_OFFSET UNITYSDK_OFFSET(0x147EE9A0)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_757935B8717A57B7_OFFSET UNITYSDK_OFFSET(0x147F0060)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_81424E0658DFB05E_OFFSET UNITYSDK_OFFSET(0x147EFFC0)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_8705C6811CFC2453_OFFSET UNITYSDK_OFFSET(0x147EF530)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_91028EF447CF38AB_OFFSET UNITYSDK_OFFSET(0x147F0680)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_A15BC7F59DE3E286_OFFSET UNITYSDK_OFFSET(0x147ED8F0)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_A2900CAAF734C69D_OFFSET UNITYSDK_OFFSET(0x147EF760)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_AD83CEC50439B7A0_OFFSET UNITYSDK_OFFSET(0x147EF210)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_B2BB1576EDCDCBA6_OFFSET UNITYSDK_OFFSET(0x147EDE90)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_B67B5BDD0882CB43_OFFSET UNITYSDK_OFFSET(0x147EFC10)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_BEB6DE5CAC3D0800_1_OFFSET UNITYSDK_OFFSET(0x147EFE80)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_BEB6DE5CAC3D0800_OFFSET UNITYSDK_OFFSET(0x147EF4B0)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_C6EDB6BFBB65BE58_OFFSET UNITYSDK_OFFSET(0x147F04A0)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_CCF7ABC7CDE47B53_1_OFFSET UNITYSDK_OFFSET(0x147EE7C0)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_CCF7ABC7CDE47B53_OFFSET UNITYSDK_OFFSET(0x147EE6F0)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_CF347C8679BFB90C_OFFSET UNITYSDK_OFFSET(0x147EE660)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_D8A409E2F2CAC6DA_OFFSET UNITYSDK_OFFSET(0x147EFB40)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_E52A85E9F69A491B_OFFSET UNITYSDK_OFFSET(0x147ED860)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_E7A98C06FE01AD9C_OFFSET UNITYSDK_OFFSET(0x147EF160)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_EBE0B1B3E906EAF6_1_OFFSET UNITYSDK_OFFSET(0x147F01B0)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_EBE0B1B3E906EAF6_OFFSET UNITYSDK_OFFSET(0x147EF440)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_EF0038944C44D5BE_1_OFFSET UNITYSDK_OFFSET(0x147EE5D0)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_EF0038944C44D5BE_2_OFFSET UNITYSDK_OFFSET(0x147EF0D0)
#define CLASS_1_E78807FA9E90DA6C_METHOD_1_EF0038944C44D5BE_OFFSET UNITYSDK_OFFSET(0x147EDD90)

inline static constexpr unsigned int Class_1_E78807FA9E90DA6C_TypeDefinitionIndex = 76466;

class Class_1_E78807FA9E90DA6C : public ::System::Object
{
public:
	static ::System::Boolean Method_1_5924CD94D69CD853(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_5924CD94D69CD853_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_36879C007330AF1F(::Class_2_F3CFF1AFF7EE7DCD* a1)
	{
		return ((::System::UInt32(*)(::Class_2_F3CFF1AFF7EE7DCD*))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_36879C007330AF1F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3110E4E8F534D28F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_3110E4E8F534D28F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_E52A85E9F69A491B(::Class_2_F3CFF1AFF7EE7DCD* a1)
	{
		return ((::System::Boolean(*)(::Class_2_F3CFF1AFF7EE7DCD*))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_E52A85E9F69A491B_OFFSET))(a1);
	}

	static ::System::String* Method_1_A15BC7F59DE3E286(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::String*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_A15BC7F59DE3E286_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_EF0038944C44D5BE(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::UInt32(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_EF0038944C44D5BE_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_28F18D141513805A(::Class_3_69464E63CE567F68* a1)
	{
		return ((::System::UInt32(*)(::Class_3_69464E63CE567F68*))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_28F18D141513805A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_B2BB1576EDCDCBA6(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_B2BB1576EDCDCBA6_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_01EBFB880BA602F9(::MoleMole::Battle::Entity* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_01EBFB880BA602F9_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_12E2584290784D11(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_12E2584290784D11_OFFSET))(a1);
	}

	static ::MoleMole::Config::CharacterAliveState Method_1_074790363057C535(::MoleMole::EntityHandle a1)
	{
		return ((::MoleMole::Config::CharacterAliveState(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_074790363057C535_OFFSET))(a1);
	}

	static ::System::Void Method_1_47CDDACA9A031BCE(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_47CDDACA9A031BCE_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_EF0038944C44D5BE_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::UInt32(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_EF0038944C44D5BE_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CF347C8679BFB90C(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_CF347C8679BFB90C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CCF7ABC7CDE47B53(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_CCF7ABC7CDE47B53_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_12E2584290784D11_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_12E2584290784D11_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_74BB213AE3FE2084(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_74BB213AE3FE2084_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_32995BC42D4DD175(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_32995BC42D4DD175_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_38D9449341BA86BD(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_38D9449341BA86BD_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_EF0038944C44D5BE_2(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::UInt32(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_EF0038944C44D5BE_2_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_E7A98C06FE01AD9C(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::UInt32(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_E7A98C06FE01AD9C_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_AD83CEC50439B7A0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_AD83CEC50439B7A0_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_EBE0B1B3E906EAF6(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_EBE0B1B3E906EAF6_OFFSET))(a1, a2);
	}

	static ::System::Nullable_1<::System::Int32> Method_1_BEB6DE5CAC3D0800(::Class_3_69464E63CE567F68* a1)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::Class_3_69464E63CE567F68*))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_BEB6DE5CAC3D0800_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_8705C6811CFC2453(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_8705C6811CFC2453_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_A2900CAAF734C69D(::MoleMole::Battle::Entity* a1)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_A2900CAAF734C69D_OFFSET))(a1);
	}

	static ::UnityEngine::Quaternion Method_1_42B89416D02BECD9(::MoleMole::Battle::Entity* a1)
	{
		return ((::UnityEngine::Quaternion(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_42B89416D02BECD9_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_D8A409E2F2CAC6DA(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_D8A409E2F2CAC6DA_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_B67B5BDD0882CB43(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_B67B5BDD0882CB43_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3110E4E8F534D28F_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_3110E4E8F534D28F_1_OFFSET))(a1);
	}

	static ::System::Nullable_1<::System::Int32> Method_1_BEB6DE5CAC3D0800_1(::Class_3_69464E63CE567F68* a1)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::Class_3_69464E63CE567F68*))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_BEB6DE5CAC3D0800_1_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_31EBC8B8FDA7DFF1(::Class_2_F3CFF1AFF7EE7DCD* a1, ::System::Boolean a2)
	{
		return ((::System::UInt32(*)(::Class_2_F3CFF1AFF7EE7DCD*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_31EBC8B8FDA7DFF1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3110E4E8F534D28F_2(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_3110E4E8F534D28F_2_OFFSET))(a1);
	}

	static ::System::String* Method_1_5F093B9BC9219DC1(::Class_2_F3CFF1AFF7EE7DCD* a1)
	{
		return ((::System::String*(*)(::Class_2_F3CFF1AFF7EE7DCD*))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_5F093B9BC9219DC1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_81424E0658DFB05E(::MoleMole::Battle::Entity* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_81424E0658DFB05E_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_757935B8717A57B7(::System::Object* a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_757935B8717A57B7_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_5189971FE48B344A(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_5189971FE48B344A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_EBE0B1B3E906EAF6_1(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_EBE0B1B3E906EAF6_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_150D6F39622D1BB5(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3& a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_150D6F39622D1BB5_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_C6EDB6BFBB65BE58(::Class_2_F3CFF1AFF7EE7DCD* a1)
	{
		return ((::System::Boolean(*)(::Class_2_F3CFF1AFF7EE7DCD*))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_C6EDB6BFBB65BE58_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_5461E83839E8B020(::Class_3_69464E63CE567F68* a1)
	{
		return ((::System::UInt32(*)(::Class_3_69464E63CE567F68*))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_5461E83839E8B020_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CCF7ABC7CDE47B53_1(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_CCF7ABC7CDE47B53_1_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::CharacterAliveState Method_1_91028EF447CF38AB(::MoleMole::Battle::Entity* a1)
	{
		return ((::MoleMole::Config::CharacterAliveState(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_91028EF447CF38AB_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_12E2584290784D11_2(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_E78807FA9E90DA6C_METHOD_1_12E2584290784D11_2_OFFSET))(a1);
	}
};
