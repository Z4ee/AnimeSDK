#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureMoveOnNavMeshFaceToType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define CLASS_1_00A784C26F647152_CLEAR_OFFSET UNITYSDK_OFFSET(0x1286EE50)
#define CLASS_1_00A784C26F647152_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1286F940)
#define CLASS_1_00A784C26F647152_METHOD_1_5CD22002E2677041_OFFSET UNITYSDK_OFFSET(0x1286EEA0)
#define CLASS_1_00A784C26F647152_METHOD_1_6CCB5EE602A1B0E4_OFFSET UNITYSDK_OFFSET(0x1286F0C0)
#define CLASS_1_00A784C26F647152_METHOD_1_76DAD977ED622CDA_OFFSET UNITYSDK_OFFSET(0x1286EC70)
#define CLASS_1_00A784C26F647152_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1286F950)
#define CLASS_1_00A784C26F647152__CTOR_OFFSET UNITYSDK_OFFSET(0x1286F960)

inline static constexpr unsigned int Class_1_00A784C26F647152_TypeDefinitionIndex = 52616;

class Class_1_00A784C26F647152 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_12; // 0x0
	// static const ::System::Single Field_1_13; // 0x0
	::Il2CppArray<::System::Single>* Field_1_2; // 0x10
	::Il2CppArray<::UnityEngine::Vector3>* Field_1_1; // 0x18
	::RPG::GameCore::GameEntity* Field_1_10; // 0x20
	::UnityEngine::Transform* Field_1_14; // 0x28
	::RPG::GameCore::GameEntity* Field_1_7; // 0x30
	::System::Single Field_1_8; // 0x38
	::System::Int32 Field_1_3; // 0x3C
	::System::Single Field_1_11; // 0x40
	::System::Single Field_1_4; // 0x44
	::RPG::GameCore::AdventureMoveOnNavMeshFaceToType Field_1_9; // 0x48
	::System::Single Field_1_5; // 0x4C
	::System::Single Field_1_6; // 0x50
	::System::Boolean _IsActive_k__BackingField; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00A784C26F647152__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_76DAD977ED622CDA(::RPG::GameCore::GameEntity* a1, ::System::Object* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_00A784C26F647152_METHOD_1_76DAD977ED622CDA_OFFSET))(this, a1, a2);
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

	::System::Void set_IsActive(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_00A784C26F647152_SET_ISACTIVE_OFFSET))(this, value);
	}
};
