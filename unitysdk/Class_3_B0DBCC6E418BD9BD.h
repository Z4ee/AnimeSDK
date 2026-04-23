#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_818FA57DF6DA2AAA;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B0DBCC6E418BD9BD_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBADAED0)
#define CLASS_3_B0DBCC6E418BD9BD__CTOR_OFFSET UNITYSDK_OFFSET(0xBADADE0)

inline static constexpr unsigned int Class_3_B0DBCC6E418BD9BD_TypeDefinitionIndex = 49934;

class Class_3_B0DBCC6E418BD9BD : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_818FA57DF6DA2AAA*>
{
public:
	::Il2CppArray<::System::Int32>* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_818FA57DF6DA2AAA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_818FA57DF6DA2AAA*))((::PBYTE)hIl2Cpp + CLASS_3_B0DBCC6E418BD9BD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B0DBCC6E418BD9BD_EVALUATE_OFFSET))(this);
	}
};
