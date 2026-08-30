#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class ByTargetListAny; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A36E28581E094C38_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16E8FEE0)
#define CLASS_3_A36E28581E094C38_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16E8FB70)
#define CLASS_3_A36E28581E094C38__CTOR_OFFSET UNITYSDK_OFFSET(0x16E8FAA0)

inline static constexpr unsigned int Class_3_A36E28581E094C38_TypeDefinitionIndex = 54934;

class Class_3_A36E28581E094C38 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByTargetListAny*>
{
public:
	::Class_1_5F51D4049EA87B7B* LLHKOFLJFCH; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTargetListAny* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTargetListAny*))((::PBYTE)hIl2Cpp + CLASS_3_A36E28581E094C38__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A36E28581E094C38_EVALUATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A36E28581E094C38_DISPOSE_OFFSET))(this);
	}
};
