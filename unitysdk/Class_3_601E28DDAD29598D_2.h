#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_2_5436AF4270279182;
class Class_4_F9B012EBD64B96B0;
namespace RPG::GameCore { class ChenLingFesPredicateItemCondition; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_601E28DDAD29598D_2_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16B4DB80)
#define CLASS_3_601E28DDAD29598D_2_METHOD_3_9A6AA3BA3AAACE99_OFFSET UNITYSDK_OFFSET(0x16B4DCD0)
#define CLASS_3_601E28DDAD29598D_2__CTOR_OFFSET UNITYSDK_OFFSET(0x16B4DB00)

inline static constexpr unsigned int Class_3_601E28DDAD29598D_2_TypeDefinitionIndex = 52942;

class Class_3_601E28DDAD29598D_2 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_F9B012EBD64B96B0*>
{
public:
	::Class_2_5436AF4270279182* MMJENPHFBAB; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_F9B012EBD64B96B0* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_F9B012EBD64B96B0*))((::PBYTE)hIl2Cpp + CLASS_3_601E28DDAD29598D_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_601E28DDAD29598D_2_EVALUATE_OFFSET))(this);
	}

	::System::Boolean Method_3_9A6AA3BA3AAACE99(::RPG::GameCore::ChenLingFesPredicateItemCondition* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChenLingFesPredicateItemCondition*))((::PBYTE)hIl2Cpp + CLASS_3_601E28DDAD29598D_2_METHOD_3_9A6AA3BA3AAACE99_OFFSET))(this, a1);
	}
};
