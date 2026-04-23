#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/System/Object.h"

class Class_1_83665B095F1535B5_16;
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class LevelGraphConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TaskListTemplate; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_B5969563F77DAF6E_METHOD_1_3B1C9D0D7D468D1D_OFFSET UNITYSDK_OFFSET(0x10044530)
#define CLASS_1_B5969563F77DAF6E_METHOD_1_627D5B4950E541C2_OFFSET UNITYSDK_OFFSET(0x100444A0)
#define CLASS_1_B5969563F77DAF6E_METHOD_1_66BD7EBDB58AA665_OFFSET UNITYSDK_OFFSET(0x10044340)
#define CLASS_1_B5969563F77DAF6E_METHOD_1_83974E72220214C9_OFFSET UNITYSDK_OFFSET(0x10043F70)
#define CLASS_1_B5969563F77DAF6E_METHOD_1_8CA5330C6F6BD2E0_OFFSET UNITYSDK_OFFSET(0x10043EE0)
#define CLASS_1_B5969563F77DAF6E_METHOD_1_BF0BDBC966C0A3D7_OFFSET UNITYSDK_OFFSET(0x100442A0)

inline static constexpr unsigned int Class_1_B5969563F77DAF6E_TypeDefinitionIndex = 49557;

class Class_1_B5969563F77DAF6E : public ::System::Object
{
public:
	static ::RPG::GameCore::GameEntity* Method_1_8CA5330C6F6BD2E0(::RPG::GameCore::EntityManager* a1, ::System::String* a2, ::RPG::GameCore::EntityType a3, ::UnityEngine::GameObject* a4)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::System::String*, ::RPG::GameCore::EntityType, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_B5969563F77DAF6E_METHOD_1_8CA5330C6F6BD2E0_OFFSET))(a1, a2, a3, a4);
	}

	static ::RPG::GameCore::GameEntity* Method_1_83974E72220214C9(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::LevelGraphConfig* a2, ::System::String* a3, ::RPG::GameCore::EntityType a4, ::UnityEngine::GameObject* a5, ::Class_1_83665B095F1535B5_16* a6)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::LevelGraphConfig*, ::System::String*, ::RPG::GameCore::EntityType, ::UnityEngine::GameObject*, ::Class_1_83665B095F1535B5_16*))((::PBYTE)hIl2Cpp + CLASS_1_B5969563F77DAF6E_METHOD_1_83974E72220214C9_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Int32 Method_1_BF0BDBC966C0A3D7(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B5969563F77DAF6E_METHOD_1_BF0BDBC966C0A3D7_OFFSET))(a1);
	}

	static ::RPG::GameCore::TaskListTemplate* Method_1_66BD7EBDB58AA665(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
	{
		return ((::RPG::GameCore::TaskListTemplate*(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B5969563F77DAF6E_METHOD_1_66BD7EBDB58AA665_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::GameEntity* Method_1_627D5B4950E541C2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B5969563F77DAF6E_METHOD_1_627D5B4950E541C2_OFFSET))(a1);
	}

	static ::RPG::GameCore::GameEntityList* Method_1_3B1C9D0D7D468D1D(::RPG::GameCore::TargetEvaluator* a1, ::RPG::GameCore::GameWorld* a2, ::RPG::GameCore::AliveStateMask a3)
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::RPG::GameCore::TargetEvaluator*, ::RPG::GameCore::GameWorld*, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + CLASS_1_B5969563F77DAF6E_METHOD_1_3B1C9D0D7D468D1D_OFFSET))(a1, a2, a3);
	}
};
