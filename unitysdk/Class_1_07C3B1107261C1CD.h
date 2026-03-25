#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureMoveOnNavMeshFaceToType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define CLASS_1_07C3B1107261C1CD_CLEAR_OFFSET UNITYSDK_OFFSET(0x10B6F860)
#define CLASS_1_07C3B1107261C1CD_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x10B6FF80)
#define CLASS_1_07C3B1107261C1CD_METHOD_1_1B0C48F07D24F4A3_OFFSET UNITYSDK_OFFSET(0x10B6F8D0)
#define CLASS_1_07C3B1107261C1CD_METHOD_1_9785A036174B57AE_OFFSET UNITYSDK_OFFSET(0x10B6F4E0)
#define CLASS_1_07C3B1107261C1CD_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x10B6FF90)
#define CLASS_1_07C3B1107261C1CD__CTOR_OFFSET UNITYSDK_OFFSET(0x10B6FFA0)

inline static constexpr unsigned int Class_1_07C3B1107261C1CD_TypeDefinitionIndex = 45954;

class Class_1_07C3B1107261C1CD : public ::System::Object
{
public:
	::Il2CppArray<::System::Single>* Field_1_6; // 0x10
	::Il2CppArray<::UnityEngine::Vector3>* Field_1_4; // 0x18
	::RPG::GameCore::GameEntity* Field_1_9; // 0x20
	::UnityEngine::Transform* Field_1_10; // 0x28
	::UnityEngine::Vector3 Field_1_1; // 0x30
	::System::Single Field_1_3; // 0x3C
	::System::Boolean _IsActive_k__BackingField; // 0x40
	::System::Single Field_1_2; // 0x44
	::System::Single Field_1_7; // 0x48
	::RPG::GameCore::AdventureMoveOnNavMeshFaceToType Field_1_8; // 0x4C
	::System::Single Field_1_5; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07C3B1107261C1CD__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_9785A036174B57AE(::RPG::GameCore::GameEntity* a1, ::System::Object* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_07C3B1107261C1CD_METHOD_1_9785A036174B57AE_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07C3B1107261C1CD_CLEAR_OFFSET))(this);
	}

	::System::Boolean Method_1_1B0C48F07D24F4A3(::RPG::GameCore::GameEntity* a1, ::System::Single a2, ::RPG::GameCore::AdventureCharacterController* a3, ::System::Boolean& a4, ::UnityEngine::Vector3& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::RPG::GameCore::AdventureCharacterController*, ::System::Boolean&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_07C3B1107261C1CD_METHOD_1_1B0C48F07D24F4A3_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07C3B1107261C1CD_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Void set_IsActive(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_07C3B1107261C1CD_SET_ISACTIVE_OFFSET))(this, value);
	}
};
