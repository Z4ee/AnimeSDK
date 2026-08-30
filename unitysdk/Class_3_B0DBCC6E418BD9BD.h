#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_07BF628E2777E08D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B0DBCC6E418BD9BD_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18917690)
#define CLASS_3_B0DBCC6E418BD9BD__CTOR_OFFSET UNITYSDK_OFFSET(0x189175B0)

inline static constexpr unsigned int Class_3_B0DBCC6E418BD9BD_TypeDefinitionIndex = 54367;

class Class_3_B0DBCC6E418BD9BD : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_07BF628E2777E08D*>
{
public:
	::Il2CppArray<::System::Int32>* EBCEKKEHNLL; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_07BF628E2777E08D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_07BF628E2777E08D*))((::PBYTE)hIl2Cpp + CLASS_3_B0DBCC6E418BD9BD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B0DBCC6E418BD9BD_EVALUATE_OFFSET))(this);
	}
};
