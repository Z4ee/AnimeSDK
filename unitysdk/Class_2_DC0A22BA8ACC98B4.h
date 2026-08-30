#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_54715B955DC6C855.h"
#include "unitysdk/RPG/GameCore/AdventureUAVFlyingProxyType.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }

#define CLASS_2_DC0A22BA8ACC98B4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A45AE50)
#define CLASS_2_DC0A22BA8ACC98B4_GET_MOVESPEEDRATIO_OFFSET UNITYSDK_OFFSET(0x195E4070)
#define CLASS_2_DC0A22BA8ACC98B4_GET_REQUIRESTANDONGROUND_OFFSET UNITYSDK_OFFSET(0x195E4060)
#define CLASS_2_DC0A22BA8ACC98B4_METHOD_2_099BABCC29F69C12_OFFSET UNITYSDK_OFFSET(0x1A45AA80)
#define CLASS_2_DC0A22BA8ACC98B4_METHOD_2_1DDC33B7C40B2B5F_OFFSET UNITYSDK_OFFSET(0x1A4592D0)
#define CLASS_2_DC0A22BA8ACC98B4_METHOD_2_697238BBC8EC27F5_OFFSET UNITYSDK_OFFSET(0x1A4599A0)
#define CLASS_2_DC0A22BA8ACC98B4_METHOD_2_C2C280FCD5DD48C5_OFFSET UNITYSDK_OFFSET(0x1A459710)
#define CLASS_2_DC0A22BA8ACC98B4_METHOD_2_CC62E583B99CB14F_OFFSET UNITYSDK_OFFSET(0x1A4595B0)
#define CLASS_2_DC0A22BA8ACC98B4_METHOD_2_EC1B7452242AE25F_OFFSET UNITYSDK_OFFSET(0x1A459360)
#define CLASS_2_DC0A22BA8ACC98B4_SET_MOVESPEEDRATIO_OFFSET UNITYSDK_OFFSET(0x195E4080)
#define CLASS_2_DC0A22BA8ACC98B4__CTOR_OFFSET UNITYSDK_OFFSET(0x195E4090)

inline static constexpr unsigned int Class_2_DC0A22BA8ACC98B4_TypeDefinitionIndex = 57273;

class Class_2_DC0A22BA8ACC98B4 : public ::Class_1_54715B955DC6C855
{
public:
	// static const ::System::Single OADDOIFOGON; // 0x0
	// static const ::System::Single APFHLKMLHKI; // 0x0
	// static const ::System::Single HAOBIPNJAAC; // 0x0
	::RPG::GameCore::AdventureUAVFlyingProxyType GCPLCNLPMGF; // 0x168
	::System::Single _MoveSpeedRatio_k__BackingField; // 0x16C

	::System::Void _ctor(::RPG::GameCore::AdventureCharacterController* a1, ::RPG::GameCore::AdventureUAVFlyingProxyType a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*, ::RPG::GameCore::AdventureUAVFlyingProxyType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DC0A22BA8ACC98B4__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean get_RequireStandOnGround()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC0A22BA8ACC98B4_GET_REQUIRESTANDONGROUND_OFFSET))(this);
	}

	::System::Single get_MoveSpeedRatio()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC0A22BA8ACC98B4_GET_MOVESPEEDRATIO_OFFSET))(this);
	}

	::System::Void set_MoveSpeedRatio(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DC0A22BA8ACC98B4_SET_MOVESPEEDRATIO_OFFSET))(this, a1);
	}

	::System::Void Method_2_1DDC33B7C40B2B5F(::UnityEngine::GameObject* a1, ::UnityEngine::Rigidbody* a2, ::UnityEngine::CapsuleCollider* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Rigidbody*, ::UnityEngine::CapsuleCollider*))((::PBYTE)hIl2Cpp + CLASS_2_DC0A22BA8ACC98B4_METHOD_2_1DDC33B7C40B2B5F_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_2_EC1B7452242AE25F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_DC0A22BA8ACC98B4_METHOD_2_EC1B7452242AE25F_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_CC62E583B99CB14F(::RPG::GameCore::CharacterInputData* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_DC0A22BA8ACC98B4_METHOD_2_CC62E583B99CB14F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C2C280FCD5DD48C5(::UnityEngine::RaycastHit& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_DC0A22BA8ACC98B4_METHOD_2_C2C280FCD5DD48C5_OFFSET))(this, a1);
	}

	::System::Void Method_2_697238BBC8EC27F5(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::UnityEngine::RaycastHit& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_DC0A22BA8ACC98B4_METHOD_2_697238BBC8EC27F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC0A22BA8ACC98B4_DISPOSE_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_099BABCC29F69C12(::UnityEngine::Vector3 a1, ::UnityEngine::RaycastHit& a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_DC0A22BA8ACC98B4_METHOD_2_099BABCC29F69C12_OFFSET))(this, a1, a2);
	}
};
