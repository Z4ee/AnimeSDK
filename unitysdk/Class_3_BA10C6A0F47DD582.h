#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_4C4745FFCF04854A;
class Class_3_883E597458B91E77;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityAttackPattern; }
namespace MoleMole::Config { class ConfigHitData; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_3_BA10C6A0F47DD582_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x12A99E90)
#define CLASS_3_BA10C6A0F47DD582_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x12A9A140)
#define CLASS_3_BA10C6A0F47DD582_METHOD_3_027864CE4FE0A1BB_OFFSET UNITYSDK_OFFSET(0x12A9BA60)
#define CLASS_3_BA10C6A0F47DD582_METHOD_3_228D45E42B6F282D_OFFSET UNITYSDK_OFFSET(0x12A9B5D0)
#define CLASS_3_BA10C6A0F47DD582_METHOD_3_39764272A7CF6D73_OFFSET UNITYSDK_OFFSET(0x12A9A540)
#define CLASS_3_BA10C6A0F47DD582_METHOD_3_5006CB03D2C134A9_OFFSET UNITYSDK_OFFSET(0x12A9B810)
#define CLASS_3_BA10C6A0F47DD582_METHOD_3_54481C5DEFE485A7_OFFSET UNITYSDK_OFFSET(0x12A9AC40)
#define CLASS_3_BA10C6A0F47DD582_METHOD_3_58B01D2C568A8062_OFFSET UNITYSDK_OFFSET(0x12A9A2F0)
#define CLASS_3_BA10C6A0F47DD582_METHOD_3_79F4CD53BDA32676_OFFSET UNITYSDK_OFFSET(0x12A9A640)
#define CLASS_3_BA10C6A0F47DD582_METHOD_3_A643F8A8E3229053_OFFSET UNITYSDK_OFFSET(0x12A9B370)
#define CLASS_3_BA10C6A0F47DD582_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x12A9C430)
#define CLASS_3_BA10C6A0F47DD582_METHOD_3_C463A83205FEF77D_OFFSET UNITYSDK_OFFSET(0x12A9BB80)
#define CLASS_3_BA10C6A0F47DD582_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12A9B110)
#define CLASS_3_BA10C6A0F47DD582_METHOD_3_CB680BB9241E6DE9_OFFSET UNITYSDK_OFFSET(0x12A9C2A0)
#define CLASS_3_BA10C6A0F47DD582_METHOD_3_CC45650C436C986E_OFFSET UNITYSDK_OFFSET(0x12A9C200)
#define CLASS_3_BA10C6A0F47DD582_METHOD_3_DE4E1CCB1E828207_OFFSET UNITYSDK_OFFSET(0x12A9B1A0)
#define CLASS_3_BA10C6A0F47DD582__CTOR_OFFSET UNITYSDK_OFFSET(0x12A9A2A0)

inline static constexpr unsigned int Class_3_BA10C6A0F47DD582_TypeDefinitionIndex = 41826;

class Class_3_BA10C6A0F47DD582 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BA10C6A0F47DD582__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_BA10C6A0F47DD582_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BA10C6A0F47DD582_FIXEDUPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_58B01D2C568A8062(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_BA10C6A0F47DD582_METHOD_3_58B01D2C568A8062_OFFSET))(a1);
	}

	static ::System::Void Method_3_79F4CD53BDA32676(::System::Single a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_BA10C6A0F47DD582_METHOD_3_79F4CD53BDA32676_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BA10C6A0F47DD582_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_DE4E1CCB1E828207(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_BA10C6A0F47DD582_METHOD_3_DE4E1CCB1E828207_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_3_54481C5DEFE485A7(::MoleMole::Battle::Entity* a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_BA10C6A0F47DD582_METHOD_3_54481C5DEFE485A7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A643F8A8E3229053(::Class_3_4C4745FFCF04854A* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::UnityEngine::AnimationCurve* a6, ::UnityEngine::AnimationCurve* a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::Class_3_4C4745FFCF04854A*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_BA10C6A0F47DD582_METHOD_3_A643F8A8E3229053_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void Method_3_228D45E42B6F282D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_BA10C6A0F47DD582_METHOD_3_228D45E42B6F282D_OFFSET))(a1);
	}

	static ::System::Void Method_3_027864CE4FE0A1BB(::Class_3_4C4745FFCF04854A* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Config::ConfigHitData* a5, ::MoleMole::Config::ConfigEntityAttackPattern* a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::Class_3_4C4745FFCF04854A*, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigHitData*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_BA10C6A0F47DD582_METHOD_3_027864CE4FE0A1BB_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_3_CC45650C436C986E(::UnityEngine::AnimatorStateInfo a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3, ::MoleMole::Battle::Entity* a4)
	{
		return ((::System::Void(*)(::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_BA10C6A0F47DD582_METHOD_3_CC45650C436C986E_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_CB680BB9241E6DE9(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_BA10C6A0F47DD582_METHOD_3_CB680BB9241E6DE9_OFFSET))(a1);
	}

	static ::System::Void Method_3_39764272A7CF6D73(::Class_3_4C4745FFCF04854A* a1, ::Class_3_883E597458B91E77* a2)
	{
		return ((::System::Void(*)(::Class_3_4C4745FFCF04854A*, ::Class_3_883E597458B91E77*))((::PBYTE)hIl2Cpp + CLASS_3_BA10C6A0F47DD582_METHOD_3_39764272A7CF6D73_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_BA10C6A0F47DD582_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_5006CB03D2C134A9(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_BA10C6A0F47DD582_METHOD_3_5006CB03D2C134A9_OFFSET))(a1);
	}

	static ::System::Single Method_3_C463A83205FEF77D(::Class_3_4C4745FFCF04854A* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Config::ConfigHitData* a3, ::MoleMole::Config::ConfigEntityAttackPattern* a4)
	{
		return ((::System::Single(*)(::Class_3_4C4745FFCF04854A*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigHitData*, ::MoleMole::Config::ConfigEntityAttackPattern*))((::PBYTE)hIl2Cpp + CLASS_3_BA10C6A0F47DD582_METHOD_3_C463A83205FEF77D_OFFSET))(a1, a2, a3, a4);
	}
};
