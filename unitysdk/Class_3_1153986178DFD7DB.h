#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareIsWolfBroBulletActivated; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1153986178DFD7DB_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11863010)
#define CLASS_3_1153986178DFD7DB__CTOR_OFFSET UNITYSDK_OFFSET(0x11862FE0)

inline static constexpr unsigned int Class_3_1153986178DFD7DB_TypeDefinitionIndex = 48543;

class Class_3_1153986178DFD7DB : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareIsWolfBroBulletActivated*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated*))((::PBYTE)hIl2Cpp + CLASS_3_1153986178DFD7DB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1153986178DFD7DB_EVALUATE_OFFSET))(this);
	}
};
