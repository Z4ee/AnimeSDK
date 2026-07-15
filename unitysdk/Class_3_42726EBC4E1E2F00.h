#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_72FF3C03F0F06A80;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class CreateSummonUnit; }
namespace RPG::GameCore { class EntityPosAdaptionConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_42726EBC4E1E2F00_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1586A320)
#define CLASS_3_42726EBC4E1E2F00_METHOD_3_25971FCF36C209CF_OFFSET UNITYSDK_OFFSET(0x1586A3F0)
#define CLASS_3_42726EBC4E1E2F00_METHOD_3_816FC8A84962A1EB_OFFSET UNITYSDK_OFFSET(0x1586B830)
#define CLASS_3_42726EBC4E1E2F00_METHOD_3_9029BA80CA63A4CA_OFFSET UNITYSDK_OFFSET(0x1586AEF0)
#define CLASS_3_42726EBC4E1E2F00_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1586A570)
#define CLASS_3_42726EBC4E1E2F00__CTOR_OFFSET UNITYSDK_OFFSET(0x1586A280)

inline static constexpr unsigned int Class_3_42726EBC4E1E2F00_TypeDefinitionIndex = 55482;

class Class_3_42726EBC4E1E2F00 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CreateSummonUnit*>
{
public:
	::Class_3_07C3C4D2990C49EE* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateSummonUnit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateSummonUnit*))((::PBYTE)hIl2Cpp + CLASS_3_42726EBC4E1E2F00__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_42726EBC4E1E2F00_DISPOSE_OFFSET))(this);
	}

	::System::UInt32 Method_3_25971FCF36C209CF()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_42726EBC4E1E2F00_METHOD_3_25971FCF36C209CF_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_42726EBC4E1E2F00_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_3_816FC8A84962A1EB(::Class_1_72FF3C03F0F06A80* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5, ::System::Boolean a6)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::Class_1_72FF3C03F0F06A80*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_42726EBC4E1E2F00_METHOD_3_816FC8A84962A1EB_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_9029BA80CA63A4CA(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::EntityPosAdaptionConfig* a4, ::UnityEngine::Quaternion& a5, ::UnityEngine::Vector3& a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::EntityPosAdaptionConfig*, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_42726EBC4E1E2F00_METHOD_3_9029BA80CA63A4CA_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
