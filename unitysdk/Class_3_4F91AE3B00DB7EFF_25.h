#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_D5277F1C84020241;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_25_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11A2B940)
#define CLASS_3_4F91AE3B00DB7EFF_25__CTOR_OFFSET UNITYSDK_OFFSET(0x11A2B910)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_25_TypeDefinitionIndex = 49673;

class Class_3_4F91AE3B00DB7EFF_25 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_D5277F1C84020241*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_D5277F1C84020241* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_D5277F1C84020241*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_25__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_25_EVALUATE_OFFSET))(this);
	}
};
