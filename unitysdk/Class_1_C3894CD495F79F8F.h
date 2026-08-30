#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureMoveOnNavMeshFaceToType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define CLASS_1_C3894CD495F79F8F_CLEAR_OFFSET UNITYSDK_OFFSET(0xF3CE600)
#define CLASS_1_C3894CD495F79F8F_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xF3CEC80)
#define CLASS_1_C3894CD495F79F8F_METHOD_1_9785A036174B57AE_OFFSET UNITYSDK_OFFSET(0xF3CE270)
#define CLASS_1_C3894CD495F79F8F_METHOD_1_B739FEC8F534D697_OFFSET UNITYSDK_OFFSET(0xF3CE680)
#define CLASS_1_C3894CD495F79F8F_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xF3CEC90)
#define CLASS_1_C3894CD495F79F8F__CTOR_OFFSET UNITYSDK_OFFSET(0xF3CECA0)

inline static constexpr unsigned int Class_1_C3894CD495F79F8F_TypeDefinitionIndex = 57251;

class Class_1_C3894CD495F79F8F : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* IDHIFEDLFDN; // 0x10
	::Il2CppArray<::UnityEngine::Vector3>* FJKLKJCBJGC; // 0x18
	::UnityEngine::Transform* AFIBNIPMICJ; // 0x20
	::Il2CppArray<::System::Single>* FNKPDLLALIO; // 0x28
	::System::Single HBDJCFFDGDD; // 0x30
	::RPG::GameCore::AdventureMoveOnNavMeshFaceToType MLMEAGPKCIA; // 0x34
	::System::Boolean _IsActive_k__BackingField; // 0x38
	::UnityEngine::Vector3 CBBLCMFPEOL; // 0x3C
	::System::Single NPINECOCALC; // 0x48
	::System::Single HPCHCEFOKJB; // 0x4C
	::System::Single IJKFPHAKDEA; // 0x50

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
