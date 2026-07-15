#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_2_9A097580DF02CED3;
namespace RPG::GameCore { class ST_ByHasBornSmartObject; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0FA09FA4ED5D5A23_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15EBE740)
#define CLASS_3_0FA09FA4ED5D5A23__CTOR_OFFSET UNITYSDK_OFFSET(0x15EBE680)

inline static constexpr unsigned int Class_3_0FA09FA4ED5D5A23_TypeDefinitionIndex = 49821;

class Class_3_0FA09FA4ED5D5A23 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ByHasBornSmartObject*>
{
public:
	::Class_2_9A097580DF02CED3* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByHasBornSmartObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByHasBornSmartObject*))((::PBYTE)hIl2Cpp + CLASS_3_0FA09FA4ED5D5A23__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0FA09FA4ED5D5A23_EVALUATE_OFFSET))(this);
	}
};
