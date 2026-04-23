#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByHaveEnemyAlive; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_3_A70D9ADF0C0C4EFD_EVALUATE_OFFSET UNITYSDK_OFFSET(0x124FBF40)
#define CLASS_3_A70D9ADF0C0C4EFD_METHOD_3_5E1FBA3144D5777D_OFFSET UNITYSDK_OFFSET(0x124FC2D0)
#define CLASS_3_A70D9ADF0C0C4EFD_METHOD_3_83C4D0047844D3AF_OFFSET UNITYSDK_OFFSET(0x124FC1C0)
#define CLASS_3_A70D9ADF0C0C4EFD_METHOD_3_9088EA8699A76E6B_OFFSET UNITYSDK_OFFSET(0x124FC350)
#define CLASS_3_A70D9ADF0C0C4EFD__CTOR_OFFSET UNITYSDK_OFFSET(0x124FBF10)

inline static constexpr unsigned int Class_3_A70D9ADF0C0C4EFD_TypeDefinitionIndex = 50401;

class Class_3_A70D9ADF0C0C4EFD : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByHaveEnemyAlive*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHaveEnemyAlive* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHaveEnemyAlive*))((::PBYTE)hIl2Cpp + CLASS_3_A70D9ADF0C0C4EFD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A70D9ADF0C0C4EFD_EVALUATE_OFFSET))(this);
	}

	::System::Predicate_1<::RPG::GameCore::GameEntity*>* Method_3_83C4D0047844D3AF()
	{
		return ((::System::Predicate_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A70D9ADF0C0C4EFD_METHOD_3_83C4D0047844D3AF_OFFSET))(this);
	}

	::System::Boolean Method_3_5E1FBA3144D5777D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_A70D9ADF0C0C4EFD_METHOD_3_5E1FBA3144D5777D_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_9088EA8699A76E6B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_A70D9ADF0C0C4EFD_METHOD_3_9088EA8699A76E6B_OFFSET))(this, a1);
	}
};
