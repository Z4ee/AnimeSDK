#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureMoveOnNavMeshFaceToType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define CLASS_1_00A784C26F647152_CLEAR_OFFSET UNITYSDK_OFFSET(0x15B82620)
#define CLASS_1_00A784C26F647152_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x15B830C0)
#define CLASS_1_00A784C26F647152_METHOD_1_5CD22002E2677041_OFFSET UNITYSDK_OFFSET(0x15B82680)
#define CLASS_1_00A784C26F647152_METHOD_1_6CCB5EE602A1B0E4_OFFSET UNITYSDK_OFFSET(0x15B82890)
#define CLASS_1_00A784C26F647152_METHOD_1_FEE22B9361688EB5_OFFSET UNITYSDK_OFFSET(0x15B82440)
#define CLASS_1_00A784C26F647152_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x15B830D0)
#define CLASS_1_00A784C26F647152__CTOR_OFFSET UNITYSDK_OFFSET(0x15B830E0)

inline static constexpr unsigned int Class_1_00A784C26F647152_TypeDefinitionIndex = 57252;

class Class_1_00A784C26F647152 : public ::System::Object
{
public:
	// static const ::System::Single BILJLIDLBIJ; // 0x0
	// static const ::System::Single HIGKCDFBEON; // 0x0
	::UnityEngine::Transform* AFIBNIPMICJ; // 0x10
	::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x18
	::Il2CppArray<::UnityEngine::Vector3>* FJKLKJCBJGC; // 0x20
	::RPG::GameCore::GameEntity* IDHIFEDLFDN; // 0x28
	::Il2CppArray<::System::Single>* FNKPDLLALIO; // 0x30
	::RPG::GameCore::AdventureMoveOnNavMeshFaceToType MLMEAGPKCIA; // 0x38
	::System::Single HPCHCEFOKJB; // 0x3C
	::System::Int32 DPMIEOJHAGA; // 0x40
	::System::Boolean _IsActive_k__BackingField; // 0x44
	::System::Single CLEHKNOLHMC; // 0x48
	::System::Single HGEMDOPMOPG; // 0x4C
	::System::Single MBPJEPNJHBA; // 0x50
	::System::Single NPINECOCALC; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00A784C26F647152__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_FEE22B9361688EB5(::RPG::GameCore::GameEntity* a1, ::System::Object* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_00A784C26F647152_METHOD_1_FEE22B9361688EB5_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00A784C26F647152_CLEAR_OFFSET))(this);
	}

	::System::Boolean Method_1_6CCB5EE602A1B0E4(::RPG::GameCore::GameEntity* a1, ::System::Single a2, ::RPG::GameCore::AdventureCharacterController* a3, ::System::Boolean& a4, ::UnityEngine::Vector3& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::RPG::GameCore::AdventureCharacterController*, ::System::Boolean&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_00A784C26F647152_METHOD_1_6CCB5EE602A1B0E4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_5CD22002E2677041(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_00A784C26F647152_METHOD_1_5CD22002E2677041_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00A784C26F647152_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Void set_IsActive(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_00A784C26F647152_SET_ISACTIVE_OFFSET))(this, a1);
	}
};
