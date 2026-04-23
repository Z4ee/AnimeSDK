#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"
#include "unitysdk/RPG/MVector3.h"

namespace RPG::GameCore { class ByDistance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D4E1ABE1E3CD9F8D_EVALUATE_OFFSET UNITYSDK_OFFSET(0x92282C0)
#define CLASS_3_D4E1ABE1E3CD9F8D_METHOD_3_C5A6E02608184733_OFFSET UNITYSDK_OFFSET(0x9228680)
#define CLASS_3_D4E1ABE1E3CD9F8D__CTOR_OFFSET UNITYSDK_OFFSET(0x9228290)

inline static constexpr unsigned int Class_3_D4E1ABE1E3CD9F8D_TypeDefinitionIndex = 50379;

class Class_3_D4E1ABE1E3CD9F8D : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByDistance*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByDistance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByDistance*))((::PBYTE)hIl2Cpp + CLASS_3_D4E1ABE1E3CD9F8D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D4E1ABE1E3CD9F8D_EVALUATE_OFFSET))(this);
	}

	::System::Single Method_3_C5A6E02608184733(::RPG::GameCore::GameEntity* a1, ::RPG::MVector3& a2)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::MVector3&))((::PBYTE)hIl2Cpp + CLASS_3_D4E1ABE1E3CD9F8D_METHOD_3_C5A6E02608184733_OFFSET))(this, a1, a2);
	}
};
