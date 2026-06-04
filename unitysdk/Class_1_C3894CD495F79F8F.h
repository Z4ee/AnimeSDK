#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureMoveOnNavMeshFaceToType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define CLASS_1_C3894CD495F79F8F_CLEAR_OFFSET UNITYSDK_OFFSET(0xE45F040)
#define CLASS_1_C3894CD495F79F8F_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xE45F6C0)
#define CLASS_1_C3894CD495F79F8F_METHOD_1_9785A036174B57AE_OFFSET UNITYSDK_OFFSET(0xE45ECB0)
#define CLASS_1_C3894CD495F79F8F_METHOD_1_B739FEC8F534D697_OFFSET UNITYSDK_OFFSET(0xE45F0C0)
#define CLASS_1_C3894CD495F79F8F_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xE45F6D0)
#define CLASS_1_C3894CD495F79F8F__CTOR_OFFSET UNITYSDK_OFFSET(0xE45F6E0)

inline static constexpr unsigned int Class_1_C3894CD495F79F8F_TypeDefinitionIndex = 53315;

class Class_1_C3894CD495F79F8F : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::Il2CppArray<::System::Single>* Field_1_1; // 0x18
	::Il2CppArray<::UnityEngine::Vector3>* Field_1_2; // 0x20
	::UnityEngine::Transform* Field_1_3; // 0x28
	::System::Single Field_1_4; // 0x30
	::System::Single Field_1_5; // 0x34
	::RPG::GameCore::AdventureMoveOnNavMeshFaceToType Field_1_6; // 0x38
	::System::Boolean _IsActive_k__BackingField; // 0x3C
	::UnityEngine::Vector3 Field_1_8; // 0x40
	::System::Single Field_1_9; // 0x4C
	::System::Single Field_1_10; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3894CD495F79F8F__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_9785A036174B57AE(::RPG::GameCore::GameEntity* a1, ::System::Object* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C3894CD495F79F8F_METHOD_1_9785A036174B57AE_OFFSET))(this, a1, a2);
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
