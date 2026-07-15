#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureMoveOnNavMeshFaceToType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define CLASS_1_C3894CD495F79F8F_CLEAR_OFFSET UNITYSDK_OFFSET(0x16F8E420)
#define CLASS_1_C3894CD495F79F8F_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x16F8EAA0)
#define CLASS_1_C3894CD495F79F8F_METHOD_1_76C9985FF1BF1939_OFFSET UNITYSDK_OFFSET(0x16F8E090)
#define CLASS_1_C3894CD495F79F8F_METHOD_1_B739FEC8F534D697_OFFSET UNITYSDK_OFFSET(0x16F8E4A0)
#define CLASS_1_C3894CD495F79F8F_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x16F8EAB0)
#define CLASS_1_C3894CD495F79F8F__CTOR_OFFSET UNITYSDK_OFFSET(0x16F8EAC0)

inline static constexpr unsigned int Class_1_C3894CD495F79F8F_TypeDefinitionIndex = 54530;

class Class_1_C3894CD495F79F8F : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::Vector3>* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18
	::UnityEngine::Transform* Field_1_2; // 0x20
	::Il2CppArray<::System::Single>* Field_1_3; // 0x28
	::RPG::GameCore::AdventureMoveOnNavMeshFaceToType Field_1_4; // 0x30
	::System::Boolean _IsActive_k__BackingField; // 0x34
	::System::Single Field_1_6; // 0x38
	::System::Single Field_1_7; // 0x3C
	::System::Single Field_1_8; // 0x40
	::System::Single Field_1_9; // 0x44
	::UnityEngine::Vector3 Field_1_10; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3894CD495F79F8F__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_76C9985FF1BF1939(::RPG::GameCore::GameEntity* a1, ::System::Object* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C3894CD495F79F8F_METHOD_1_76C9985FF1BF1939_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3894CD495F79F8F_CLEAR_OFFSET))(this);
	}

	::System::Boolean Method_1_B739FEC8F534D697(::RPG::GameCore::GameEntity* a1, ::System::Single a2, ::RPG::GameCore::AdventureCharacterController* a3, ::System::Boolean& a4, ::UnityEngine::Vector3& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::RPG::GameCore::AdventureCharacterController*, ::System::Boolean&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_C3894CD495F79F8F_METHOD_1_B739FEC8F534D697_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3894CD495F79F8F_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Void set_IsActive(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C3894CD495F79F8F_SET_ISACTIVE_OFFSET))(this, a1);
	}
};
