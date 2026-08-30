#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
#include "unitysdk/System/Object.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_106EC17A985EF0BE_CLEAR_OFFSET UNITYSDK_OFFSET(0x19129290)
#define CLASS_1_106EC17A985EF0BE_METHOD_1_A28C71AC3BA5E2EC_OFFSET UNITYSDK_OFFSET(0x19129060)
#define CLASS_1_106EC17A985EF0BE_METHOD_1_F7EE1BC6F402AEF1_OFFSET UNITYSDK_OFFSET(0x19129360)
#define CLASS_1_106EC17A985EF0BE__CTOR_OFFSET UNITYSDK_OFFSET(0x191296E0)

inline static constexpr unsigned int Class_1_106EC17A985EF0BE_TypeDefinitionIndex = 54195;

class Class_1_106EC17A985EF0BE : public ::System::Object
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x10
	::Class_1_5F51D4049EA87B7B* LLHKOFLJFCH; // 0x18
	::RPG::GameCore::TeamTypeMask AILGGHMGLIN; // 0x20
	::RPG::GameCore::EntityTypeMask JKAGAKJELHA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_106EC17A985EF0BE__CTOR_OFFSET))(this);
	}

	static ::Class_1_106EC17A985EF0BE* Method_1_A28C71AC3BA5E2EC(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PredicateConfig* a2, ::RPG::GameCore::EntityTypeMask a3, ::RPG::GameCore::TeamTypeMask a4)
	{
		return ((::Class_1_106EC17A985EF0BE*(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::PredicateConfig*, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::TeamTypeMask))((::PBYTE)hIl2Cpp + CLASS_1_106EC17A985EF0BE_METHOD_1_A28C71AC3BA5E2EC_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_106EC17A985EF0BE_CLEAR_OFFSET))(this);
	}

	::System::Boolean Method_1_F7EE1BC6F402AEF1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_106EC17A985EF0BE_METHOD_1_F7EE1BC6F402AEF1_OFFSET))(this, a1);
	}
};
