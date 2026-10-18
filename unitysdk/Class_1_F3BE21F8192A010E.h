#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_800B9D8C954C3005;
class Class_2_42C46B3D8BC311E2;
class Class_3_5ABE204154916C7E;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }

#define CLASS_1_F3BE21F8192A010E_METHOD_1_1AF2DA66CAEEB938_OFFSET UNITYSDK_OFFSET(0x16424590)
#define CLASS_1_F3BE21F8192A010E_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16423AF0)
#define CLASS_1_F3BE21F8192A010E_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x16423A30)
#define CLASS_1_F3BE21F8192A010E_METHOD_1_626C719A884DEF9A_OFFSET UNITYSDK_OFFSET(0x16423EF0)
#define CLASS_1_F3BE21F8192A010E_METHOD_1_82B2BADB6C94DC6B_OFFSET UNITYSDK_OFFSET(0x16424E50)
#define CLASS_1_F3BE21F8192A010E_METHOD_1_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x164240D0)
#define CLASS_1_F3BE21F8192A010E_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x16423B30)
#define CLASS_1_F3BE21F8192A010E_METHOD_1_C5A9919B6FBCEFAB_OFFSET UNITYSDK_OFFSET(0x16424140)
#define CLASS_1_F3BE21F8192A010E_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16424040)
#define CLASS_1_F3BE21F8192A010E_METHOD_1_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x16424EE0)
#define CLASS_1_F3BE21F8192A010E_METHOD_1_F629B26C5D2B092E_OFFSET UNITYSDK_OFFSET(0x16423C80)
#define CLASS_1_F3BE21F8192A010E__CTOR_OFFSET UNITYSDK_OFFSET(0x164235B0)

inline static constexpr unsigned int Class_1_F3BE21F8192A010E_TypeDefinitionIndex = 57646;

class Class_1_F3BE21F8192A010E : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* JGONNPBHNNI; // 0x10
	::UnityEngine::Animator* JDFCDMAPBFJ; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::Class_1_800B9D8C954C3005* COFJDABICGN; // 0x28
	::Class_2_42C46B3D8BC311E2* LDFELCNMFFH; // 0x30
	::System::Boolean BCPELJMCIBB; // 0x38
	::System::Boolean PFMNLFEOAGO; // 0x39
	::System::Boolean INJJGMIGFFD; // 0x3A
	::System::Int32 APNGJPMPMOB; // 0x3C
	::System::Single ILGFNDPAIPL; // 0x40
	::UnityEngine::Vector3 DNGJGPHPLEG; // 0x44
	::UnityEngine::Vector3 NAMGGEJCDMP; // 0x50
	::UnityEngine::Vector3 PDJBFBPEHFE; // 0x5C
	::System::Int32 JDKEKGODFLL; // 0x68
	::UnityEngine::Vector3 OGCDCFHCCHA; // 0x6C
	::UnityEngine::Vector3 CEDFLEAIPML; // 0x78
	::System::Single NCOLHAIIGIP; // 0x84

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::TaskContext* a3, ::Class_3_5ABE204154916C7E* a4, ::RPG::GameCore::GameEntity* a5, ::UnityEngine::Vector3 a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::GameCore::TaskContext*, ::Class_3_5ABE204154916C7E*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F3BE21F8192A010E__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3BE21F8192A010E_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F3BE21F8192A010E_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3BE21F8192A010E_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_F629B26C5D2B092E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3BE21F8192A010E_METHOD_1_F629B26C5D2B092E_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3BE21F8192A010E_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_626C719A884DEF9A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F3BE21F8192A010E_METHOD_1_626C719A884DEF9A_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3BE21F8192A010E_METHOD_1_B1936CE4DA97AA45_1_OFFSET))(this);
	}

	::Class_1_800B9D8C954C3005* Method_1_1AF2DA66CAEEB938()
	{
		return ((::Class_1_800B9D8C954C3005*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3BE21F8192A010E_METHOD_1_1AF2DA66CAEEB938_OFFSET))(this);
	}

	::System::Void Method_1_C5A9919B6FBCEFAB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F3BE21F8192A010E_METHOD_1_C5A9919B6FBCEFAB_OFFSET))(this, a1);
	}

	::System::Single Method_1_82B2BADB6C94DC6B(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F3BE21F8192A010E_METHOD_1_82B2BADB6C94DC6B_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3BE21F8192A010E_METHOD_1_F10A0D072D26C4BF_OFFSET))(this);
	}
};
